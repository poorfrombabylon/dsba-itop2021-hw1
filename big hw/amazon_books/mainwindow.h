#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QSortFilterProxyModel>

#include <books.h>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void onLoadButtonPushed();
    void saveKek();

    void on_editButton_clicked();

    void onDeleteButtonClicked();
    void findAuthor();


    void on_actionAbout_triggered();

private:
    Ui::MainWindow *ui;
    Books* booksmodel;
    QSortFilterProxyModel *sortModel;
};

#endif // MAINWINDOW_H
