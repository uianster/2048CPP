
#include <vector>
#include <algorithm>
#include <time.h>
#include "Qt2048.h"
namespace Q2048 {
Qt2048::Qt2048()
{
	m_bFirstTime = true;
	memset(m_curdata, 0, sizeof(int) * 16);
}

Qt2048::~Qt2048()
{

}
void Qt2048::oprateDown() //向下操作
{
	//去除空隙
	removeDownSpace();
	bool isChange = false;

	//合并处理
	for (int j = 0; j < 4; j++)
	{
		int k = 0;
		for (int i = 1; i < 4; i++)
		{
			if (m_curdata[j + 4 * i] == 0)
			{
				continue;
			}
			if (m_curdata[j + 4 * (i - 1)] == m_curdata[j + 4 * i])
			{
				m_curdata[j + 4 * (i - 1)] += m_curdata[j + 4 * i];
				m_curdata[j + 4 * i] = 0;
				isChange = true;
			}
		}
	}

	if (isChange || m_bDownLock)
	{
		generateRanData();
	}
	else
	{
		m_bleftLock = true;
		m_bRightLock = true;
		m_bUpLock = true;
	}
	m_bDownLock = false;

	//去除空隙
	removeDownSpace();
}

void Qt2048::oprateUp()
{
	removeUPSpace();
	bool isChange = false;

	//合并处理
	for (int j = 0; j < 4; j++)
	{
		int k = 0;
		for (int i = 3; i >= 1; i--)
		{
			if (m_curdata[j + 4 * (i - 1)] == 0)
			{
				continue;
			}
			if (m_curdata[j + 4 * i] == m_curdata[j + 4 * (i - 1)])
			{
				m_curdata[j + 4 * i] += m_curdata[j + 4 * (i - 1)];
				m_curdata[j + 4 * (i - 1)] = 0;
				isChange = true;
			}
		}
	}

	if (isChange || m_bUpLock)
	{
		generateRanData();
	}
	else
	{
		m_bleftLock = true;
		m_bRightLock = true;
		m_bDownLock = true;
	}

	m_bUpLock = false;

	removeUPSpace();
}

void Qt2048::oprateRight()
{
	removeRightSpace();
	bool isChange = false;
	//合并处理
	for (int j = 0; j < 4; j++)
	{
		int k = 3;
		for (int i = 3; i >= 0; i--)
		{
			if (m_curdata[(i - 1) + j * 4] == 0)
			{
				continue;
			}

			if (m_curdata[(i - 1) + j * 4] == m_curdata[i + j * 4])
			{
				m_curdata[(i - 1) + j * 4] += m_curdata[i + j * 4];
				m_curdata[i + j * 4] = 0;
				isChange = true;
			}
		}
	}

	if (isChange || m_bRightLock)
	{
		generateRanData();
	}
	else
	{
		m_bUpLock = true;
		m_bleftLock = true;
		m_bDownLock = true;
	}

	m_bRightLock = false;
	
	removeRightSpace();
}

void Qt2048::oprateLeft()
{
	removeLeftSpace();
	bool isChange = false;

	//合并处理
	for (int j = 0; j < 4; j++)
	{
		int k = 0;
		for (int i = 1; i < 4; i++)
		{
			if (m_curdata[i + j * 4] == 0)
			{
				continue;
			}
			if (m_curdata[i + j * 4] == m_curdata[(i - 1) + 4 * j])
			{
				m_curdata[(i - 1) + 4 * j] += m_curdata[i + j * 4];
				m_curdata[i + j * 4] = 0;
				isChange = true;
			}
		}
	}
	if (isChange || m_bleftLock)
	{
		generateRanData();
	}
	else
	{
		m_bUpLock = true;
		m_bRightLock = true;
		m_bDownLock = true;
	}

	m_bleftLock = false;

	removeLeftSpace();
}

void Qt2048::removeUPSpace()
{
	int curdatacopy[16] = { 0 };
	//去除空隙

	for (int j = 0; j < 4; j++)
	{
		int k = 3;
		for (int i = 0; i < 4; i++)
		{
			if (m_curdata[j + i * 4] != 0)
			{
				curdatacopy[j + k * 4] = m_curdata[j + i * 4];
				k--;
			}
		}
	}

	memcpy(m_curdata, curdatacopy, sizeof(int) * 16);
}

void Qt2048::removeDownSpace()
{
	int curdatacopy[16] = { 0 };

	for (int j = 0; j < 4; j++)
	{
		int k = 0;
		for (int i = 0; i < 4; i++)
		{
			if (m_curdata[j + i * 4] != 0)
			{
				curdatacopy[j + k * 4] = m_curdata[j + i * 4];
				k++;
			}
		}
	}

	memcpy(m_curdata, curdatacopy, sizeof(int) * 16);
}

void Qt2048::removeLeftSpace()
{
	int curdatacopy[16] = { 0 };

	for (int j = 0; j < 4; j++)
	{
		int k = 0;
		for (int i = 0; i < 4; i++)
		{
			if (m_curdata[i + j * 4] != 0)
			{
				curdatacopy[k + j * 4] = m_curdata[i + j * 4];
				k++;
			}
		}
	}

	memcpy(m_curdata, curdatacopy, sizeof(int) * 16);
}

void Qt2048::removeRightSpace()
{
	int curdatacopy[16] = { 0 };

	for (int j = 0; j < 4; j++)
	{
		int k = 3;
		for (int i = 3; i >= 0; i--)
		{
			if (m_curdata[i + j * 4] != 0)
			{
				curdatacopy[k + j * 4] = m_curdata[i + j * 4];
				k--;
			}
		}
	}

	memcpy(m_curdata, curdatacopy, sizeof(int) * 16);
}
void fun()
{

}
void Qt2048::generateRanData()
{
	srand((unsigned)time(NULL));
	if (m_bFirstTime) //第一次生成两个
	{
		int index1 = (rand() % (15 - 0)) + 0;
		int index2 = (rand() % (15 - 0)) + 0;

		m_curdata[index1] = 2;
		m_curdata[index2] = 2;
		
		m_bFirstTime = false;
	}
	else
	{
		bool isFull = true;

		for (int i = 0; i < 16; i++)
		{
			if (m_curdata[i] != 0)
			{
				isFull = false;
				break;
			}
		}
		
		if (isFull) //如果m_curdata中没有零了，怎gameover
		{
			//TODO game over!! 使用回调函数通知
		}
		else
		{
			std::vector<int > c;

			for (int i = 0; i < 16; i++)
			{
				if (m_curdata[i] == 0)
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
		}
	}
}

}; //namespace Q2048