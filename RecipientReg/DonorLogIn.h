#pragma once

#include <QMainWindow>
#include "ui_DonorLogIn.h"
#include "Donor.h"
class DonorLogIn : public QMainWindow
{
	Q_OBJECT

public:
	DonorLogIn(QWidget *parent = nullptr);
	Donor r;
	void LogInButtonclicked();
	void RegButtonclicked();
	bool backButtonclicked();
	~DonorLogIn();

private:
	Ui::DonorLogInClass ui;
};
