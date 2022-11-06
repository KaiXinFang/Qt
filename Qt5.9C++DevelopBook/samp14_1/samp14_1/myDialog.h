#ifndef MYDIALOG_H
#define MYDIALOG_H

#include <QDialog>
#include <QString>
#include <QHostInfo>
#include <QList>
#include <QAbstractSocket>
#include <QNetworkInterface>

QT_BEGIN_NAMESPACE
namespace Ui { class myDialog; }
QT_END_NAMESPACE

class myDialog : public QDialog
{
    Q_OBJECT

public:
    myDialog(QWidget *parent = nullptr);
    ~myDialog();
    QString protocolName(QAbstractSocket::NetworkLayerProtocol protocol);

private slots:
    void on_btnGetHostInfo_clicked();

    void on_btnLookUp_clicked();

    void lookedUpHostInfo(const QHostInfo &host);

    void on_btnClearText_clicked();

    void on_btnALLInterface_clicked();

    void on_btnDetail_clicked();

private:
    Ui::myDialog *ui;
};
#endif // MYDIALOG_H
