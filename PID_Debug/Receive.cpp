#include "Receive.h"

Receive::Receive(QObject *parent, QSerialPort *port)
	: QObject(parent), serialPort(port)
{
	buff = new unsigned char[4];
	count = 0;
}

void Receive::receive_uart_data()
{
	if (serialPort->isReadable())
	{
		QByteArray buf;
		buf = serialPort->readAll();

		if (buf.length() > 0)
		{
			for (int i = 0; i < buf.length(); i++)
			{
				switch (count)
				{
				case 0:
					if (buf.at(i) == '$')
					{
						count = 1;
						data.append(buf.at(i));
						break;
					}
					receive_fail();
					break;
				case 1: 
					if (buf.at(i) == '%')
					{
						count = 2;
						data.append(buf.at(i));
						break;
					}
					if (buf.at(i) == '$')
						break;
					count = 0;
					receive_fail();
					break;
				case 2:
				/*	if (buf.at(i) == '$')
					{
						count = 3;
						break;
					}*/
					data.append(buf.at(i));
					if (data.length() == 3)
					{
						if (data.at(2) > 7 && data.at(2) < 1)
						{
							receive_fail();
							break;
						}
						else
							receiveDataNum = data.at(2);
					}
					if (data.length() > receiveDataNum * 4 + 3)
					{
						receive_fail();
						break;
					}
					if (data.length() == receiveDataNum * 4 + 3)
						data_processing();
					break;
			/*	case 3:
					if (buf.at(i) == '%')
					{
						count = 2;
						break;
					}*/
				}
				
				//第一次接收到"$"
				//if (buf.at(i) == '$' || receiveStartFlag == false)
				//	receiveStartFlag = true;

				////if (buf.at(i) == '$' || receiveStartFlag == false)

				//if (receiveStartFlag)
				//{
				//	data.append(buf.at(i));
				//	if (data.length() == 2)
				//	{
				//		if (data.at(1) > 7 && data.at(1) < 1)
				//			receive_fail();
				//		else
				//			receiveDataNum = data.at(1);
				//	}
				//	if (data.length() > receiveDataNum * 4 + 2)
				//		receive_fail();
				//	if (data.length() == receiveDataNum * 4 + 2)
				//		data_processing();
				//}
			}
		}
	}
}

void Receive::data_processing()
{
	//qDebug() << data.length();
	//qDebug() << data;
	data.remove(0, 3);
	float data_float;
	//for (int i = 0; i < data.length(); i++)
	//{
	//	*(buff + i) = data.at(i);
	//}
	//qDebug() << data.length();
	for (char i = 0; i < receiveDataNum; i++)
	{
		for (char j = 0; j < 4; j++)
		{
			//qDebug()<<int(data.at(i * 4 + j));
			buff[j] = data.at(i * 4 + j);
		}
		memcpy(&data_float, buff, sizeof(data_float));
		emit receive_success(data_float, i);
	}
	receiveStartFlag = false;
	data.clear();
	receiveDataNum = 0;
	count = 0;
}

void Receive::receive_fail()
{
	receiveStartFlag = false;
	data.clear();
	receiveDataNum = 0;
	count = 0;
}

Receive::~Receive()
{
	delete[] buff;
}
