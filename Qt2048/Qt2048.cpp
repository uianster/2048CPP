
#include <vector>
#include <algorithm>
#include <time.h>
#include "Qt2048.h"

namespace Q2048 {
	Qt2048::Qt2048()
	{
		m_bFirstTime = true;
		memset(m_curData, 0, sizeof(int) * 16);
		memset(m_curDatacopy, 1, sizeof(int) * 16);
		srand(time(NULL));
	}

	Qt2048::~Qt2048()
	{
	}

	void Qt2048::CallBackProc(Proc callback)
	{
		m_procStatus = callback;
	}

	void Qt2048::operateDown()
	{
		downToLeft();
		bool ischanged = moveData();
		downToLeft();
		if (ischanged)
		generateRanData();
	}
	void Qt2048::operateUp()
	{
		upToLeft();
		bool ischanged = moveData();
		upToLeft();
		if (ischanged)
		generateRanData();

	}
	void Qt2048::operateLeft()
	{
		bool ischanged = moveData();
		if (ischanged)
		generateRanData();
	}
	void Qt2048::operateRight()
	{
		rightToLeft();
		bool ischanged = moveData();
		rightToLeft();
		if (ischanged)
		{
			generateRanData();
		}
		
	}

	bool Qt2048::moveData()
	{
		memcpy(m_curDatacopy, m_curData, sizeof(int) * 16);
		for (int i = 0; i < 4; ++i)
		{
			int Pos = 0;
			int lastValue = 0;
			for (int j = 0; j < 4; ++j)
			{
				if (m_curData[j + i * 4] == 0)
				{
					continue;
				}
				if (lastValue == 0)
				{
					lastValue = m_curData[j + i * 4];
				}
				else
				{
					if (lastValue == m_curData[j + i * 4]) {
						m_curData[Pos + i * 4] = lastValue * 2;
						lastValue = 0;

					}
					else {
						m_curData[Pos + i * 4] = lastValue;
						lastValue = m_curData[j + i * 4];
					}
					++Pos;
				}

				m_curData[j + i * 4] = 0; //����ǰ���
			}
			if (lastValue != 0) //�������һ��
			{
				m_curData[Pos + i * 4] = lastValue;
			}
		}
		if (std::equal(std::begin(m_curDatacopy), std::end(m_curDatacopy), std::begin(m_curData)))
		{
			return false;
		}
		return true;
	}

	void Qt2048::upToLeft()
	{
		int curdatacopy[16] = { 0 };
		//ȥ����϶
		int m;
		for (int j = 0, m = 3; j < 4; j++)
		{
			int k = 3;
			for (int i = 0; i < 4; i++)
			{
				curdatacopy[m + k * 4] = m_curData[i + j * 4];
				k--;
			}
			m--;
		}

		memcpy(m_curData, curdatacopy, sizeof(int) * 16);
	}

	void Qt2048::downToLeft()
	{
		int curdatacopy[16] = { 0 };
		//ȥ����϶
		int i, k;
		for (int j = 0; j < 4; j++)
		{
			for (int i = 0; i < 4; i++)
			{
				curdatacopy[j + i * 4] = m_curData[i + j * 4];
			}
		}
		memcpy(m_curData, curdatacopy, sizeof(int) * 16);
	}

	void Qt2048::rightToLeft()
	{
		int curdatacopy[16] = { 0 };
		int i, k;

		for (int j = 0; j < 4; j++)
		{
			for (i = 3, k = 0; i >= 0; i--, k++)
			{
				curdatacopy[k + 4 * j] = m_curData[i + 4 * j];
			}
		}

		memcpy(m_curData, curdatacopy, sizeof(int) * 16);
	}

	bool Qt2048::isGameOver()
	{
		for (int i = 0; i < 4; ++i)
		{
			for (int j = 0; j < 4; ++j)
			{
				// �п�λ����������һ���Ķ����Լ���
				if ((j + 1 < 4) && (m_curData[i + 4 * j] * m_curData[i + 4 * (j + 1)] == 0 \
					|| m_curData[i + 4 * j] == m_curData[i + 4 * (j + 1)]))
				{
					return false;
				}
				if ((i + 1 < 4) && (m_curData[i + 4 * j] * m_curData[i + 1 + 4 * j] == 0 \
					|| m_curData[i + 4 * j] == m_curData[i + 1 + 4 * j]))
				{
					return false;
				}
			}
		}

		return true;
	}

	void Qt2048::generateRanData()
	{

		srand((unsigned)time(NULL));
		if (m_bFirstTime) //��һ����������
		{
			int index1 = (rand() % (15 - 0)) + 0;
			int index2 = (rand() % (15 - 0)) + 0;

			m_curData[index1] = 2;
			m_curData[index2] = 2;

			m_bFirstTime = false;
		}
		else
		{
			randomFillData();

			if (isGameOver())			
			{
				m_procStatus();		//TODO game over!! ʹ�ûص�����֪ͨ
				return;
			}
		}
	}

	void Qt2048::randomFillData()
	{
		std::vector<int >vecZero;
		for (int i = 0; i < 16; i++)
		{
			if (m_curData[i] == 0)
			{
				vecZero.push_back(i);
			}
		}
		if (vecZero.size()!=0)//��ֹ����
		{
			int index = vecZero[rand() % vecZero.size()];
			m_curData[index] = rand() % 10 == 1 ? 4 : 2;
		}
	}

}; //namespace Q2048