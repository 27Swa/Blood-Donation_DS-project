#pragma once

#include <QMainWindow>
#include "ui_DonationValidation.h"
#include"Donor.h"
class DonationValidation : public QMainWindow
{
	Q_OBJECT

public:
	Donor currentdonor;
	DonationValidation(Donor & d,QWidget *parent = nullptr);
	bool Buttonclicked();
	~DonationValidation();

private:
	Ui::DonationValidationClass ui;
};
