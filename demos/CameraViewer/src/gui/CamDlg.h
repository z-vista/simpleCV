﻿#ifndef CAMDLG_H
#define CAMDLG_H

#include <QDialog>
#include <QTimer>

class QCvCamView;

namespace Ui {
class CamDlg;
}

class CamDlg : public QDialog
{
    Q_OBJECT

public:
    explicit CamDlg(QWidget *parent = 0);
    ~CamDlg();

private slots:
    void onBtnOpenClicked(bool clicked);
    void onCamOpenError();
    void onEmptyFrameError();
    void onStatusTimer();
    void onFpsChanged(QString fpsStr);
    void onExtractEdge(bool clicked);
    void onHisteq(bool clicked);

private:
    Ui::CamDlg *ui;
    QCvCamView* m_camView;
    QTimer* m_statusTimer;
};

#endif // CAMDLG_H
