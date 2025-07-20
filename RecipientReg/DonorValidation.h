#pragma once

#include <QMainWindow>
#include "ui_DonorValidation.h"

class DonorValidation : public QMainWindow 
{
	Q_OBJECT

public:
	DonorValidation(QWidget *parent = nullptr);
	bool ButtonClicked();
	bool LogInButtonclicked();
	~DonorValidation();

private:
	Ui::DonorValidationClass ui;
};
