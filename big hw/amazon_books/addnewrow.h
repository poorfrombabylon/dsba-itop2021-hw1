#ifndef ADDNEWROW_H
#define ADDNEWROW_H

#include <QDialog>
#include "books.h"

namespace Ui {
class addNewRow;
}

class addNewRow : public QDialog
{
    Q_OBJECT

public:
    explicit addNewRow(QWidget *parent = nullptr, Books *m = nullptr);
    ~addNewRow();

private slots:
    void ok_button();

private:
    Ui::addNewRow *ui;
    Books* model;
};

#endif // ADDNEWROW_H
