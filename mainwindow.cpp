#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QPushButton>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->btn0, &QPushButton::clicked, this, &MainWindow::onDigitClicked);
    connect(ui->btn1, &QPushButton::clicked, this, &MainWindow::onDigitClicked);
    connect(ui->btn2, &QPushButton::clicked, this, &MainWindow::onDigitClicked);
    connect(ui->btn3, &QPushButton::clicked, this, &MainWindow::onDigitClicked);
    connect(ui->btn4, &QPushButton::clicked, this, &MainWindow::onDigitClicked);
    connect(ui->btn5, &QPushButton::clicked, this, &MainWindow::onDigitClicked);
    connect(ui->btn6, &QPushButton::clicked, this, &MainWindow::onDigitClicked);
    connect(ui->btn7, &QPushButton::clicked, this, &MainWindow::onDigitClicked);
    connect(ui->btn8, &QPushButton::clicked, this, &MainWindow::onDigitClicked);
    connect(ui->btn9, &QPushButton::clicked, this, &MainWindow::onDigitClicked);
    connect(ui->btnClear, &QPushButton::clicked, this, &MainWindow::onClearClicked);
    connect(ui->btnAdd, &QPushButton::clicked, this, &MainWindow::onAddClicked);
    connect(ui->btnEqual, &QPushButton::clicked, this, &MainWindow::onEqualClicked);
    connect(ui->btnMul, &QPushButton::clicked, this, &MainWindow::onMulClicked);
    connect(ui->btnSub, &QPushButton::clicked, this, &MainWindow::onSubClicked);
    connect(ui->btnDiv, &QPushButton::clicked, this, &MainWindow::onDivClicked);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::onDigitClicked(){
    QPushButton *button = qobject_cast<QPushButton*> (sender());

    if (!button) return;

    QString current = ui->display->text();
    QString digit = button->text();

    ui->display->setText(current + digit);
}

void MainWindow::onClearClicked(){
    ui->display->setText("");
}

void MainWindow::onAddClicked(){
    first = ui->display->text().toDouble();
    operation = "+";
    ui->display->clear();
}

void MainWindow::onMulClicked(){
    first = ui->display->text().toDouble();
    operation = "x";
    ui->display->clear();
}

void MainWindow::onSubClicked(){
    first = ui->display->text().toDouble();
    operation = "-";
    ui->display->clear();
}

void MainWindow::onDivClicked(){
    first = ui->display->text().toDouble();
    operation = "/";
    ui->display->clear();
}

void MainWindow::onEqualClicked(){
    double second = ui->display->text().toDouble();
    double result = 0;

    try {
        if (operation == "+"){
            result = calculator.add(first, second);
        } else if (operation == "-"){
            result = calculator.sub(first, second);
        } else if (operation == "x"){
            result = calculator.mul(first, second);
        } else if (operation == "/"){
            result = calculator.div(first, second);
        }

        ui->display->setText(QString::number(result));

    } catch (...) {
        ui->display->setText("Error");
    }
}
