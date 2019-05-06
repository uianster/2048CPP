#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_Qt2048.h"
#include <map>
#include <string>
#include <vector>
#include <algorithm>
class Qt2048 : public QMainWindow
{
	Q_OBJECT

public:
	Qt2048(QWidget *parent = Q_NULLPTR);
	~Qt2048();
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
	int m_curdata[16];
	bool m_bFirstTime;
	
	
public	Q_SLOTS:     //> ����������޷���Ӧ,�ǲۺ�����Ҫ���ڴ˴�
	void startGame();
	void resetGame();

private:
	void keyPressEvent(QKeyEvent *event) override;
	void init(); //��ʼ����ɫ������
	void initColorMap();
	void initElementMap(); //��ʼ���ؼ���ɫ
	void UpgradeElementMap(int curdata[]); //��ʼ���ؼ���ɫ

	void ranGeneration(); //��ȱ�����������
	void DownOprate(); //���²���
	void UpOprate(); //���ϲ���
	void RightOprate(); //���Ҳ���
	void DeRightSpace();
	void LeftOprate(); //�������

	void DeLeftSpace();
	void deUPSpace();
	void DeDownSpace();

	inline QTextEdit *getElement(int index) const
	{
		return m_elementMap.find(index)->second;
	}

	inline std::string getColor(int index) const
	{ 
		return m_colorMap.find(index)->second;
	}

};
