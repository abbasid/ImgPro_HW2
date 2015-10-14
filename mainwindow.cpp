#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionOpen_file_triggered()
{
    QString fileName;
    fileName = QFileDialog::getOpenFileName();
    original_Image = cv::imread(fileName.toStdString());


}

void MainWindow::on_grayscale_clicked()
{
    gray_Image.create(original_Image.rows, original_Image.cols, CV_8UC1);
    for(int i = 0; i < this->original_Image.rows; i++)
    {
        for(int j = 0; j < this->original_Image.cols; j++)
        {
            gray_Image.at<uchar>(i, j) = (original_Image.at<cv::Vec3b>(i, j)[0] + original_Image.at<cv::Vec3b>(i, j)[1] + original_Image.at<cv::Vec3b>(i, j)[2])/3;
        }
    }
    cv::imshow("show image", gray_Image);
}
