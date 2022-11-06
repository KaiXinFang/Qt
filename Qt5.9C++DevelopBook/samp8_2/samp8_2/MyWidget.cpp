#include "MyWidget.h"
#include "ui_MyWidget.h"

void MyWidget::paintEvent(QPaintEvent *event)
{
    Q_UNUSED(event);
    QPainter painter(this);
    painter.setRenderHint(QPainter::Antialiasing);
    painter.setRenderHint(QPainter::TextAntialiasing);

    //生成五角星的5个顶点的坐标，假设原点在五角星中心
    qreal R=100;//半径
    const qreal Pi=3.14159;
    qreal deg=Pi*72/180;
    QPoint points[5]={
        QPoint(R,0),
        QPoint(R*cos(deg),-R*sin(deg)),
        QPoint(R*cos(2*deg),-R*sin(2*deg)),
        QPoint(R*cos(3*deg),-R*sin(3*deg)),
        QPoint(R*cos(4*deg),-R*sin(4*deg)),
    };

    //设置字体
    QFont font;
    font.setPointSize(12);
    font.setBold(true);
    painter.setFont(font);

    //设置画笔
    QPen penLine;
    penLine.setWidth(2);//线宽
    penLine.setColor(Qt::blue);//划线的颜色
    penLine.setStyle(Qt::SolidLine);//线的类型
    penLine.setCapStyle(Qt::FlatCap);//线的端点样式
    penLine.setJoinStyle(Qt::BevelJoin);//线的连接点样式
    painter.setPen(penLine);

    //设置画笔
    QBrush brush;
    brush.setColor(Qt::yellow);//画刷颜色
    brush.setStyle(Qt::SolidPattern);//画刷填充样式
    painter.setBrush(brush);

    //设计绘制五角星PainterPath,以便重复使用
    QPainterPath starPath;
    starPath.moveTo(points[0]);
    starPath.lineTo(points[2]);
    starPath.lineTo(points[4]);
    starPath.lineTo(points[1]);
    starPath.lineTo(points[3]);
    starPath.closeSubpath();//闭合路径，最后一个点与第一个点相连
    starPath.addText(points[0],font,"0");//显示端点编号
    starPath.addText(points[1],font,"1");//显示端点编号
    starPath.addText(points[2],font,"2");//显示端点编号
    starPath.addText(points[3],font,"3");//显示端点编号
    starPath.addText(points[4],font,"4");//显示端点编号

    //绘图
    painter.save();//保存坐标状态
    painter.translate(100,120);//平移
    painter.drawPath(starPath);
    painter.drawText(0,0,"S1");
    painter.restore();//恢复坐标状态

    painter.translate(300,120);//平移
    painter.scale(0.8,0.8);//缩放
    painter.rotate(90);//顺时针旋转90度
    painter.drawPath(starPath);//画星星
    painter.drawText(0,0,"S2");

    painter.resetTransform();//复位所有坐标变换
    painter.translate(500,120);//平移
    painter.rotate(-145);//逆时针旋转145度
    painter.drawPath(starPath);//画星星
    painter.drawText(0,0,"S3");
}

MyWidget::MyWidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::MyWidget)
{
    ui->setupUi(this);
    this->setPalette(QPalette(Qt::white));
    this->setAutoFillBackground(true);
    this->resize(600,300);
}

MyWidget::~MyWidget()
{
    delete ui;
}


