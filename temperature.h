#ifndef TEMPERATURE_H
#define TEMPERATURE_H

#include <QObject>

class Temperature : public QObject
{
    Q_OBJECT
public:
    explicit Temperature(QObject *parent = nullptr);

    void UpdateData();
signals:

public slots:
};

#endif // TEMPERATURE_H
