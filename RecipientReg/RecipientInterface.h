#pragma once

#include <QMainWindow>
#include "ui_RecipientInterface.h"
#include"recipient.h"

class RecipientInterface : public QMainWindow
{
	Q_OBJECT

public:
	recipient currentrec;
	RecipientInterface(recipient& r,QWidget *parent = nullptr);
	bool profileButtonClicked();
	bool logoutButtonClicked();
	bool RequestBButtonClicked();
	bool RequestButtonClicked();
	bool okButtonClicked();
	bool displayButtonClicked();
	~RecipientInterface();

private:
	Ui::RecipientInterfaceClass ui;
};
