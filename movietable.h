#ifndef MOVIETABLE_H
#define MOVIETABLE_H

#include <QAbstractTableModel>
#include <QMap>
#include <QObject>
#include <QPixmap>
#include <QString>
#include <QStringListModel>

#include "rapidcsv.h"

struct Movie
{
    QString date;
    QString title;
    QString overview;
    QString popularity;
    QString voteNum;
    QString voteAvg;
    QString originalLanguage;
    QString genre;
    QString posterURL;

    void fillData(const QStringList& details);
};

class MovieTable : public QAbstractTableModel
{
    Q_OBJECT
   public:
    explicit MovieTable(QObject* parent = nullptr);

   public:
    bool loadFile(const QString& fileName);
    int rowCount(const QModelIndex& parent = QModelIndex()) const override;
    int columnCount(const QModelIndex& parent = QModelIndex()) const override;
    QVariant data(const QModelIndex& ind,
                  int role = Qt::DisplayRole) const override;
    QVariant headerData(int section, Qt::Orientation orientation,
                        int role) const override;
    void setHeaderData(const QList<QVariant>& data);

   protected:
    static const int _COLUMNS = 9;
    QList<QList<QString>> _massive;
    QList<QVariant> _headers;
    QString _fileName;
   signals:
};

#endif  // MOVIETABLE_H
