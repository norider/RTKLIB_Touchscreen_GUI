#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTimer>
#include <QVector>
#include "MainthreadStr2str.h"
#include <QtGui>

#include "mydialog.h"                                                    //added by ENSG student SAIF AATI


namespace Ui {
class MainWindow;
}



class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();


public slots:
    void AfficheHeureSyst(int);
    void OuvreOptions();
    void OuvreRover();
    void OuvreAfficheSolutiosStr2str();
    void OuvreHelp();
    void Shutdown();

    void on_RTK_BASE_position_clicked();                                //added by ENSG student SAIF AATI

private:
    Ui::MainWindow *ui;

    MyDialog *mDialog;// Create a pointer to a MAINWINDOW object       //added by ENSG student SAIF AATI



};



#endif // MAINWINDOW_H
