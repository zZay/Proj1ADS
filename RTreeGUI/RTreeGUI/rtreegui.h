#ifndef RTREEGUI_H
#define RTREEGUI_H

#include <QtWidgets/QMainWindow>
#include <QFileDialog>
#include <QString>
#include <QImage>
#include "ui_rtreegui.h"
#include "Wrap.h"
#define HEIGHTMAX 175
#define WIDTHMAX 175

class RTreeGUI : public QMainWindow
{
	Q_OBJECT

public:
	RTreeGUI(QWidget *parent = 0);
	~RTreeGUI();
	QString imAdd, veAdd, quAdd;
	double getrate(QPixmap & pix);
	void getNames(string fileAdd);
	vector<QString> names;
	int name_cnt;

private slots:
	void on_pushButton_im_clicked();
	void on_pushButton_sh_clicked();
	void on_pushButton_ve_clicked();
	void on_pushButton_qu_clicked();
	void on_pushButton_op_clicked();
	void on_pushButton_ne_clicked();
	void on_pushButton_re_clicked();

private:
	Ui::RTreeGUIClass ui;
};

#endif // RTREEGUI_H
