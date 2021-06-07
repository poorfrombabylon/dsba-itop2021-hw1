#ifndef BOOKS_H
#define BOOKS_H

#include <QAbstractTableModel>
#include <QList>

class Books : public QAbstractTableModel
{
    Q_OBJECT

public:
    explicit Books(QObject *parent = nullptr);

    void fillModelWithData(QString path);
    void saveModelAsFile(QString path);

    void greenLine(int row);
    void redLine(int row);
    void yellowLine(int row);

    QVariant headerData(int section, Qt::Orientation orientation, int role = Qt::DisplayRole) const override;

    // Basic functionality:
    int rowCount(const QModelIndex &parent = QModelIndex()) const override;
    int columnCount(const QModelIndex &parent = QModelIndex()) const override;

    QVariant data(const QModelIndex &index, int role = Qt::DisplayRole) const override;
    void appendRow(QList<QVariant> newRow);

    bool setData(const QModelIndex &index, const QVariant &value, int role = Qt::EditRole) override;
    Qt::ItemFlags flags(const QModelIndex &index) const override;

    void deleteRow(int idx);
    void deleteAll();

    QVector<int> wish;
    QVector<int> finish;
    QVector<int> progress;
    QList<QVariant> rowData;

private:
    QList<QList<QVariant>> exampleData;
    QList<QString> headerList;
signals:
    void editCompleted(const QString &);
};

#endif // BOOKS_H
