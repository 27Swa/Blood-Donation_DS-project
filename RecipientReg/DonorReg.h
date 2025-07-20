#pragma once

#include <QMainWindow>
#include "ui_DonorReg.h"

class DonorReg : public QMainWindow
{
	Q_OBJECT

public:
	DonorReg(QWidget *parent = nullptr);
	bool RegButtonclicked();
	bool LogInButtonclicked();
	~DonorReg();

private:
	Ui::DonorRegClass ui;
};
