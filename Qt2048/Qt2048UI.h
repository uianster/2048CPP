#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_Qt2048.h"
#include <string>
#include <map>
#include <vector>

#include "Qt2048.h"

class Qt2048UI : public QMainWindow
{
	Q_OBJECT

public:
	Qt2048UI(QWidget *parent = Q_NULLPTR);
	~Qt2048UI();
private:
	Ui::Qt2048Class ui;
	typedef std::map<int, QTextEdit *> ElementMap; //����16��element
	typedef std::map<int, std::string> ColorMap; //�������ֺ���ɫ��Ϣ
	typedef std::map<int, QTextEdit *>::iterator elementIter;
	typedef std::map<int, std::string>::iterator colorIter;

	ElementMap m_elementMap;
	ColorMap m_colorMap;
	elementIter m_elementIter;
	colorIter m_colorIter;

	Q2048::Qt2048 m_Qt2048;

	
public	Q_SLOTS:     //> ����������޷���Ӧ,�ǲۺ�����Ҫ���ڴ˴�
	void startGame();
	void resetGame();

private:
	void keyPressEvent(QKeyEvent *event) override;
	void init(); //��ʼ����ɫ������
	void initColorMap();
	void initElementMap(); //��ʼ���ؼ���ɫ
	void updateUI(int curdata[]); //updae ui

	inline QTextEdit *getElement(int index) const
	{
		return m_elementMap.find(index)->second;
	}

	inline std::string getColor(int index) const
	{ 
		return m_colorMap.find(index)->second;
	}

};
