#include "rtreegui.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	RTreeGUI w;
	w.show();
	return a.exec();
}
