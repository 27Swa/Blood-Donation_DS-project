#pragma once

#include <QMainWindow>
#include "ui_FirstPage.h"

class FirstPage : public QMainWindow
{
	Q_OBJECT

public:
	FirstPage(QWidget *parent = nullptr);
	bool recButtonclicked();
	bool donButtonclicked();
	~FirstPage();

private:
	Ui::FirstPageClass ui;
};
