#include "Qt2048UI.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	Qt2048UI w;
	w.show();
	return a.exec();
}
