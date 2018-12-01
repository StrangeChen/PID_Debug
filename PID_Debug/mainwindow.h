#pragma once

#include "ui_mainwindow.h"
#include <QtWidgets/QMainWindow>
#include <QtSerialPort/qserialport.h>
#include <QtSerialPort/qserialportinfo.h>
#include <QtCharts/QChartView>
#include <qtextcodec.h>
#include <qmessagebox.h>
#include <qstring.h>
#include <qtimer.h>
#include <qtooltip.h>
#include <qthread.h>
#include <qfile.h>
#include <qfiledialog.h>
#include <qtextstream.h>
#include <qdebug.h>
#include "Receive.h"
#include "CurveChart.h"


class Mainwindow : public QMainWindow
{
	Q_OBJECT

public:
	Mainwindow(QWidget *parent = Q_NULLPTR);

	~Mainwindow();

	void uart_init();

	void uart2_init();

	void change_uart_state();

	void change_uart2_state();

	void refresh_uart_info();

	void refresh_uart2_info();

	void change_combox_tooltip();

	void receive_uart_data();

	void display_ascii(bool checked);

	void display_hex(bool checked);

	void clean_display();

	void save_receive_data();

	void change_tx_mode(bool checked);

	void transmit_data();

	//void closeEvent()
	void set_p_max_value(double max);

	void set_i_max_value(double max);

	void set_d_max_value(double max);

	void change_p_para_display(int para);

	void change_i_para_display(int para);

	void change_d_para_display(int para);

	void change_p_slider_value(double para);

	void change_i_slider_value(double para);

	void change_d_slider_value(double para);

	void send_pid_para(char cmd, float para);

	QByteArray which_channel_show();

	void plot_random_data(bool checked);

	void add_plot_data(float data, char num);

protected:
	void closeEvent(QCloseEvent *event);

private:
	Ui::MainWindow ui;

	float maxP = 10;
	float maxI = 0.1;
	float maxD = 1;

	bool OFF = false;
	bool ON = true;
	bool uartState = OFF;
	QSerialPort *serialPort;
	bool uart2State = OFF;
	QSerialPort *serialPort2;
	QTextCodec *gbk = QTextCodec::codecForName("GBK");

	QThread *receiveThread;
	QThread *plotThread;

	Receive *uartReceive;

	CurveChart *curveChart;
	QChartView *chartView;
	QVBoxLayout *layout;
	
};
