#include "Qt2048UI.h"
#include <qevent.h> //������ʱ�����޷�׼ȷ�ҵ�key()

#define MAX_NUM 16
#define MIN_NUM 1


Qt2048UI::Qt2048UI(QWidget *parent)
	: QMainWindow(parent),
	b_isStart(false)
{
	ui.setupUi(this);

	m_Qt2048.CallBackProc(std::bind(&Qt2048UI::updateStatus, this/*,std::placeholders::_1*/));
	this->grabKeyboard();
}
Qt2048UI::~Qt2048UI()
{
	

}

void Qt2048UI::startGame()
{
	init();
	b_isStart = true;
}

void Qt2048UI::resetGame()
{
	Q2048::Qt2048 q2048;
	m_Qt2048 = q2048;
	updateUI(m_Qt2048.getCurrentData());
	init();
}

void Qt2048UI::initColorMap()
{
	m_colorMap.insert(std::make_pair(0, "background-color: rgb(205,193,180)"));
	m_colorMap.insert(std::make_pair(2, "background-color: rgb(238, 228, 218)"));
	m_colorMap.insert(std::make_pair(4, "background-color: rgb(237, 224, 200)"));
	m_colorMap.insert(std::make_pair(8, "background-color: rgb(242, 177, 121)"));
	m_colorMap.insert(std::make_pair(16, "background-color: rgb(245, 149, 99)"));
	m_colorMap.insert(std::make_pair(32, "background-color: rgb(246, 124, 95)"));
	m_colorMap.insert(std::make_pair(64, "background-color: rgb(246, 94, 59)"));
	m_colorMap.insert(std::make_pair(128, "background-color: rgb(237, 207, 114)"));
	m_colorMap.insert(std::make_pair(256, "background-color: rgb(237, 204, 97)"));
	m_colorMap.insert(std::make_pair(512, "background-color: rgb(237, 200, 81)"));
	m_colorMap.insert(std::make_pair(1024, "background-color: rgb(237, 197, 63)"));
	m_colorMap.insert(std::make_pair(2048, "background-color: rgb(237, 197, 63)"));
}

void Qt2048UI::initElementMap()
{
	m_elementMap.insert(std::make_pair(0, ui.lineEdit_1));
	m_elementMap.insert(std::make_pair(1, ui.lineEdit_2));
	m_elementMap.insert(std::make_pair(2, ui.lineEdit_3));
	m_elementMap.insert(std::make_pair(3, ui.lineEdit_4));
	m_elementMap.insert(std::make_pair(4, ui.lineEdit_5));
	m_elementMap.insert(std::make_pair(5, ui.lineEdit_6));
	m_elementMap.insert(std::make_pair(6, ui.lineEdit_7));
	m_elementMap.insert(std::make_pair(7, ui.lineEdit_8));
	m_elementMap.insert(std::make_pair(8, ui.lineEdit_9));
	m_elementMap.insert(std::make_pair(9, ui.lineEdit_10));
	m_elementMap.insert(std::make_pair(10, ui.lineEdit_11));
	m_elementMap.insert(std::make_pair(11, ui.lineEdit_12));
	m_elementMap.insert(std::make_pair(12, ui.lineEdit_13));
	m_elementMap.insert(std::make_pair(13, ui.lineEdit_14));
	m_elementMap.insert(std::make_pair(14, ui.lineEdit_15));
	m_elementMap.insert(std::make_pair(15, ui.lineEdit_16));
}

void Qt2048UI::init()
{
	initColorMap();
	initElementMap();

	m_Qt2048.generateRanData();
	//���¿ؼ���ɫ������
	updateUI(m_Qt2048.getCurrentData());
}


void Qt2048UI::keyPressEvent(QKeyEvent *event)
{
	if (!b_isStart)
		return;
		
	int curkey = event->key();
	switch (curkey)
	{
		case Qt::Key_Up:
		{	
			m_Qt2048.operateUp();
			updateUI(m_Qt2048.getCurrentData());
			break;
		}
		case Qt::Key_Down:
		{
			m_Qt2048.operateDown();
			updateUI(m_Qt2048.getCurrentData());
			break;
		}
		case Qt::Key_Left:
		{
			m_Qt2048.operateLeft();
			updateUI(m_Qt2048.getCurrentData());
			break;
		}
		case Qt::Key_Right:
		{
			m_Qt2048.operateRight();
			updateUI(m_Qt2048.getCurrentData());
			break;
		}
		default:
		{
			QWidget::keyPressEvent(event);
			break;
		}
	}
}


void Qt2048UI::updateUI(int curdata[])
{
	QString qstrColor;
	
	for (int i=0;i<16;i++)
	{
		int tem = curdata[i];
		qstrColor = QString::fromStdString(getColor(curdata[i]));
		getElement(i)->setStyleSheet(qstrColor);
		if (tem==0)
		{
			QString str =" ";
			getElement(i)->setText(str);
			continue;
		}
		QString str = QString::number(tem);
		
		getElement(i)->setText(str); 
		
	}

}

void Qt2048UI::updateStatus()
{
	ui.label->setText("Game over!");
}