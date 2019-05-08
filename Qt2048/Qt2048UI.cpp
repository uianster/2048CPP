#include "Qt2048UI.h"
#include <qevent.h> //不包含时容易无法准确找到key()

#define MAX_NUM 16
#define MIN_NUM 1


Qt2048UI::Qt2048UI(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	init();

	this->grabKeyboard();
}
Qt2048UI::~Qt2048UI()
{


}

void Qt2048UI::startGame()
{
	
}

void Qt2048UI::resetGame()
{

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
	m_elementMap.insert(std::make_pair(0, ui.Elemet_1));
	m_elementMap.insert(std::make_pair(1, ui.Elemet_2));
	m_elementMap.insert(std::make_pair(2, ui.Elemet_3));
	m_elementMap.insert(std::make_pair(3, ui.Elemet_4));
	m_elementMap.insert(std::make_pair(4, ui.Elemet_5));
	m_elementMap.insert(std::make_pair(5, ui.Elemet_6));
	m_elementMap.insert(std::make_pair(6, ui.Elemet_7));
	m_elementMap.insert(std::make_pair(7, ui.Elemet_8));
	m_elementMap.insert(std::make_pair(8, ui.Elemet_9));
	m_elementMap.insert(std::make_pair(9, ui.Elemet_10));
	m_elementMap.insert(std::make_pair(10, ui.Elemet_11));
	m_elementMap.insert(std::make_pair(11, ui.Elemet_12));
	m_elementMap.insert(std::make_pair(12, ui.Elemet_13));
	m_elementMap.insert(std::make_pair(13, ui.Elemet_14));
	m_elementMap.insert(std::make_pair(14, ui.Elemet_15));
	m_elementMap.insert(std::make_pair(15, ui.Elemet_16));
}

void Qt2048UI::init()
{
	initColorMap();
	initElementMap();

	m_Qt2048.generateRanData();
	//更新控件颜色和数字
	updateUI(m_Qt2048.getCurrentData());
}


void Qt2048UI::keyPressEvent(QKeyEvent *event)
{
	int curkey = event->key();
	switch (curkey)
	{
		case Qt::Key_Up:
		{
			m_Qt2048.oprateUp();
			updateUI(m_Qt2048.getCurrentData());
			break;
		}
		case Qt::Key_Down:
		{
			m_Qt2048.oprateDown();
			updateUI(m_Qt2048.getCurrentData());
			break;
		}
		case Qt::Key_Left:
		{
			m_Qt2048.oprateLeft();
			updateUI(m_Qt2048.getCurrentData());
			break;
		}
		case Qt::Key_Right:
		{
			m_Qt2048.oprateRight();
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
		
		getElement(i)->setFontPointSize(50);
		getElement(i)->setText(str); 
		getElement(i)->setAlignment(Qt::AlignCenter);
		
	}

}