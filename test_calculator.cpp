#include <QtTest>
#include "calculator.h"

class TestCalculator : public QObject {
    Q_OBJECT

private slots:
    void testAdd(); // тест сложения
};

void TestCalculator::testAdd() {
    Calculator c;
    QCOMPARE(c.add(2, 3), 5.0);
}

// точка входа для Qt Test
QTEST_MAIN(TestCalculator)
#include "test_calculator.moc"