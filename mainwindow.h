#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "client.h"
#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_bt_ajouter_clicked();

    void on_bt_supprimer_clicked();

    void on_bt_id_modif_clicked();

private:
    Ui::MainWindow *ui;
    Client c;
};
#endif // MAINWINDOW_H
