#pragma once

#include <QMainWindow>
#include "ui_RecipientProfile.h"
#include"recipient.h"
class RecipientProfile : public QMainWindow
{
	Q_OBJECT

public:
	recipient currentrec;
	RecipientProfile(recipient &r,QWidget *parent = nullptr);
	bool saveButtonClicked();
	bool deleteButtonClicked();
	bool backButtonClicked();
	~RecipientProfile();

private:
	Ui::RecipientProfileClass ui;
};
