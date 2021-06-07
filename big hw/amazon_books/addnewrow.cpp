#include "addnewrow.h"
#include "ui_addnewrow.h"

addNewRow::addNewRow(QWidget *parent, Books* m) :
    QDialog(parent),
    ui(new Ui::addNewRow)
{
    ui->setupUi(this);
    model = m;
}

void addNewRow::ok_button()
{
    model->rowData.append(ui->name_lineEdit->text());
    model->rowData.append(ui->author_lineEdit->text());
    model->rowData.append(ui->rating_lineEdit->text());
    model->rowData.append(ui->reviews_lineEdit->text());
    model->rowData.append(ui->price_lineEdit->text());
    model->rowData.append(ui->year_lineEdit->text());
    model->rowData.append(ui->genre_lineEdit->text());
    model->appendRow(model->rowData);
    this->close();
}

addNewRow::~addNewRow()
{
    delete ui;
}
