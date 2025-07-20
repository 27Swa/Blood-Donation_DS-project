#pragma once

#include <QMainWindow>
#include "ui_DonorProfile.h"
#include"Donor.h"
class DonorProfile : public QMainWindow
{
	Q_OBJECT

public:
	Donor d;
	DonorProfile(Donor& user,QWidget *parent = nullptr);
	bool saveButtonClicked();
	bool deleteButtonClicked();
	bool backButtonClicked();
	~DonorProfile();

private:
	Ui::DonorProfileClass ui;
};
