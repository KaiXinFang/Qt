#ifndef QWINTSPINDELEGATE_H
#define QWINTSPINDELEGATE_H

#include <QObject>
#include <QStyledItemDelegate>
#include <QStyleOptionViewItem>
#include <QModelIndex>
#include <QAbstractItemModel>
#include <QSpinBox>


class QWIntSpinDelegate : public QStyledItemDelegate
{
    Q_OBJECT
public:
    explicit QWIntSpinDelegate(QObject *parent = nullptr);

    //自定义代理组件必须继承以下4个函数
    QWidget *createEditor(QWidget *parent,const QStyleOptionViewItem &option,const QModelIndex &index) const Q_DECL_OVERRIDE;
    void setEditorData(QWidget *editor,const QModelIndex &index) const Q_DECL_OVERRIDE;
    void setModelData(QWidget *editor,QAbstractItemModel *model,const QModelIndex &index) const Q_DECL_OVERRIDE;
    void updateEditorGeometry(QWidget *editor,const QStyleOptionViewItem &option,const QModelIndex &index) const Q_DECL_OVERRIDE;

signals:

};

#endif // QWINTSPINDELEGATE_H
