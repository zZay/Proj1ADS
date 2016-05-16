#include "rtreegui.h"

RTreeGUI::RTreeGUI(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	ui.label_im->setWordWrap(true);
	ui.label_ve->setWordWrap(true);
	ui.label_qu->setWordWrap(true);
	veAdd = "sample.txt";
	quAdd = "sampleQuery.txt";
	name_cnt = 0;
}

RTreeGUI::~RTreeGUI()
{

}

void RTreeGUI::on_pushButton_im_clicked()
{
	QString add = QFileDialog::getExistingDirectory();
	imAdd = add;
	ui.label_im->setText(add);
}

void RTreeGUI::on_pushButton_sh_clicked()
{
	QPixmap pix;
	double rate;

	pix.load(imAdd + '/' + ui.lineEdit->text());
	rate = getrate(pix);
	pix = pix.scaled(pix.width() * rate, pix.height() * rate, Qt::KeepAspectRatio);
	ui.label_p1->setPixmap(pix);

	ui.label_p2->clear();
	ui.label_p3->clear();
}

double RTreeGUI::getrate(QPixmap & pix)
{
	double rate = 1.0;
	int height = pix.height();
	int width = pix.width();

	if(height > HEIGHTMAX)
		rate = (double)HEIGHTMAX / (double)height;
	if(width * rate > WIDTHMAX)
		rate = (double)WIDTHMAX / (double)width;

	return rate;
}

void RTreeGUI::on_pushButton_ve_clicked()
{
	QString add = QFileDialog::getOpenFileName();
	veAdd = add;
	ui.label_ve->setText(add);
}

void RTreeGUI::on_pushButton_qu_clicked()
{
	QString add = QFileDialog::getOpenFileName();
	quAdd = add;
	ui.label_qu->setText(add);
}

void RTreeGUI::on_pushButton_op_clicked()
{
	RTreeWrapper wrapper;
	wrapper.fromTxtBuildRStarTree(veAdd.toStdString());
	wrapper.fromTxtQuery_Vec(quAdd.toStdString());
	getNames("answer.txt");
	on_pushButton_ne_clicked();
}

void RTreeGUI::getNames(string fileAdd)
{
	ifstream fin(fileAdd);
	string line;

	while (!fin.eof())
	{
		getline(fin, line);
		if(line[0] == '-') break;
		names.push_back(QString::fromStdString(line));
	}
	//ui.label_qu->setText(names[0] + ' ' + names[1]);
}

void RTreeGUI::on_pushButton_ne_clicked()
{
	QPixmap pix;
	double rate;
	int i;
	ui.label_p1->setText("no more");
	ui.label_p2->setText("no more");
	ui.label_p3->setText("no more");
	
	for(i = name_cnt; i < names.size() && i < name_cnt + 3; i++)
	{
		pix.load(imAdd + '/' + names[i]);
		rate = getrate(pix);
		pix = pix.scaled(pix.width() * rate, pix.height() * rate, Qt::KeepAspectRatio);
		switch(i % 3)
		{
		case 0:
			ui.label_p1->setPixmap(pix); break;
		case 1:
			ui.label_p2->setPixmap(pix); break;
		case 2:
			ui.label_p3->setPixmap(pix); break;
		}
	}
	name_cnt = i;
}

void RTreeGUI::on_pushButton_re_clicked()
{
	name_cnt = 0;
	on_pushButton_ne_clicked();
}