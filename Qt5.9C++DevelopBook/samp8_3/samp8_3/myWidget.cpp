#include "myWidget.h"
#include "ui_myWidget.h"

myWidget::myWidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::myWidget)
{
    ui->setupUi(this);
}

myWidget::~myWidget()
{
    delete ui;
}

void myWidget::paintEvent(QPaintEvent *event)
{
    Q_UNUSED(event);
    QPainter painter(this);
    int w=this->width();
    int h=this->height();
    int side=qMin(w,h);//获得w,h中的最小值
    QRect rect((w-side)/2,(h-side)/2,side,side);//viewport矩形区

    painter.setViewport(rect);//ViewPort的矩形区域
    painter.setWindow(-100,-100,200,200);//设置窗口大小，逻辑坐标

    painter.setRenderHint(QPainter::Antialiasing);
    //设置画笔
    QPen pen;
    pen.setWidth(1);
    pen.setColor(Qt::red);
    pen.setStyle(Qt::SolidLine);
    painter.setPen(pen);
    //线性渐变
    QLinearGradient linearGrad(0,0,100,0);//从左到右
    linearGrad.setColorAt(0,Qt::yellow);//起点颜色
    linearGrad.setColorAt(1,Qt::green);//终点颜色
    linearGrad.setSpread(QGradient::PadSpread);//展布模式
    painter.setBrush(linearGrad);
    //设置复合模式
    painter.setCompositionMode(QPainter::RasterOp_NotSourceXorDestination);

    //开始画图
    for(int i=0;i<36;i++){
        painter.drawEllipse(QPoint(50,0),50,50);//绘制椭圆
        painter.rotate(10);
    }
}
