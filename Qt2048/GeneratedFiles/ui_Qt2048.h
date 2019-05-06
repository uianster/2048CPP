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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Qt2048Class
{
public:
    QWidget *centralWidget;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QTextEdit *Elemet_5;
    QTextEdit *Elemet_9;
    QTextEdit *Elemet_13;
    QTextEdit *Elemet_2;
    QTextEdit *Elemet_15;
    QTextEdit *Elemet_11;
    QTextEdit *Elemet_6;
    QTextEdit *Elemet_10;
    QTextEdit *Elemet_7;
    QTextEdit *Elemet_3;
    QTextEdit *Elemet_1;
    QTextEdit *Elemet_14;
    QTextEdit *Elemet_16;
    QTextEdit *Elemet_12;
    QTextEdit *Elemet_8;
    QTextEdit *Elemet_4;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *ButtonStart;
    QPushButton *ButtonReset;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Qt2048Class)
    {
        if (Qt2048Class->objectName().isEmpty())
            Qt2048Class->setObjectName(QStringLiteral("Qt2048Class"));
        Qt2048Class->resize(509, 641);
        centralWidget = new QWidget(Qt2048Class);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayoutWidget = new QWidget(centralWidget);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(40, 34, 421, 441));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        Elemet_5 = new QTextEdit(gridLayoutWidget);
        Elemet_5->setObjectName(QStringLiteral("Elemet_5"));
        Elemet_5->setReadOnly(true);

        gridLayout->addWidget(Elemet_5, 2, 0, 1, 1);

        Elemet_9 = new QTextEdit(gridLayoutWidget);
        Elemet_9->setObjectName(QStringLiteral("Elemet_9"));
        Elemet_9->setReadOnly(true);

        gridLayout->addWidget(Elemet_9, 1, 0, 1, 1);

        Elemet_13 = new QTextEdit(gridLayoutWidget);
        Elemet_13->setObjectName(QStringLiteral("Elemet_13"));
        Elemet_13->setReadOnly(true);

        gridLayout->addWidget(Elemet_13, 0, 0, 1, 1);

        Elemet_2 = new QTextEdit(gridLayoutWidget);
        Elemet_2->setObjectName(QStringLiteral("Elemet_2"));
        Elemet_2->setReadOnly(true);

        gridLayout->addWidget(Elemet_2, 3, 1, 1, 1);

        Elemet_15 = new QTextEdit(gridLayoutWidget);
        Elemet_15->setObjectName(QStringLiteral("Elemet_15"));
        Elemet_15->setReadOnly(true);

        gridLayout->addWidget(Elemet_15, 0, 2, 1, 1);

        Elemet_11 = new QTextEdit(gridLayoutWidget);
        Elemet_11->setObjectName(QStringLiteral("Elemet_11"));
        Elemet_11->setReadOnly(true);

        gridLayout->addWidget(Elemet_11, 1, 2, 1, 1);

        Elemet_6 = new QTextEdit(gridLayoutWidget);
        Elemet_6->setObjectName(QStringLiteral("Elemet_6"));
        Elemet_6->setReadOnly(true);

        gridLayout->addWidget(Elemet_6, 2, 1, 1, 1);

        Elemet_10 = new QTextEdit(gridLayoutWidget);
        Elemet_10->setObjectName(QStringLiteral("Elemet_10"));
        Elemet_10->setReadOnly(true);

        gridLayout->addWidget(Elemet_10, 1, 1, 1, 1);

        Elemet_7 = new QTextEdit(gridLayoutWidget);
        Elemet_7->setObjectName(QStringLiteral("Elemet_7"));
        Elemet_7->setReadOnly(true);

        gridLayout->addWidget(Elemet_7, 2, 2, 1, 1);

        Elemet_3 = new QTextEdit(gridLayoutWidget);
        Elemet_3->setObjectName(QStringLiteral("Elemet_3"));
        Elemet_3->setReadOnly(true);

        gridLayout->addWidget(Elemet_3, 3, 2, 1, 1);

        Elemet_1 = new QTextEdit(gridLayoutWidget);
        Elemet_1->setObjectName(QStringLiteral("Elemet_1"));
        Elemet_1->setReadOnly(true);

        gridLayout->addWidget(Elemet_1, 3, 0, 1, 1);

        Elemet_14 = new QTextEdit(gridLayoutWidget);
        Elemet_14->setObjectName(QStringLiteral("Elemet_14"));
        Elemet_14->setReadOnly(true);

        gridLayout->addWidget(Elemet_14, 0, 1, 1, 1);

        Elemet_16 = new QTextEdit(gridLayoutWidget);
        Elemet_16->setObjectName(QStringLiteral("Elemet_16"));
        Elemet_16->setReadOnly(true);

        gridLayout->addWidget(Elemet_16, 0, 3, 1, 1);

        Elemet_12 = new QTextEdit(gridLayoutWidget);
        Elemet_12->setObjectName(QStringLiteral("Elemet_12"));
        Elemet_12->setReadOnly(true);

        gridLayout->addWidget(Elemet_12, 1, 3, 1, 1);

        Elemet_8 = new QTextEdit(gridLayoutWidget);
        Elemet_8->setObjectName(QStringLiteral("Elemet_8"));
        Elemet_8->setReadOnly(true);

        gridLayout->addWidget(Elemet_8, 2, 3, 1, 1);

        Elemet_4 = new QTextEdit(gridLayoutWidget);
        Elemet_4->setObjectName(QStringLiteral("Elemet_4"));
        Elemet_4->setReadOnly(true);

        gridLayout->addWidget(Elemet_4, 3, 3, 1, 1);

        verticalLayoutWidget = new QWidget(centralWidget);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(160, 490, 160, 80));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        ButtonStart = new QPushButton(verticalLayoutWidget);
        ButtonStart->setObjectName(QStringLiteral("ButtonStart"));

        verticalLayout->addWidget(ButtonStart);

        ButtonReset = new QPushButton(verticalLayoutWidget);
        ButtonReset->setObjectName(QStringLiteral("ButtonReset"));

        verticalLayout->addWidget(ButtonReset);

        Qt2048Class->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Qt2048Class);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 509, 26));
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
        Elemet_5->setHtml(QApplication::translate("Qt2048Class", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", Q_NULLPTR));
        Elemet_9->setHtml(QApplication::translate("Qt2048Class", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", Q_NULLPTR));
        Elemet_13->setHtml(QApplication::translate("Qt2048Class", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:72pt;\"> </span></p></body></html>", Q_NULLPTR));
        Elemet_2->setHtml(QApplication::translate("Qt2048Class", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", Q_NULLPTR));
        Elemet_15->setHtml(QApplication::translate("Qt2048Class", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", Q_NULLPTR));
        Elemet_11->setHtml(QApplication::translate("Qt2048Class", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", Q_NULLPTR));
        Elemet_6->setHtml(QApplication::translate("Qt2048Class", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", Q_NULLPTR));
        Elemet_10->setHtml(QApplication::translate("Qt2048Class", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", Q_NULLPTR));
        Elemet_7->setHtml(QApplication::translate("Qt2048Class", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", Q_NULLPTR));
        Elemet_3->setHtml(QApplication::translate("Qt2048Class", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", Q_NULLPTR));
        Elemet_1->setHtml(QApplication::translate("Qt2048Class", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", Q_NULLPTR));
        Elemet_14->setHtml(QApplication::translate("Qt2048Class", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", Q_NULLPTR));
        Elemet_16->setHtml(QApplication::translate("Qt2048Class", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", Q_NULLPTR));
        Elemet_12->setHtml(QApplication::translate("Qt2048Class", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", Q_NULLPTR));
        Elemet_8->setHtml(QApplication::translate("Qt2048Class", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", Q_NULLPTR));
        Elemet_4->setHtml(QApplication::translate("Qt2048Class", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", Q_NULLPTR));
        ButtonStart->setText(QApplication::translate("Qt2048Class", "Start", Q_NULLPTR));
        ButtonReset->setText(QApplication::translate("Qt2048Class", "Reset", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Qt2048Class: public Ui_Qt2048Class {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QT2048_H
