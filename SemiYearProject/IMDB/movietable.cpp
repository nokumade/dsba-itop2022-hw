#include "movietable.h"

#include <QFile>
#include <QFileInfo>
#include <QTextStream>
#include <stdexcept>

void Movie::fillData(const QStringList& details)
{
    if (details.size() < 9)  // TODO: consider magic constant
        throw std::invalid_argument("Invalid dish description");
    date = details[0];
    title = details[1];
    overview = details[2];
    popularity = details[3];
    voteNum = details[4];
    voteAvg = details[5];
    originalLanguage = details[6];
    genre = details[7];
    posterURL = details[8];
}

int MovieTable::rowCount(const QModelIndex&) const { return _massive.size(); }

int MovieTable::columnCount(const QModelIndex&) const
{
    return _headers.size();
}

QVariant MovieTable::data(const QModelIndex& ind, int role) const
{
    if (role == Qt::DisplayRole)
        return _massive.at(ind.row()).at(ind.row());
    return QVariant();
}

QVariant MovieTable::headerData(int section, Qt::Orientation orientation,
                                int role) const
{
    if (role == Qt::DisplayRole && orientation == Qt::Horizontal)
    {
        return _headers;
    }
    return QVariant();
}

void setHeaderData(const QList<QVariant>& data) {}

MovieTable::MovieTable(QObject* parent) : QAbstractTableModel{parent} {}

bool MovieTable::loadFile(const QString& fileName)
{
    if (fileName.isEmpty())
        throw std::invalid_argument("Invalid file path.");

    QFile file(fileName);

    if (!file.open(QIODevice::ReadOnly))
        return false;

    rapidcsv::Document doc(fileName.toStdString(),
                           rapidcsv::LabelParams(-1, -1));
    std::vector<std::string> headers = doc.GetRow<std::string>(0);
    for (int i = 0; i < headers.size(); i++)
        _headers.append(QString::fromStdString(headers[i]));
    for (int i = 1; i < doc.GetRowCount(); i++)
    {
        std::vector<std::string> temp = doc.GetRow<std::string>(i);
        if (temp.size() == 9)
        {
            QStringList movieDiscr;
            for (int j = 0; j < 9; j++)
                movieDiscr.append(QString::fromStdString(temp[j]));
            _massive.append(movieDiscr);
        }
    }
    int a = 0;
    return true;
}
