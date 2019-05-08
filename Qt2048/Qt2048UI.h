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
	typedef std::map<int, QTextEdit *> ElementMap; //保存16个element
	typedef std::map<int, std::string> ColorMap; //保存数字和颜色信息
	typedef std::map<int, QTextEdit *>::iterator elementIter;
	typedef std::map<int, std::string>::iterator colorIter;

	ElementMap m_elementMap;
	ColorMap m_colorMap;
	elementIter m_elementIter;
	colorIter m_colorIter;

	Q2048::Qt2048 m_Qt2048;

	
public	Q_SLOTS:     //> 不带这个宏无法响应,非槽函数不要放在此处
	void startGame();
	void resetGame();

private:
	void keyPressEvent(QKeyEvent *event) override;
	void init(); //初始化颜色、数字
	void initColorMap();
	void initElementMap(); //初始化控件颜色
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
