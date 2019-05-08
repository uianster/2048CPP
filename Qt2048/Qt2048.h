#pragma once

namespace Q2048
{
	
	class Qt2048
	{

	public:
		Qt2048();
		~Qt2048();

	private:

		bool m_bFirstTime;

		bool m_bUpLock;
		bool m_bDownLock;
		bool m_bRightLock;
		bool m_bleftLock;
		int m_curdata[16];

	public:
		void oprateDown(); //向下操作
		void oprateUp(); //向上操作
		void oprateRight(); //向右操作
		void oprateLeft(); //向左操作
	
		void generateRanData(); //空缺随机生成数字
	
		inline int* getCurrentData() 
		{
			return m_curdata;
		}
		
	private:
		void removeRightSpace();
		void removeLeftSpace();
		void removeUPSpace();
		void removeDownSpace();

	};
};