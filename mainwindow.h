#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "client.h"
#include <QMainWindow>
#include "fournisseurs.h"


////////////
#include <QDesktopServices>
#include <QUrl>
#include <QVector>
#include<QMainWindow>
///
#include "arduino.h"

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

    void on_bt_chercher_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_pdf_clicked();

    //statisstiques
    void on_pushButton_clicked();

    void makePlot();
    void update_label();
    QVector<double> statistiques();
    ////////

    void on_pushButton_Ajouteri_clicked();

    void on_pushButton_Supprimeri_clicked();

    void on_pushButton_Modifieri_clicked();



    void on_pushButtoni_clicked();

    void on_pushButton_Actualiseri_clicked();

    void on_pushButton_2i_clicked();

    void on_pushButton_chercheri_clicked();

    void on_pushButton_3i_clicked();

    void on_pushButton_4i_clicked();


    void on_pb_imagei_clicked();

    void on_pushButton_6_sombrei_clicked();

    void on_pushButton_6_blanci_clicked();

    void on_pushButton_11i_clicked();

    void on_pushButton_12i_clicked();


    void on_pushButton_cliets_clicked();

    void on_pushButton_four_clicked();

    void on_pushButton_REtourr_clicked();

private:
    Ui::MainWindow *ui;
    Client c;
    Fournisseurs FRN;
    arduino A;
    QByteArray data;
};
#endif // MAINWINDOW_H
