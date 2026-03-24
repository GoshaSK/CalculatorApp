#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow() override;

private:
    Ui::MainWindow *ui;

private slots:
    void onDigitClicked();
    void onClearClicked();
    void onAddClicked();
    void onEqualClicked();
    void onSubClicked();
    void onMulClicked();
    void onDivClicked();
private:
    double first = 0;
    QString operation;
};
#endif // MAINWINDOW_H
