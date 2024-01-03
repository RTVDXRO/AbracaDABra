/*
 * This file is part of the AbracaDABra project
 *
 * MIT License
 *
  * Copyright (c) 2019-2023 Petr Kopecký <xkejpi (at) gmail (dot) com>
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 */

#ifndef EPGMODEL_H
#define EPGMODEL_H

#include <QAbstractListModel>
#include <QtQmlIntegration>
#include "epgmodelitem.h"

enum EPGModelRoles {
    ShortIdRole = Qt::UserRole,
    NameRole,
    LongNameRole,
    MediumNameRole,
    ShortNameRole,
    StartTimeRole,    
    StartTimeSecRole,
    StartTimeStringRole,
    StartTimeSecSinceEpochRole,
    EndTimeSecRole,
    EndTimeSecSinceEpochRole,
    DurationSecRole,
    LongDescriptionRole,
    ShortDescriptionRole,
};

class EPGModel : public QAbstractListModel
{
    Q_OBJECT
    QML_ELEMENT
public:
    explicit EPGModel(QObject *parent = nullptr);
    ~EPGModel();

    QVariant data(const QModelIndex &index, int role = Qt::DisplayRole) const;
    int rowCount(const QModelIndex &parent = QModelIndex()) const { return m_itemList.count(); }
    QHash<int, QByteArray> roleNames() const;
    void addItem(EPGModelItem *item);
    void populateWithList(const QList<EPGModelItem *> & list);
private:
    QSet<int> m_shortIdList;
    QList<EPGModelItem *> m_itemList;
};

#endif // EPGMODEL_H
