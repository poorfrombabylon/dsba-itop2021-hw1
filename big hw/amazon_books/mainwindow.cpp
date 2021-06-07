#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "editwindow.h"
#include "aboutdialog.h"

#include <QWidget>
#include <QStandardItemModel>
#include <QFile>
#include <QTextStream>
#include <QList>
#include <QFileDialog>

#include <iostream>

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent),
    ui(new Ui::MainWindow),
    booksmodel(new Books)
{
    ui = new Ui::MainWindow;
    ui->setupUi(this);

    sortModel = new QSortFilterProxyModel(this);
    sortModel->setSourceModel(booksmodel);
    ui->tableView->setModel(sortModel);
    ui->tableView->setSortingEnabled(true);
}


MainWindow::~MainWindow()
{
    delete ui;
    delete booksmodel;
    delete sortModel;
}


void saveModelAsFile(Books* m, QString path)
{
    QFile outFile(path);
    outFile.open(QFile::WriteOnly | QFile::Text);
    QTextStream out(&outFile);

    for (int i = 0; i < m->rowCount(); ++i)
    {
        for (int j = 0; j < m->columnCount(); ++j)
        {
            QModelIndex idx = m->index(i, j);
            out << m->data(idx).toString();
            if (j != m->columnCount() - 1)
            {
                out << ",";
            }
        }
        out << "\n";
    }
    outFile.close();
}


void MainWindow::onLoadButtonPushed()
{
    QString path = QFileDialog::getOpenFileName(this);
    if (path.isNull())
    {
        return;
    }
    booksmodel->deleteAll();
    booksmodel->fillModelWithData(path);
    ui->tableView->sortByColumn(0, Qt::SortOrder::AscendingOrder);
}


void MainWindow::saveKek(){
    QString path = QFileDialog::getSaveFileName(this);
    saveModelAsFile(booksmodel, path);
}


void MainWindow::findAuthor()
{
    sortModel->setFilterKeyColumn(1);
    sortModel->setFilterFixedString(ui->lineEdit->text());
}


void MainWindow::onDeleteButtonClicked()
{
    QModelIndex idx = ui->tableView->currentIndex();
    int row = sortModel->mapToSource(idx).row();
    booksmodel->deleteRow(row);
}


void MainWindow::on_editButton_clicked()
{
    EditWindow edit(this, booksmodel);
    edit.exec();
}



void MainWindow::on_actionAbout_triggered()
{
    AboutDialog about;
    about.exec();
}
