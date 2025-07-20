#pragma once

#include <QMainWindow>
#include "ui_DonationRequest.h"
#include"Donor.h"
class DonationRequest : public QMainWindow
{
	Q_OBJECT

public:
	Donor d;
	DonationRequest(Donor& user,QWidget *parent = nullptr);
	bool profileButtonClicked();
	bool logoutButtonClicked();
	bool submitButtonClicked();
	bool backButtonClicked();
	~DonationRequest();

private:
	Ui::DonationRequestClass ui;
};
