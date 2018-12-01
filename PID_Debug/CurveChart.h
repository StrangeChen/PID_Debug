#pragma once

#include <QtCharts/qchart.h>
#include <qlineseries.h>
#include <qvalueaxis.h>
#include <QtCore/QTimer>
#include <QGraphicsSceneMouseEvent>
#include <QGraphicsSceneWheelEvent>
#include <QGraphicsSceneResizeEvent>
#include <QTimerEvent>
#include <qcursor.h>
#include <QTime>
#include <time.h>
#include <qdebug.h>
#include<math.h>

QT_CHARTS_BEGIN_NAMESPACE
class QLineSeries;
class QValueAxis;
QT_CHARTS_END_NAMESPACE

QT_CHARTS_USE_NAMESPACE

class CurveChart : public QChart
{
	Q_OBJECT

public:
	CurveChart(QGraphicsItem *parent = 0, Qt::WindowFlags wFlags = 0);

	bool generating = false;
	bool exit = false;
	bool isRandomRun = false;
	bool isRun = false;

	void set_x_min(int num);

	qreal get_plot_area_width();

	void set_x_axis_range();

	void change_the_radio(int num);

	void init_random_data_generator();

	void set_random_pen_color(int num = 0);

	void start_random_plot(int num = 0);

	void stop_random_plot();

	void start_plot();

	void add_random_data(qreal data);

	void add_data(qreal data, int num);

	void clear_data(int num);

	void generate_data();

	~CurveChart();

protected:
	void resizeEvent(QGraphicsSceneResizeEvent *event)override;
	void wheelEvent(QGraphicsSceneWheelEvent *event)override;
	void mousePressEvent(QGraphicsSceneMouseEvent *event)override;
	void mouseReleaseEvent(QGraphicsSceneMouseEvent *event)override;
	void timerEvent(QTimerEvent *event)override;

private:
	QLineSeries *series[7];
	QValueAxis *m_axisX;
	QValueAxis *m_axisY;
	QPen pen;
	//QTimer m_timer;
	int randomTimerID;

	clock_t start;

	double yMax = 100;
	double yMin = -100;
	float yAxisAdjust = 1.1;
	bool isMousePress = false;
	float data_y = 0;

	double xAxisFigSizeRadio = 2;
	long xAxisMin = 0;
	
	int randomPlotChannel = 0;
	
	float a = 0.1;

	
};
