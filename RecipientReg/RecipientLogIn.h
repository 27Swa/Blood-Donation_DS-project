#pragma once

#include <QMainWindow>
#include "ui_RecipientLogIn.h"
#include"recipient.h"
class RecipientLogIn : public QMainWindow
{
	Q_OBJECT

public:
	recipient r;
	RecipientLogIn(QWidget *parent = nullptr);
	void LogInButtonclicked();
	bool backButtonclicked();
	void RegButtonclicked();
	~RecipientLogIn();

private:
	Ui::RecipientLogInClass ui;
};
