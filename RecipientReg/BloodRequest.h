#pragma once

#include <QMainWindow>
#include "ui_BloodRequest.h"
#include"recipient.h"
class BloodRequest : public QMainWindow
{
	Q_OBJECT

public:
	recipient currentrec;
	BloodRequest(recipient& r,QWidget *parent = nullptr);
	bool requestButtonClicked();
	bool okButtonClicked();
	bool backButtonClicked();
	bool profileButtonClicked();
	bool logoutButtonClicked();
	~BloodRequest();

private:
	Ui::BloodRequestClass ui;
};
