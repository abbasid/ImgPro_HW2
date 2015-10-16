#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QFileDialog>
#include <QString>
#include <opencv/cv.hpp>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_actionOpen_file_triggered();

    void on_grayscale_method_1_clicked();

    void on_grayscale_method_2_clicked();

private:
    Ui::MainWindow *ui;
    cv::Mat original_Image;
    cv::Mat gray_Image;

};

#endif // MAINWINDOW_H
