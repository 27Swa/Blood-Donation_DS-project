#include "FirstPage.h"
#include "RecipientReg.h"
#include "RecipientLogIn.h"
#include "DonorLogIn.h"
#include<qpushbutton.h>
#include<string>
#include<iostream>
FirstPage::FirstPage(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	connect(ui.recipient, &QPushButton::clicked, this, &FirstPage::recButtonclicked);
	connect(ui.donor, &QPushButton::clicked, this, &FirstPage::donButtonclicked);
	
}
bool FirstPage::recButtonclicked() {

	this->hide();
	RecipientLogIn* rec = new RecipientLogIn();
	rec->show();
	
	return true;
}
bool FirstPage::donButtonclicked() {

	this->hide();
	DonorLogIn* rec = new DonorLogIn();
	rec->show();

	return true;
}
FirstPage::~FirstPage()
{}
