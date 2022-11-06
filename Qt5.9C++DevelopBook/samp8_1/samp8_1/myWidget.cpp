#include "myWidget.h"
#include "ui_myWidget.h"

myWidget::myWidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::myWidget)
{
    ui->setupUi(this);
    this->setPalette(QPalette(Qt::white));
    this->setAutoFillBackground(true);
}

myWidget::~myWidget()
{
    delete ui;
}

void myWidget::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);//创建Qpainter对象
    painter.setRenderHint(QPainter::Antialiasing);
    painter.setRenderHint(QPainter::TextAntialiasing);
    int w=this->width();//绘图区宽度
    int h=this->height();//绘图区高度
    QRect rect(w/4,h/4,w/2,h/2);//中间区域矩形框

    //设置画笔
    QPen pen;
    pen.setWidth(3);//线宽
    pen.setColor(Qt::red);//线颜色
    pen.setStyle(Qt::SolidLine);//线的样式，虚线，实线等
    pen.setCapStyle(Qt::FlatCap);//线的端点样式
    pen.setJoinStyle(Qt::BevelJoin);//线的连接点样式
    painter.setPen(pen);

    //设置画刷
    QBrush brush;
    brush.setColor(Qt::yellow);//画刷颜色
    brush.setStyle(Qt::SolidPattern);//画刷填充样式
    painter.setBrush(brush);

    //绘图
    painter.drawRect(rect);
}
