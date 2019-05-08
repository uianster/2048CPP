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
		void oprateDown(); //���²���
		void oprateUp(); //���ϲ���
		void oprateRight(); //���Ҳ���
		void oprateLeft(); //�������
	
		void generateRanData(); //��ȱ�����������
	
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