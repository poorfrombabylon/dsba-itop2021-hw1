#include "books.h"
#include <QBrush>
#include <QFile>
#include <QTextStream>

Books::Books(QObject *parent)
    : QAbstractTableModel(parent)
{
}

void Books::fillModelWithData(QString path)
{
    QFile inputFile(path);
    inputFile.open(QFile::ReadOnly | QFile::Text);
    QTextStream inputStream(&inputFile);

    QString firstline = inputStream.readLine();
    headerList = firstline.split(",");
    emit headerDataChanged(Qt::Horizontal, 0, headerList.size());

    while(!inputStream.atEnd())
    {
        QString line = inputStream.readLine();
        QList<QVariant> dataRow;
        if (line.indexOf('\"') == -1){
            for (QString& item : line.split(",")) {
                bool ok = false;
                QVariant itemnum = item.toInt(&ok);
                if (ok)
                {
                   dataRow.append(itemnum);
                   continue;
                }
                itemnum = item.toDouble(&ok);
                if (ok)
                {
                    dataRow.append(itemnum);
                    continue;
                }
                dataRow.append(item);
            }
            appendRow(dataRow);
        } else {

        }
    }
    inputFile.close();
}


QVariant Books::headerData(int section, Qt::Orientation orientation, int role) const
{
    if (role == Qt::DisplayRole && !headerList.empty())
    {
        if (orientation == Qt::Orientation::Horizontal)
        {
            return headerList.at(section);
        }
        else
        {
            return section + 1;
        }
    }
    return QVariant();
}


int Books::rowCount(const QModelIndex &parent) const
{
    if (parent.isValid())
        return 0;

    return exampleData.size();
}


int Books::columnCount(const QModelIndex &parent) const
{
    if (parent.isValid())
        return 0;

    if (exampleData.empty())
    {
        return 0;
    }
    return exampleData[0].size();
}


void Books::greenLine(int row)
{
    if (progress.indexOf(row) != -1){
        progress.remove(row);
    }
    if (finish.indexOf(row) != -1)
    {
        finish.append(row);
    }
    wish.append(row);
    emit dataChanged(index(row, 0), index(row,6));
}


void Books::redLine(int row)
{
    if (progress.indexOf(row) != -1)
    {
        progress.remove(row);
    }
    if (wish.indexOf(row) != -1)
    {
        wish.remove(row);
    }
    finish.append(row);
    emit dataChanged(index(row, 0), index(row,6));
}


void Books::yellowLine(int row)
{
    if (wish.indexOf(row) != -1)
    {
        wish.remove(row);
    }
    if (finish.indexOf(row) != -1)
    {
        finish.remove(row);
    }
    progress.append(row);
    emit dataChanged(index(row, 0), index(row,6));
}


QVariant Books::data(const QModelIndex &index, int role) const
{
    if (!index.isValid())
        return QVariant();
    int row = index.row();
    int column = index.column();

    if (role == Qt::DisplayRole || role == Qt::EditRole)
    {
        return exampleData.at(row).at(column);
    }
    else if (role == Qt::BackgroundRole)
    {
        if (wish.indexOf(index.row()) != -1)
        {
            QColor greem(0,128,0);
            return QBrush(greem);
        }
        if (finish.indexOf(index.row()) != -1)
        {
            QColor reed(255,0,0);
            return QBrush(reed);
        }
        if (progress.indexOf(index.row()) != -1)
        {
            QColor yelloww(255,255,51);
            return QBrush(yelloww);
        }
        return QBrush(Qt::gray);
    }
    return QVariant();
}


bool Books::setData(const QModelIndex &index, const QVariant &value, int role)
{
    if (data(index, role) != value) {

        exampleData[index.row()][index.column()] = value.toString();

        emit dataChanged(index, index, QVector<int>() << role);
        return true;
    }
    return false;
}


Qt::ItemFlags Books::flags(const QModelIndex &index) const
{
    return Qt::ItemIsEditable | QAbstractTableModel::flags(index);
}


void Books::appendRow(QList<QVariant> newRow)
{
    bool columnFlag = false;
    beginInsertRows(QModelIndex(), rowCount(), rowCount());
    if (exampleData.isEmpty())
    {
        columnFlag = true;
        beginInsertColumns(QModelIndex(), 0, newRow.size() - 1);
        endInsertColumns();
    }
    exampleData.append(newRow);
    endInsertRows();
}


void Books::deleteRow(int idx)
{
    beginRemoveRows(QModelIndex(), idx, idx);
    exampleData.removeAt(idx);
    endRemoveRows();
}


void Books::deleteAll()
{
    beginRemoveColumns(QModelIndex(), 0, columnCount() - 1);
    beginRemoveRows(QModelIndex(), 0, rowCount() - 1);
    exampleData.clear();
    endRemoveRows();
    endRemoveColumns();
}


