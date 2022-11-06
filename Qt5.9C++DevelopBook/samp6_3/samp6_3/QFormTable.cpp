#include "QFormTable.h"
#include "ui_QFormTable.h"

QFormTable::QFormTable(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::QFormTable)
{
    ui->setupUi(this);
}

QFormTable::~QFormTable()
{
    delete ui;
}
