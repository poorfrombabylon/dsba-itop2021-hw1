#include "editwindow.h"
#include "ui_editwindow.h"

#include "books.h"
#include "mainwindow.h"
#include "addnewrow.h"

EditWindow::EditWindow(QWidget *parent, Books *m) :
    QDialog(parent),
    ui(new Ui::EditWindow)
{

    ui = new Ui::EditWindow;
    ui->setupUi(this);

    model = m;
    sortModel = new QSortFilterProxyModel(this);
    sortModel->setSourceModel(m);
    ui->tableView->setModel(sortModel);
    ui->tableView->setSortingEnabled(true);

    ui->frame_6->setStyleSheet("background-color: rgb(0,128,0)");
    ui->frame_8->setStyleSheet("background-color: rgb(255,0,0)");
    ui->frame_7->setStyleSheet("background-color: rgb(255,255,51)");

}

void EditWindow::removeRow()
{
    QModelIndex idx = ui->tableView->currentIndex();
    int row = sortModel->mapToSource(idx).row();
    if (model->wish.indexOf(row) != -1)
    {
        model->wish.remove(row);
    }
    if (model->progress.indexOf(row) != -1)
    {
        model->progress.remove(row);
    }
    if (model->finish.indexOf(row) != -1)
    {
        model->finish.remove(row);
    }
    model->deleteRow(row);
}

void EditWindow::wishList()
{
    QModelIndex idx = ui->tableView->currentIndex();
    int row = sortModel->mapToSource(idx).row();
    model->greenLine(row);
}

void EditWindow::finishedList()
{
    QModelIndex idx = ui->tableView->currentIndex();
    int row = sortModel->mapToSource(idx).row();
    model->redLine(row);
}

void EditWindow::progressList()
{
    QModelIndex idx = ui->tableView->currentIndex();
    int row = sortModel->mapToSource(idx).row();
    model->yellowLine(row);
}
EditWindow::~EditWindow()
{
    delete ui;
}

void EditWindow::on_addButton_clicked()
{
    addNewRow newRow(this, model);
    newRow.exec();
}
