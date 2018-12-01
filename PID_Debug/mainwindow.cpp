#include "mainwindow.h"


Mainwindow::Mainwindow(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	
	QString qss;
	qss.append(u8"QObject{font-family:微软雅黑;color:#192e4b}");
	qss.append("QPushButton{ padding:0px;  border-radius:5px; color:#FFFFFF; background:#4c73a8; border:2px solid #4c73a8; }");
	qss.append("QPushButton:hover{color:#4c73a8;background:#88b5f1;}");
	qss.append("QPushButton:pressed{color:#FFFFFF;background:#CCCCCC;}");
	qss.append("QPushButton:disabled{color:#CCCCCC;background:#999999;}");
	qss.append("QSlider::groove:horizontal,QSlider::add-page:horizontal{height:8px;border-radius:4px;background:#DEE4FF;}");
	qss.append("QSlider::sub-page:horizontal{height:8px;border-radius:4px;background:#4c73a8;}");
	qss.append("QSlider::handle:horizontal{width:16px;margin-top:-4px;margin-bottom:-4px;border-radius:8px;background:qradialgradient(spread:pad,cx:0.5,cy:0.5,radius:0.5,fx:0.5,fy:0.5,stop:0.6 #FFFFFF,stop:0.8 #4c73a8);}");
	qss.append("QSlider::groove:vertical,QSlider::add-page:vertical{width:8px;border-radius:4px;background:#4c73a8;}");
	qss.append("QSlider::sub-page:vertical{width:8px;border-radius:4px;background:#DEE4FF;}");
	qss.append("QSlider::handle:vertical{height:16px;margin-left:-4px;margin-right:-4px;border-radius:8px;background:qradialgradient(spread:pad,cx:0.5,cy:0.5,radius:0.5,fx:0.5,fy:0.5,stop:0.6 #FFFFFF,stop:0.8 #4c73a8);}");
	qss.append("QTabWidget{color:#FFFFFF; background:#4c73a8;}QTabWidget::tab-bar{left:5px}QTabBar::tab{color:#FFFFFF; background:#4c73a8;width:100px;height:25px;border:2px solid #4c73a8;border-radius:2px}");
	qss.append("QTabBar::tab:hover{color:#4c73a8; background:#FFFFFF;}QTabBar::tab:selected{color:#4c73a8; background:#FFFFFF;}");
	

	curveChart = new CurveChart;
	curveChart->legend()->hide();
	chartView = new QChartView(curveChart);
	layout = new QVBoxLayout(ui.widget_dynamic_curve);
	layout->addWidget(chartView);
	
	uartState = OFF;
	uart2State = OFF;
	serialPort = new QSerialPort(this);
	serialPort2 = new QSerialPort(this);

	receiveThread = new QThread(this);
	uartReceive = new Receive(this, serialPort2);
	uartReceive->moveToThread(receiveThread);
	receiveThread->start();
	/*plotThread = new QThread(this);
	curveChart->moveToThread(plotThread);
	plotThread->start();*/

	uart2_init();
	uart_init();
	ui.doubleSpinBox_max_P->setValue(maxP);
	ui.doubleSpinBox_max_I->setValue(maxI);
	ui.doubleSpinBox_max_D->setValue(maxD);
	ui.doubleSpinBox_P->setDecimals(1);
	ui.doubleSpinBox_I->setDecimals(3);
	ui.doubleSpinBox_D->setDecimals(2);

	connect(ui.pushButton_uart_sw, &QPushButton::clicked, this, &Mainwindow::change_uart_state);
	connect(ui.pushButton_uart_rfresh, &QPushButton::clicked, this, &Mainwindow::refresh_uart_info);
	connect(ui.comboBox_com, &QComboBox::currentTextChanged, this, &Mainwindow::change_combox_tooltip);
	connect(ui.radioButton_show_ascii, &QRadioButton::toggled, this, &Mainwindow::display_ascii);
	connect(ui.radioButton_show_hex, &QRadioButton::toggled, this, &Mainwindow::display_hex);
	connect(ui.pushButton_clean, &QPushButton::clicked, this, &Mainwindow::clean_display);
	connect(ui.pushButton_save, &QPushButton::clicked, this, &Mainwindow::save_receive_data);
	connect(ui.pushButton_tx, &QPushButton::clicked, this, &Mainwindow::transmit_data);
	connect(ui.radioButton_tx_hex, &QRadioButton::toggled, this, &Mainwindow::change_tx_mode);
	connect(ui.pushButton_clean_tx, &QPushButton::clicked, [this](bool checked)
	{
		ui.plainTextEdit_tx->clear();
	});

	connect(ui.pushButton_uart_sw_2, &QPushButton::clicked, this, &Mainwindow::change_uart2_state);
	connect(ui.pushButton_uart_rfresh_2, &QPushButton::clicked, this, &Mainwindow::refresh_uart2_info);
	connect(ui.comboBox_com_2, &QComboBox::currentTextChanged, this, &Mainwindow::change_combox_tooltip);


	connect(ui.doubleSpinBox_max_P, static_cast<void (QDoubleSpinBox::*)(double)>(&QDoubleSpinBox::valueChanged),
		this, &Mainwindow::set_p_max_value);
	connect(ui.doubleSpinBox_max_I, static_cast<void (QDoubleSpinBox::*)(double)>(&QDoubleSpinBox::valueChanged),
		this, &Mainwindow::set_i_max_value);
	connect(ui.doubleSpinBox_max_D, static_cast<void (QDoubleSpinBox::*)(double)>(&QDoubleSpinBox::valueChanged),
		this, &Mainwindow::set_d_max_value);
	connect(ui.verticalSlider_P, &QSlider::valueChanged, this, &Mainwindow::change_p_para_display);
	connect(ui.verticalSlider_I, &QSlider::valueChanged, this, &Mainwindow::change_i_para_display);
	connect(ui.verticalSlider_D, &QSlider::valueChanged, this, &Mainwindow::change_d_para_display);
	connect(ui.doubleSpinBox_P, static_cast<void (QDoubleSpinBox::*)(double)>(&QDoubleSpinBox::valueChanged),
		this, &Mainwindow::change_p_slider_value);
	connect(ui.doubleSpinBox_I, static_cast<void (QDoubleSpinBox::*)(double)>(&QDoubleSpinBox::valueChanged),
		this, &Mainwindow::change_i_slider_value);
	connect(ui.doubleSpinBox_D, static_cast<void (QDoubleSpinBox::*)(double)>(&QDoubleSpinBox::valueChanged),
		this, &Mainwindow::change_d_slider_value);

	connect(ui.horizontalSlider, &QSlider::valueChanged, curveChart, &CurveChart::change_the_radio);
	connect(ui.checkBox_curve_show_random, &QCheckBox::toggled, this, &Mainwindow::plot_random_data);

	connect(uartReceive, &Receive::receive_success, this, &Mainwindow::add_plot_data);

	connect(serialPort, &QSerialPort::readyRead, this, &Mainwindow::receive_uart_data);
	connect(serialPort2, &QSerialPort::readyRead, uartReceive, &Receive::receive_uart_data);

	qApp->setStyleSheet(qss);
	setWindowIcon(QIcon("1.ico"));
}

Mainwindow::~Mainwindow()
{
	curveChart->deleteLater();
	chartView->deleteLater();
}

void Mainwindow::uart_init()
{
	uartState = OFF;
	/* 所有当前可用的串口 */
	ui.comboBox_com->clear();
	foreach(auto const &info, QSerialPortInfo::availablePorts())
	{
		ui.comboBox_com->addItem(info.portName() + ": " + info.description());
	}
	ui.comboBox_com->setCurrentIndex(0);
	ui.comboBox_com->setToolTip(ui.comboBox_com->currentText());
}

void Mainwindow::uart2_init()
{
	uart2State = OFF;
	/* 所有当前可用的串口 */
	ui.comboBox_com_2->clear();
	foreach(auto const &info, QSerialPortInfo::availablePorts())
	{
		ui.comboBox_com_2->addItem(info.portName() + ": " + info.description());
	}
	ui.comboBox_com_2->setCurrentIndex(0);
	ui.comboBox_com_2->setToolTip(ui.comboBox_com_2->currentText());
}

void Mainwindow::change_uart_state()
{
	if (uartState == ON)
	{
		serialPort->close();
		uartState = OFF;
		ui.pushButton_uart_sw->setText(QString::fromUtf8(u8"打开串口"));

		ui.comboBox_com->setEnabled(true);
		ui.comboBox_baud->setEnabled(true);
	}
	else
	{
		serialPort->setPortName(ui.comboBox_com->currentText().split(':').at(0));
		serialPort->setBaudRate(ui.comboBox_baud->currentText().toInt());
		//默认参数设置
		serialPort->setFlowControl(QSerialPort::NoFlowControl);// 无流控制
		serialPort->setDataBits(QSerialPort::Data8);//数据为 8
		serialPort->setStopBits(QSerialPort::OneStop);//停止位一位
		serialPort->setParity(QSerialPort::NoParity);//无校验位
		serialPort->setReadBufferSize(10); //接收缓存10个字节

		if (serialPort->open(QSerialPort::ReadWrite))
		{
			uartState = ON;

			ui.pushButton_uart_sw->setText(u8"关闭串口");
			ui.comboBox_com->setEnabled(false);
			ui.comboBox_baud->setEnabled(false);
		}
		else {
			QMessageBox::critical(this, tr("Error"), tr("Fail to turn on this device!"));
		}
	}
}

void Mainwindow::change_uart2_state()
{
	if (uart2State == ON)
	{
		serialPort2->close();
		uart2State = OFF;
		ui.pushButton_uart_sw_2->setText(u8"打开串口");
		//curveChart->clear_data();
		ui.checkBox_curve_show_random->setEnabled(true);
		ui.comboBox_com_2->setEnabled(true);
		ui.comboBox_baud_2->setEnabled(true);
	}
	else
	{
		serialPort2->setPortName(ui.comboBox_com_2->currentText().split(':').at(0));
		serialPort2->setBaudRate(ui.comboBox_baud_2->currentText().toInt());
		//默认参数设置
		serialPort2->setFlowControl(QSerialPort::NoFlowControl);// 无流控制
		serialPort2->setDataBits(QSerialPort::Data8);//数据为 8
		serialPort2->setStopBits(QSerialPort::OneStop);//停止位一位
		serialPort2->setParity(QSerialPort::NoParity);//无校验位
		serialPort2->setReadBufferSize(10); //接收缓存10个字节

		if (serialPort2->open(QSerialPort::ReadWrite))
		{
			uart2State = ON;
			////接收线程开始
			//receiveThread->start();

			ui.pushButton_uart_sw_2->setText(u8"关闭串口");
			ui.comboBox_com_2->setEnabled(false);
			ui.comboBox_baud_2->setEnabled(false);
			ui.checkBox_curve_show_random->setChecked(false);
			ui.checkBox_curve_show_random->setEnabled(false);
			curveChart->start_plot();
		}
		else {
			QMessageBox::critical(this, tr("Error"), tr("Fail to turn on this device!"));
		}
	}
}

void Mainwindow::refresh_uart_info()
{
	if (uartState == ON)
		QToolTip::showText(QCursor::pos(), tr("Please turn off the current device first."));
	else
		uart_init();
}

void Mainwindow::refresh_uart2_info()
{
	if (uart2State == ON)
		QToolTip::showText(QCursor::pos(), tr("Please turn off the current device first."));
	else
		uart2_init();
}

void Mainwindow::change_combox_tooltip()
{
	ui.comboBox_com->setToolTip(ui.comboBox_com->currentText());
	ui.comboBox_com_2->setToolTip(ui.comboBox_com_2->currentText());
}

void Mainwindow::receive_uart_data()
{
	if (serialPort->isReadable())
	{
		QByteArray data = serialPort->readAll();
		if (data.isEmpty()) return;
		ui.plainTextEdit_rx->moveCursor(QTextCursor::End);

		if (ui.radioButton_show_ascii->isChecked())
		{
			//ui.plainTextEdit_rx->insertPlainText(QString::fromUtf8(data));
			ui.plainTextEdit_rx->insertPlainText(gbk->toUnicode(data));
		}
		else
		{
			QByteArray hexText = data.toHex().toUpper();
			int len = hexText.length();
			for (int i = 0; i < len; i += 2)
				ui.plainTextEdit_rx->insertPlainText(QString::fromUtf8(hexText.mid(i, 2)) + ' ');
				//ui.plainTextEdit_rx->insertPlainText(gbk->toUnicode(data));
		}
	}
}

void Mainwindow::display_ascii(bool checked)
{
	if (checked) 
	{
		QByteArray hexText = ui.plainTextEdit_rx->toPlainText().replace(QRegExp("\\[\\d\\d:\\d\\d:\\d\\d\\.\\d\\d\\d\\]\\s"), "").toUtf8();
		//ui.plainTextEdit_rx->setPlainText(QString::fromUtf8(QByteArray::fromHex(hexText)));
		ui.plainTextEdit_rx->setPlainText(gbk->toUnicode(QByteArray::fromHex(hexText)));
	}
	ui.plainTextEdit_rx->moveCursor(QTextCursor::End);
}

void Mainwindow::display_hex(bool checked)
{
	if (checked) 
	{
		QByteArray asciiText = ui.plainTextEdit_rx->toPlainText().replace(QRegExp("\\[\\d\\d:\\d\\d:\\d\\d\\.\\d\\d\\d\\]\\s"), "").toLocal8Bit();
		//QString hexText = asciiText.toHex().toUpper();
		QString hexText = QString::fromUtf8(asciiText.toHex().toUpper());
		int len = hexText.length();
		ui.plainTextEdit_rx->clear();
		for (int i = 0; i < len; i += 2)
			ui.plainTextEdit_rx->insertPlainText(hexText.mid(i, 2) + ' ');
	}
}

void Mainwindow::clean_display()
{
	ui.plainTextEdit_rx->clear();
}

void Mainwindow::save_receive_data()
{
	QString filename = QFileDialog::getSaveFileName(this, tr("Save As"), "/", "*.txt;;*.log");
	if (!filename.isEmpty()) {
		QFile file(filename);
		if (file.open(QFile::WriteOnly | QFile::Text)) {
			QTextStream os(&file);
			os << ui.plainTextEdit_rx->toPlainText();
		}
	}
}

void Mainwindow::change_tx_mode(bool checked)
{
	QByteArray data = ui.plainTextEdit_tx->toPlainText().replace(QRegExp("\\[\\d\\d:\\d\\d:\\d\\d\\.\\d\\d\\d\\]\\s"), "").toLocal8Bit();
	if (checked)
	{
		if (data.length() > 0)
		{
			QString hexText = QString::fromUtf8(data.toHex().toUpper());
			ui.plainTextEdit_tx->setPlainText("");
			int len = hexText.length();
			for (int i = 0; i < len; i += 2)
				ui.plainTextEdit_tx->insertPlainText(hexText.mid(i, 2) + ' ');
		}
	}
	else
	{
		if (data.length() > 0)
		{
			QByteArray hexText = ui.plainTextEdit_tx->toPlainText().replace(QRegExp("\\[\\d\\d:\\d\\d:\\d\\d\\.\\d\\d\\d\\]\\s"), "").toUtf8();
			
			ui.plainTextEdit_tx->setPlainText(gbk->toUnicode(QByteArray::fromHex(hexText)));
		}
	}
}

void Mainwindow::transmit_data()
{
	QByteArray data = ui.plainTextEdit_tx->toPlainText().replace(QRegExp("\\r\\n|\\r|\\n"), "\r\n").toLocal8Bit();
	if (ui.radioButton_tx_hex->isChecked())
		data = data.fromHex(data);

	if (serialPort->isWritable())
		serialPort->write(data);
}

void Mainwindow::set_p_max_value(double max)
{
	maxP = max;
	if (maxP < 0.1)
	{
		maxP = 0.1;
		ui.doubleSpinBox_max_P->setValue(0.1);
	}
	if (maxP >= 100)
	{
		ui.doubleSpinBox_P->setDecimals(0);
		ui.doubleSpinBox_P->setSingleStep(1);
	}
	else if (maxP >= 10)
	{
		ui.doubleSpinBox_P->setDecimals(1);
		ui.doubleSpinBox_P->setSingleStep(0.1);
	}
	else if (maxP >= 1)
	{
		ui.doubleSpinBox_P->setDecimals(2);
		ui.doubleSpinBox_P->setSingleStep(0.01);
	}
	else
	{
		ui.doubleSpinBox_P->setDecimals(3);
		ui.doubleSpinBox_P->setSingleStep(0.001);
	}	
}

void Mainwindow::set_i_max_value(double max)
{
	maxI = max;
	if (maxI < 0.1)
	{
		maxI = 0.1;
		ui.doubleSpinBox_max_I->setValue(0.1);
	}
	if (maxI >= 100)
	{
		ui.doubleSpinBox_I->setDecimals(0);
		ui.doubleSpinBox_I->setSingleStep(1);
	}
	else if (maxI >= 10)
	{
		ui.doubleSpinBox_I->setDecimals(1);
		ui.doubleSpinBox_I->setSingleStep(0.1);
	}
	else if (maxI >= 1)
	{
		ui.doubleSpinBox_I->setDecimals(2);
		ui.doubleSpinBox_I->setSingleStep(0.01);
	}
	else
	{
		ui.doubleSpinBox_I->setDecimals(3);
		ui.doubleSpinBox_I->setSingleStep(0.001);
	}
}

void Mainwindow::set_d_max_value(double max)
{
	maxD = max;
	if (maxD < 0.1)
	{
		maxD = 0.1;
		ui.doubleSpinBox_max_D->setValue(0.1);
	}
	if (maxD >= 100)
	{
		ui.doubleSpinBox_D->setDecimals(0);
		ui.doubleSpinBox_D->setSingleStep(1);
	}
	else if (maxD >= 10)
	{
		ui.doubleSpinBox_D->setDecimals(1);
		ui.doubleSpinBox_D->setSingleStep(0.1);
	}
	else if (maxD >= 1)
	{
		ui.doubleSpinBox_D->setDecimals(2);
		ui.doubleSpinBox_D->setSingleStep(0.01);
	}
	else
	{
		ui.doubleSpinBox_D->setDecimals(3);
		ui.doubleSpinBox_D->setSingleStep(0.001);
	}
}

void Mainwindow::change_p_para_display(int para)
{
	ui.doubleSpinBox_P->setValue(para*1.0 * maxP / 1000);
}

void Mainwindow::change_i_para_display(int para)
{
	ui.doubleSpinBox_I->setValue(para*1.0 * maxI / 1000);
	qDebug() << "sliider" << para << para * 1.0 * maxI / 1000 << endl;
}

void Mainwindow::change_d_para_display(int para)
{
	ui.doubleSpinBox_D->setValue(para*1.0 * maxD / 1000);
	
}

void Mainwindow::change_p_slider_value(double para)
{
	if (para > maxP)
	{
		para = maxP;
		ui.doubleSpinBox_P->setValue(para);
	}
	send_pid_para('p', para);
	
	para = para * 1000 / maxP;
	ui.verticalSlider_P->setValue(para);
	
}

void Mainwindow::change_i_slider_value(double para)
{
	if (para > maxI)
	{
		para = maxI;
		ui.doubleSpinBox_I->setValue(para);
	}
	qDebug() << "disp" << para << "  ";
	send_pid_para('i', para);
	para = para * 1000 / maxI;
	qDebug() << para << endl;
	ui.verticalSlider_I->setValue(para);
}

void Mainwindow::change_d_slider_value(double para)
{
	if (para > maxD)
	{
		para = maxD;
		ui.doubleSpinBox_D->setValue(para);
	}
	send_pid_para('d', para);
	para = para * 1000 / maxD;
	ui.verticalSlider_D->setValue(para);
}

/*
# cmd = ‘p' 'i' 'd'
# sign = '-' / '+'
# para_float-- > para_8 * 4
# sum = cmd + sign + para_8 * 4
*/
void Mainwindow::send_pid_para(char cmd, float para)
{
	char send[8];
	unsigned char * s;
	float f;
	
	send[0] = '$';
	send[1] = cmd;
	if (cmd == 'p')
	{
		if (ui.checkBox_P->isChecked())
			send[2] = '-';
		else
			send[2] = '+';
	}
	else if (cmd == 'i')
	{
		if (ui.checkBox_I->isChecked())
			send[2] = '-';
		else
			send[2] = '+';
	}
	else if(cmd=='d')
	{
		if (ui.checkBox_D->isChecked())
			send[2] = '-';
		else
			send[2] = '+';
	}

	f = para;
	s = (unsigned char*)(&f);
	for (int i = 0; i < 4; i++)
	{
		send[3 + i] = *(s + i);
	}
	send[7] = 0;
	for (int i = 0; i < 7; i++)
	{
		send[7] += send[i];
	}
	serialPort2->write(send, 8);
}

QByteArray Mainwindow::which_channel_show()
{
	QByteArray num;
	if (ui.checkBox_1->isChecked())
		num.append(1);
	if (ui.checkBox_2->isChecked())
		num.append(2);
	if (ui.checkBox_3->isChecked())
		num.append(3);
	if (ui.checkBox_4->isChecked())
		num.append(4);
	if (ui.checkBox_5->isChecked())
		num.append(5);
	if (ui.checkBox_6->isChecked())
		num.append(6);
	return num;
}

void Mainwindow::plot_random_data(bool checked)
{
	if (checked)
	{
		QByteArray num;
		num = which_channel_show();
		if (num.length() > 0)
			curveChart->start_random_plot(num.at(0));
		else
			curveChart->start_random_plot(0);
	}
	else
		curveChart->stop_random_plot();
}

void Mainwindow::add_plot_data(float data,char num)
{
	if (num > 6 && num < 0)
		return;
	if (num == 0)
		ui.lineEdit_7->setText(QString("%1").arg(data));

	else if (num == 1)
		ui.lineEdit_8->setText(QString("%1").arg(data));

	else if (num == 2)
		ui.lineEdit_9->setText(QString("%1").arg(data));

	else if (num == 3)
		ui.lineEdit_10->setText(QString("%1").arg(data));

	else if (num == 4)
		ui.lineEdit_11->setText(QString("%1").arg(data));

	else if (num == 5)
		ui.lineEdit_12->setText(QString("%1").arg(data));

	if (which_channel_show().contains(num + 1))
		curveChart->add_data(data, num);
	else
		curveChart->clear_data(num);
}

void Mainwindow::closeEvent(QCloseEvent * event)
{
	QFile file("2333.txt");
	file.open(QIODevice::ReadOnly | QIODevice::Text);
	QByteArray t = file.readAll();
	//qDebug() << t;
	if ((QMessageBox::question(this, u8"滑稽", QString::fromUtf8(t),
		QMessageBox::Yes | QMessageBox::No, QMessageBox::Yes)) == QMessageBox::No)
	{
		event->ignore();
	}
	else
	{
		if (uartState == ON)
			serialPort->close();
		if (uartState == ON)
			serialPort2->close();
		if (receiveThread->isRunning())
		{
			receiveThread->quit();
			receiveThread->exit();
		}
		curveChart->stop_random_plot();
		event->accept();
	}
	
}
