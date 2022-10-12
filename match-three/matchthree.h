#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_matchthree.h"

class matchthree : public QMainWindow
{
    Q_OBJECT

public:
    matchthree(QWidget *parent = nullptr);
    ~matchthree();

private:
    Ui::matchthreeClass ui;
};
