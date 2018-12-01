#pragma once

#include <QObject>
#include <qserialport.h>
#include <qdebug.h>

class Receive : public QObject
{
	Q_OBJECT

public:
	Receive(QObject *parent,QSerialPort *port);

	void receive_uart_data();

	void data_processing();

	void receive_fail();

	~Receive();

signals:
	void receive_success(float, char);

private:
	
	QSerialPort * serialPort;
	QByteArray data;
	unsigned char *buff;
	int count = 0;
	int receiveDataNum = 0;
	bool receiveStartFlag = false;

};
