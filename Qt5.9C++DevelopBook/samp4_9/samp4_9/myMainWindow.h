#ifndef MYMAINWINDOW_H
#define MYMAINWINDOW_H

#include <QMainWindow>
#include <QLabel>
#include <QString>
#include <QTableWidgetItem>
#include <QStringList>
#include <QList>
#include <QDate>
#include <QIcon>

QT_BEGIN_NAMESPACE
namespace Ui { class myMainWindow; }
QT_END_NAMESPACE

class myMainWindow : public QMainWindow
{
    Q_OBJECT
private:
    //自定义单元格type的类型，在创建单元格的item时使用
    enum CellType{
        ctName=1001,
        ctSex,
        ctBirth,
        ctNation,
        ctPartyM,
        ctScore
    };
    //各字段在表格中的列号
    enum FieldColNum{
        colName=0,
        colSex,
        colBirth,
        colNation,
        colScore,
        colPartyM
    };
    QLabel *labCellIndex;//状态栏上用于显示单元格的行号和列号
    QLabel *labCellType;//状态栏上用于显示单元格的type
    QLabel *labStudID;//状态栏上用于显示学号

    //为某一行创建items
    void createItemsARow(int rowNo,QString Name,QString Sex,
                         QDate birth,QString Nation,bool isPM,int score);

public:
    myMainWindow(QWidget *parent = nullptr);
    ~myMainWindow();

private slots:
    void on_btnSetHeader_clicked();

    void on_btnIniData_clicked();

    void on_tableInfo_currentCellChanged(int currentRow, int currentColumn,
                                         int previousRow, int previousColumn);

    void on_btnInsertRow_clicked();

    void on_btnAppendRow_clicked();

    void on_btnDelCurRow_clicked();


    void on_chkBoxHeaderH_clicked(bool checked);

    void on_chkBoxHeaderV_clicked(bool checked);

    void on_chkBoxRowColor_clicked(bool checked);

    void on_rBtnSelectItem_clicked();

    void on_rBtnSelectRow_clicked();

    void on_btnReadToEdit_clicked();

private:
    Ui::myMainWindow *ui;
};
#endif // MYMAINWINDOW_H
