#pragma once
#include <functional>
#include<map>
namespace Q2048
{
	class Qt2048
	{
	public:
		Qt2048();
		~Qt2048();

	private:

		bool m_bFirstTime;
		int m_curData[16];
		int m_curDatacopy[16];
		typedef std::function<void()> Proc;
		Proc m_procStatus;
	public:
		
		void CallBackProc(Proc callback);	//callback game status
		void generateRanData();				//random generate data 
		void operateDown();                 //key Down
		void operateUp();					//key Up
		void operateLeft();                 //key Left
		void operateRight();                //key Right
		inline int* getCurrentData()        
		{
			return m_curData;
		}
	private:
		void randomFillData();
		void rightToLeft();
		void upToLeft();
		void downToLeft();
		bool moveData(); 
		bool isGameOver();
	};

};