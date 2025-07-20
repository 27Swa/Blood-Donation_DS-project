#pragma once

#include <QMainWindow>
#include "ui_DisplayBlood.h"
#include"recipient.h"
#include"RecipientInterface.h"
class DisplayBlood : public QMainWindow
{
	Q_OBJECT

public:
	recipient currentrec;
	DisplayBlood(recipient &r,QWidget *parent = nullptr);
	bool backButtonClicked();
	~DisplayBlood();

private:
	Ui::DisplayBloodClass ui;
};
