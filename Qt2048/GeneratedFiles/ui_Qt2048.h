/********************************************************************************
** Form generated from reading UI file 'Qt2048.ui'
**
** Created by: Qt User Interface Compiler version 5.9.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QT2048_H
#define UI_QT2048_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Qt2048Class
{
public:
    QWidget *centralWidget;
    QLabel *label;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *ButtonStart;
    QPushButton *ButtonReset;
    QLineEdit *lineEdit_14;
    QLineEdit *lineEdit_13;
    QLineEdit *lineEdit_16;
    QLineEdit *lineEdit_15;
    QLineEdit *lineEdit_11;
    QLineEdit *lineEdit_10;
    QLineEdit *lineEdit_9;
    QLineEdit *lineEdit_12;
    QLineEdit *lineEdit_8;
    QLineEdit *lineEdit_6;
    QLineEdit *lineEdit_5;
    QLineEdit *lineEdit_7;
    QLineEdit *lineEdit_4;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_1;
    QLineEdit *lineEdit_3;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Qt2048Class)
    {
        if (Qt2048Class->objectName().isEmpty())
            Qt2048Class->setObjectName(QStringLiteral("Qt2048Class"));
        Qt2048Class->resize(497, 747);
        centralWidget = new QWidget(Qt2048Class);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(60, -20, 401, 131));
        QFont font;
        font.setFamily(QStringLiteral("Times New Roman"));
        font.setPointSize(32);
        font.setBold(true);
        font.setItalic(false);
        font.setWeight(75);
        label->setFont(font);
        horizontalLayoutWidget = new QWidget(centralWidget);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(40, 560, 421, 91));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setSpacing(10);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        ButtonStart = new QPushButton(horizontalLayoutWidget);
        ButtonStart->setObjectName(QStringLiteral("ButtonStart"));
        QFont font1;
        font1.setPointSize(20);
        font1.setBold(true);
        font1.setWeight(75);
        ButtonStart->setFont(font1);
        ButtonStart->setAutoFillBackground(false);

        horizontalLayout->addWidget(ButtonStart);

        ButtonReset = new QPushButton(horizontalLayoutWidget);
        ButtonReset->setObjectName(QStringLiteral("ButtonReset"));
        ButtonReset->setFont(font1);

        horizontalLayout->addWidget(ButtonReset);

        lineEdit_14 = new QLineEdit(centralWidget);
        lineEdit_14->setObjectName(QStringLiteral("lineEdit_14"));
        lineEdit_14->setGeometry(QRect(140, 100, 109, 105));
        lineEdit_14->setMinimumSize(QSize(105, 105));
        lineEdit_14->setBaseSize(QSize(105, 105));
        QFont font2;
        font2.setFamily(QStringLiteral("Times New Roman"));
        font2.setPointSize(20);
        lineEdit_14->setFont(font2);
        lineEdit_14->setAlignment(Qt::AlignCenter);
        lineEdit_14->setReadOnly(true);
        lineEdit_13 = new QLineEdit(centralWidget);
        lineEdit_13->setObjectName(QStringLiteral("lineEdit_13"));
        lineEdit_13->setGeometry(QRect(30, 100, 109, 105));
        lineEdit_13->setMinimumSize(QSize(105, 105));
        lineEdit_13->setBaseSize(QSize(105, 105));
        lineEdit_13->setFont(font2);
        lineEdit_13->setAlignment(Qt::AlignCenter);
        lineEdit_13->setReadOnly(true);
        lineEdit_16 = new QLineEdit(centralWidget);
        lineEdit_16->setObjectName(QStringLiteral("lineEdit_16"));
        lineEdit_16->setGeometry(QRect(360, 100, 109, 105));
        lineEdit_16->setMinimumSize(QSize(105, 105));
        lineEdit_16->setBaseSize(QSize(105, 105));
        lineEdit_16->setFont(font2);
        lineEdit_16->setAlignment(Qt::AlignCenter);
        lineEdit_16->setReadOnly(true);
        lineEdit_15 = new QLineEdit(centralWidget);
        lineEdit_15->setObjectName(QStringLiteral("lineEdit_15"));
        lineEdit_15->setGeometry(QRect(250, 100, 109, 105));
        lineEdit_15->setMinimumSize(QSize(105, 105));
        lineEdit_15->setBaseSize(QSize(105, 105));
        lineEdit_15->setFont(font2);
        lineEdit_15->setAlignment(Qt::AlignCenter);
        lineEdit_15->setReadOnly(true);
        lineEdit_11 = new QLineEdit(centralWidget);
        lineEdit_11->setObjectName(QStringLiteral("lineEdit_11"));
        lineEdit_11->setGeometry(QRect(250, 210, 109, 105));
        lineEdit_11->setMinimumSize(QSize(105, 105));
        lineEdit_11->setBaseSize(QSize(105, 105));
        lineEdit_11->setFont(font2);
        lineEdit_11->setAlignment(Qt::AlignCenter);
        lineEdit_11->setReadOnly(true);
        lineEdit_10 = new QLineEdit(centralWidget);
        lineEdit_10->setObjectName(QStringLiteral("lineEdit_10"));
        lineEdit_10->setGeometry(QRect(140, 210, 109, 105));
        lineEdit_10->setMinimumSize(QSize(105, 105));
        lineEdit_10->setBaseSize(QSize(105, 105));
        lineEdit_10->setFont(font2);
        lineEdit_10->setAlignment(Qt::AlignCenter);
        lineEdit_10->setReadOnly(true);
        lineEdit_9 = new QLineEdit(centralWidget);
        lineEdit_9->setObjectName(QStringLiteral("lineEdit_9"));
        lineEdit_9->setGeometry(QRect(30, 210, 109, 105));
        lineEdit_9->setMinimumSize(QSize(105, 105));
        lineEdit_9->setBaseSize(QSize(105, 105));
        lineEdit_9->setFont(font2);
        lineEdit_9->setAlignment(Qt::AlignCenter);
        lineEdit_9->setReadOnly(true);
        lineEdit_12 = new QLineEdit(centralWidget);
        lineEdit_12->setObjectName(QStringLiteral("lineEdit_12"));
        lineEdit_12->setGeometry(QRect(360, 210, 109, 105));
        lineEdit_12->setMinimumSize(QSize(105, 105));
        lineEdit_12->setBaseSize(QSize(105, 105));
        lineEdit_12->setFont(font2);
        lineEdit_12->setAlignment(Qt::AlignCenter);
        lineEdit_12->setReadOnly(true);
        lineEdit_8 = new QLineEdit(centralWidget);
        lineEdit_8->setObjectName(QStringLiteral("lineEdit_8"));
        lineEdit_8->setGeometry(QRect(360, 320, 109, 105));
        lineEdit_8->setMinimumSize(QSize(105, 105));
        lineEdit_8->setBaseSize(QSize(105, 105));
        lineEdit_8->setFont(font2);
        lineEdit_8->setAlignment(Qt::AlignCenter);
        lineEdit_8->setReadOnly(true);
        lineEdit_6 = new QLineEdit(centralWidget);
        lineEdit_6->setObjectName(QStringLiteral("lineEdit_6"));
        lineEdit_6->setGeometry(QRect(140, 320, 109, 105));
        lineEdit_6->setMinimumSize(QSize(105, 105));
        lineEdit_6->setBaseSize(QSize(105, 105));
        lineEdit_6->setFont(font2);
        lineEdit_6->setAlignment(Qt::AlignCenter);
        lineEdit_6->setReadOnly(true);
        lineEdit_5 = new QLineEdit(centralWidget);
        lineEdit_5->setObjectName(QStringLiteral("lineEdit_5"));
        lineEdit_5->setGeometry(QRect(30, 320, 109, 105));
        lineEdit_5->setMinimumSize(QSize(105, 105));
        lineEdit_5->setBaseSize(QSize(105, 105));
        lineEdit_5->setFont(font2);
        lineEdit_5->setAlignment(Qt::AlignCenter);
        lineEdit_5->setReadOnly(true);
        lineEdit_7 = new QLineEdit(centralWidget);
        lineEdit_7->setObjectName(QStringLiteral("lineEdit_7"));
        lineEdit_7->setGeometry(QRect(250, 320, 109, 105));
        lineEdit_7->setMinimumSize(QSize(105, 105));
        lineEdit_7->setBaseSize(QSize(105, 105));
        lineEdit_7->setFont(font2);
        lineEdit_7->setAlignment(Qt::AlignCenter);
        lineEdit_7->setReadOnly(true);
        lineEdit_4 = new QLineEdit(centralWidget);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(360, 430, 109, 105));
        lineEdit_4->setMinimumSize(QSize(105, 105));
        lineEdit_4->setBaseSize(QSize(105, 105));
        lineEdit_4->setFont(font2);
        lineEdit_4->setAlignment(Qt::AlignCenter);
        lineEdit_4->setReadOnly(true);
        lineEdit_2 = new QLineEdit(centralWidget);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(140, 430, 109, 105));
        lineEdit_2->setMinimumSize(QSize(105, 105));
        lineEdit_2->setBaseSize(QSize(105, 105));
        lineEdit_2->setFont(font2);
        lineEdit_2->setAlignment(Qt::AlignCenter);
        lineEdit_2->setReadOnly(true);
        lineEdit_1 = new QLineEdit(centralWidget);
        lineEdit_1->setObjectName(QStringLiteral("lineEdit_1"));
        lineEdit_1->setGeometry(QRect(30, 430, 109, 105));
        lineEdit_1->setMinimumSize(QSize(105, 105));
        lineEdit_1->setBaseSize(QSize(105, 105));
        lineEdit_1->setFont(font2);
        lineEdit_1->setAlignment(Qt::AlignCenter);
        lineEdit_1->setReadOnly(true);
        lineEdit_3 = new QLineEdit(centralWidget);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(250, 430, 109, 105));
        lineEdit_3->setMinimumSize(QSize(105, 105));
        lineEdit_3->setBaseSize(QSize(105, 105));
        lineEdit_3->setFont(font2);
        lineEdit_3->setAlignment(Qt::AlignCenter);
        lineEdit_3->setReadOnly(true);
        Qt2048Class->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Qt2048Class);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 497, 26));
        Qt2048Class->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Qt2048Class);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        Qt2048Class->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(Qt2048Class);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        Qt2048Class->setStatusBar(statusBar);

        retranslateUi(Qt2048Class);
        QObject::connect(ButtonStart, SIGNAL(clicked()), Qt2048Class, SLOT(startGame()));
        QObject::connect(ButtonReset, SIGNAL(clicked()), Qt2048Class, SLOT(showMaximized()));

        QMetaObject::connectSlotsByName(Qt2048Class);
    } // setupUi

    void retranslateUi(QMainWindow *Qt2048Class)
    {
        Qt2048Class->setWindowTitle(QApplication::translate("Qt2048Class", "Qt2048", Q_NULLPTR));
        label->setText(QApplication::translate("Qt2048Class", "let's play 2048!", Q_NULLPTR));
        ButtonStart->setText(QApplication::translate("Qt2048Class", "Start", Q_NULLPTR));
        ButtonReset->setText(QApplication::translate("Qt2048Class", "Reset", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Qt2048Class: public Ui_Qt2048Class {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QT2048_H
