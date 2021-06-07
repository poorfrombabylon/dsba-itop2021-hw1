#ifndef EDITWINDOW_H
#define EDITWINDOW_H

#include <QDialog>
#include <QSortFilterProxyModel>
#include <QAbstractTableModel>
#include <QBrush>
#include <QModelIndex>

#include "books.h"

namespace Ui {
class EditWindow;
}

class EditWindow : public QDialog
{
    Q_OBJECT

public:
    explicit EditWindow(QWidget *parent = nullptr, Books *m = nullptr);
    ~EditWindow();

private slots:
    void removeRow();
    void wishList();
    void finishedList();
    void progressList();
    //void onTableViewCurrentChanged(QModelIndex prev, QModelIndex next);

    void on_addButton_clicked();

private:
    Ui::EditWindow *ui;
    Books* model;
    QSortFilterProxyModel *sortModel;



};

#endif // EDITWINDOW_H
