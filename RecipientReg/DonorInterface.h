#pragma once

#include <QMainWindow>
#include "ui_DonorInterface.h"
#include "Donor.h"
#include <qdebug.h>
#include <string>
#include <iostream>
class DonorInterface : public QMainWindow
{
	Q_OBJECT

public:
	Donor currentdonor;
	DonorInterface(Donor &d,QWidget *parent = nullptr);
	bool profileButtonClicked();
	bool logoutButtonClicked();
	bool donateButtonClicked();
	bool okButtonClicked();
	~DonorInterface();

private:
	Ui::DonorInterfaceClass ui;
};
