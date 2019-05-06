#include "Qt2048.h"
#include <qevent.h> //不包含时容易无法准确找到key()

#define MAX_NUM 16
#define MIN_NUM 1
#include <stdlib.h>
#include <time.h>

Qt2048::Qt2048(QWidget *parent)
	: QMainWindow(parent)
	, m_bFirstTime(true)
{
	memset(m_curdata, 0 ,sizeof(int)*16);
	
	ui.setupUi(this);
	init();
	this->grabKeyboard();
}
Qt2048::~Qt2048()
{


}

void Qt2048::startGame()
{
	
}

void Qt2048::resetGame()
{

}

void Qt2048::initColorMap()
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

void Qt2048::initElementMap()
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

void Qt2048::init()
{
	initColorMap();
	initElementMap();

	ranGeneration();
	//更新控件颜色和数字
	UpgradeElementMap(m_curdata);
}
void Qt2048::DownOprate() //向下操作
{

	//去除空隙
	DeDownSpace();
	
	//合并处理
	for (int j = 0; j < 4; j++)
	{
		int k = 0;
		for (int i = 1; i < 4; i++)
		{
			if (m_curdata[j+4*i] == 0)
			{
				break;
			}
			if (m_curdata[j + 4 * (i - 1)] == m_curdata[j + 4 * i])
			{
				m_curdata[j + 4 * (i - 1)] += m_curdata[j + 4 * i];
				m_curdata[j + 4 * i] = 0;
			}
		}
	}
	//去除空隙
	DeDownSpace();
	
	//更新界面
	UpgradeElementMap(m_curdata);

}



void Qt2048::UpOprate()
{
	deUPSpace();
	bool isChange = false;
	//合并处理
	for (int j = 0; j < 4; j++)
	{
		int k = 0;
		for (int i = 3; i >= 1; i--)
		{
			if (m_curdata[j + 4 * (i - 1)] == 0)
			{
				break;
			}
			if (m_curdata[j + 4 * i] == m_curdata[j + 4 * (i - 1)])
			{
				m_curdata[j + 4 * i] += m_curdata[j + 4 * (i-1)];
				m_curdata[j + 4 * (i-1)] = 0;
				isChange = true;
			}
		}
	}
	if (isChange)
	{
		//ranGeneration();
	}

	deUPSpace();

	//更新界面
	UpgradeElementMap(m_curdata);
}

void Qt2048::RightOprate()
{
	DeRightSpace();
	bool isChange = false;
	//合并处理
	for (int j = 0; j < 4; j++)
	{
		int k = 3;
		for (int i = 3; i >= 0; i--)
		{
			if (m_curdata[(i-1) + j * 4] == 0)
			{
				break;
			}

			if (m_curdata[(i - 1) + j * 4]== m_curdata[i + j * 4])
			{
				m_curdata[(i - 1) + j * 4] += m_curdata[i + j * 4];
				m_curdata[i + j * 4] = 0;
				isChange = true;
			}
		}
	}

	if (isChange)
	{
		//ranGeneration();
	}


	//
	DeRightSpace();
	//更新界面
	UpgradeElementMap(m_curdata);
}

void Qt2048::LeftOprate()
{
	DeLeftSpace();
	bool isChange = false;
	//合并处理
	//合并处理
	for (int j = 0; j < 4; j++)
	{
		int k = 0;
		for (int i = 1; i < 4; i++)
		{
			if (m_curdata[i + j * 4] == 0)
			{
				break;
			}
			if (m_curdata[i + j * 4] == m_curdata[(i - 1) + 4 * j])
			{
				m_curdata[(i - 1) + 4 * j] += m_curdata[i + j * 4];
				m_curdata[i + j * 4] = 0;
				isChange = true;
			}
		}
	}
	if (isChange)
	{
		//ranGeneration();
	}

	DeLeftSpace();
	//更新界面
	UpgradeElementMap(m_curdata);
}

void Qt2048::deUPSpace()
{
	int curdatacopy[16] = { 0 };
	//去除空隙
	bool isChange = false;

	for (int j = 0; j < 4; j++)
	{
		int k = 3;
		for (int i = 0; i < 4; i++)
		{
			if (m_curdata[j + i * 4] != 0)
			{
				curdatacopy[j + k * 4] = m_curdata[j + i * 4];
				k--;
				isChange = true;

			}
		}
	}
	if (isChange)
	{
		//ranGeneration();
	}
	memcpy(m_curdata, curdatacopy, sizeof(int) * 16);
}

void Qt2048::DeDownSpace()
{
	int curdatacopy[16] = { 0 };
	bool isChange = false;

	for (int j = 0; j < 4; j++)
	{
		int k = 0;
		for (int i = 0; i < 4; i++)
		{
			if (m_curdata[j + i * 4] != 0)
			{
				curdatacopy[j + k * 4] = m_curdata[j + i * 4];
				k++;
				isChange = true;
			}
		}
	}
	if (isChange)
	{
		//nGeneration();
	}
	memcpy(m_curdata, curdatacopy, sizeof(int) * 16);
}

void Qt2048::DeLeftSpace()
{
	int curdatacopy[16] = { 0 };
	bool isChange = false;
	for (int j = 0; j < 4; j++)
	{
		int k = 0;
		for (int i = 0; i < 4; i++)
		{
			if (m_curdata[i + j * 4] != 0)
			{
				curdatacopy[k + j * 4] = m_curdata[i + j * 4];
				k++;
				isChange = true;
			}
		}
	}
	if (isChange)
	{
		//nGeneration();
	}
	memcpy(m_curdata, curdatacopy, sizeof(int) * 16);
}

void Qt2048::DeRightSpace()
{
	int curdatacopy[16] = { 0 };
	bool isChange = false;

	for (int j = 0; j < 4; j++)
	{
		int k = 3;
		for (int i = 3; i >= 0; i--)
		{
			if (m_curdata[i + j * 4] != 0)
			{
				curdatacopy[k + j * 4] = m_curdata[i + j * 4];
				k--;
				isChange = true;

			}
		}
	}
	if (isChange)
	{
		//nGeneration();
	}
	memcpy(m_curdata, curdatacopy, sizeof(int) * 16);
}

void Qt2048::keyPressEvent(QKeyEvent *event)
{
	int curkey = event->key();
	switch (curkey)
	{
		case Qt::Key_Up:
		{
			UpOprate();
			break;
		}
		case Qt::Key_Down:
		{
			DownOprate();    
			break;
		}
		case Qt::Key_Left:
		{
			LeftOprate();
			break;
		}
		case Qt::Key_Right:
		{
			RightOprate();
			break;
		}
		default:
		{
			QWidget::keyPressEvent(event);
			break;
		}
	}
}

void Qt2048::ranGeneration()
{
	srand((unsigned)time(NULL));
	if (m_bFirstTime) //第一次生成两个
	{
		int index1 = (rand() % (MAX_NUM - MIN_NUM)) + MIN_NUM;
		int index2 = (rand() % (MAX_NUM - MIN_NUM)) + MIN_NUM;
	
		m_curdata[index1] = 2;
		m_curdata[index2] = 2;
		
		m_bFirstTime = false;
	}
	else
	{
		bool isFull = true;

		for (int i =0; i<16;i++)
		{
			if (m_curdata[i] != 0)
			{
				isFull = false;
				break;
			}
		}

		if (isFull) //如果m_curdata中没有零了，怎gameover
		{
			//TODO game over!!
		}
		else
		{
			std::vector<int > c;
			
			for (int i=0;i<16;i++)
			{
				if (m_curdata[i]==0)
				{
					c.push_back(i);
				}
			}
			
			int index = rand() % c.size();
			int tem = c[index];

			if (1 == rand() % 10) //10%的概率出现
			{
				m_curdata[tem] = 4;
			}
			else
			{
				m_curdata[tem] = 2;
			}

			//UpgradeElementMap(m_curdata);
		}
	}
}

void Qt2048::UpgradeElementMap(int curdata[])
{
	QString qstrColor;
	
	ranGeneration();
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