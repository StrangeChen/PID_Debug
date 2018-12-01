#include "CurveChart.h"


CurveChart::CurveChart(QGraphicsItem *parent, Qt::WindowFlags wFlags)
	: QChart(QChart::ChartTypeCartesian, parent, wFlags),
	m_axisX(new QValueAxis),
	m_axisY(new QValueAxis)
{
	//m_timer.setInterval(100);	
	for (int i = 0; i < 7; i++)
	{
		series[i] = new QLineSeries(this);
		addSeries(series[i]);
	}	
	//QPen pen(Qt::blue);
	pen.setColor(Qt::blue);
	pen.setStyle(Qt::DashLine);
	series[6]->setPen(pen);
	series[0]->setColor(Qt::red);
	series[1]->setColor(Qt::green);
	series[2]->setColor(Qt::blue);
	series[3]->setColor(Qt::yellow);
	series[4]->setColor(Qt::magenta);
	series[5]->setColor(Qt::cyan);
	createDefaultAxes();
	for (int i = 0; i < 7; i++)
	{
		setAxisX(m_axisX, series[i]);
		setAxisY(m_axisY, series[i]);
		//setAxisY(m_axisY, series[i]);
	}
	m_axisX->setTickCount(2);
	m_axisX->setLabelFormat(" ");
	axisX()->setRange(xAxisMin, 100);
	m_axisY->setTickCount(5);
	m_axisY->setMinorTickCount(2);
	m_axisY->setLabelFormat("%.1f");
	axisY()->setRange(yMin, yMax);
	// ÉèÖÃ±ßÔµ¿Õ°×
	setContentsMargins(-10, -20, -20, -30);

	start = clock();
	//QObject::connect(&m_timer, &QTimer::timeout, this, &CurveChart::generate_data);
}

CurveChart::~CurveChart()
{
}

void CurveChart::resizeEvent(QGraphicsSceneResizeEvent *e)
{
	set_x_axis_range();
}

void CurveChart::wheelEvent(QGraphicsSceneWheelEvent *e)
{
	double _y;
	_y = (m_axisY->max() + m_axisY->min())*0.5;
	if (e->delta() > 0)
	{
		yMax = yMax / yAxisAdjust;
		yMin = yMin / yAxisAdjust;
	}
	else
	{
		yMax = yMax * yAxisAdjust;
		yMin = yMin * yAxisAdjust;
	}
	m_axisY->setRange(yMin + _y,yMax + _y);
}

void CurveChart::mousePressEvent(QGraphicsSceneMouseEvent *e)
{
	if (e->button() == Qt::LeftButton)
	{
		if (e->pos().y() > plotArea().y() || e->pos().y() < plotArea().bottom())
		{
			isMousePress = true;
			data_y = e->pos().y();
			setCursor(Qt::ClosedHandCursor);
		}
	}
}

void CurveChart::mouseReleaseEvent(QGraphicsSceneMouseEvent *e)
{
	if (e->button() == Qt::LeftButton)
	{
		if (e->pos().y() > plotArea().y() || e->pos().y() < plotArea().bottom())
		{
			isMousePress =false;
			scroll(0, e->pos().y() - data_y);		
			setCursor(Qt::ArrowCursor);
		}
	}
}

void CurveChart::timerEvent(QTimerEvent * event)
{
	if(event->timerId() == randomTimerID)
		generate_data();
}

void CurveChart::set_x_min(int num)
{
	xAxisMin = num;
}

qreal CurveChart::get_plot_area_width()
{
	return plotArea().width() * xAxisFigSizeRadio;
}

void CurveChart::set_x_axis_range()
{
	m_axisX->setRange(xAxisMin, xAxisMin + get_plot_area_width());
}

void CurveChart::change_the_radio(int num)
{
	qDebug() << num;
	if (num > 0)
		xAxisFigSizeRadio = 2 * pow(1.1, num);
	else if (num < 0)
		//num = -num;
		xAxisFigSizeRadio = 2 / pow(1.1, -num);
	qDebug() << xAxisFigSizeRadio;
	set_x_axis_range();
}

void CurveChart::init_random_data_generator()
{
	
}

void CurveChart::set_random_pen_color(int num)
{
	if (num == 0)
		pen.setColor(Qt::blue);
	else if (num == 1)
		pen.setColor(Qt::red);
	else if (num == 2)
		pen.setColor(Qt::green);
	else if (num == 3)
		pen.setColor(Qt::blue);
	else if (num == 4)
		pen.setColor(Qt::yellow);
	else if (num == 5)
		pen.setColor(Qt::magenta);
	else if (num == 6)
		pen.setColor(Qt::cyan);
	series[6]->setPen(pen);
}

void CurveChart::start_random_plot(int num)
{
	if (isRandomRun == false)
	{
		isRandomRun = true;
		randomTimerID = startTimer(10);
		set_random_pen_color(num);
		xAxisMin = clock()/10;
		//qDebug() << xAxisMin * 200;;
		set_x_axis_range();
	}
}

void CurveChart::stop_random_plot()
{
	if (isRandomRun)
	{
		killTimer(randomTimerID);
		series[6]->clear();
		isRandomRun = false;
	}
}

void CurveChart::start_plot()
{
	if (isRandomRun)
		stop_random_plot();
	for (int i = 0; i < 7; i++)
		series[i]->clear();
	xAxisMin = clock()/10 ;
	set_x_axis_range();
}

void CurveChart::add_random_data(qreal data)
{
	long now_time = clock()/10;
	series[6]->append(now_time, data);
	//qDebug() << (*series[6]);
	if (now_time - get_plot_area_width() >= xAxisMin)
	{
		xAxisMin = now_time - get_plot_area_width();
		set_x_axis_range();
		series[6]->remove(0);
	}
}

void CurveChart::add_data(qreal data, int num)
{
	long now_time = clock()/10;
	series[num]->append(now_time, data);
	if (now_time - get_plot_area_width() >= xAxisMin)
	{
		xAxisMin = now_time - get_plot_area_width();
		set_x_axis_range();
		if(series[num]->at(0).x() < xAxisMin)
			series[num]->remove(0);
	}
}

void CurveChart::clear_data(int num)
{
	if (num > 6)
		return;
	if (series[num]->count() > 0)
		series[num]->clear();
}

void CurveChart::generate_data()
{
	a = a + 0.1;
	if (a > 3.14)
		a = -3.14;
	double new_data = 100 * sin(a);
	add_random_data(new_data);
}
