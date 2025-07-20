#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_RecipientReg.h"
#include"FirstPage.h"
#include"RecipientLogIn.h"
class RecipientReg : public QMainWindow
{
    Q_OBJECT

public:
    RecipientReg(QWidget *parent = nullptr);
    bool RegButtonclicked();
    bool LogInButtonclicked();
    ~RecipientReg();

private:
   Ui::RecipientRegClass ui;
};
