#ifndef TESTPBKDF2_H
#define TESTPBKDF2_H

#include <QObject>
#include <QtTest/QTest>

#include "DomainSettings.h"

class TestPBKDF2 : public QObject
{
  Q_OBJECT
public:
  explicit TestPBKDF2(QObject *parent = 0);

signals:

private slots:
  void simple(void);


};

#endif // TESTPBKDF2_H