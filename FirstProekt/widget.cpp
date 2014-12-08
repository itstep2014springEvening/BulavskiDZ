#include "widget.h"
#include <QtWidgets>

Widget::Widget(QWidget *parent)
    : QWidget(parent),
      label(nullptr)
{
    QHBoxLayout *mainLayot = nullptr;
    mainLayot = new QHBoxLayout;
    setLayout(mainLayot);
    QVBoxLayout *VLayout = nullptr;
    VLayout = new QVBoxLayout;

    label = new QLabel(tr("widget"));

    QPushButton *exitButton = nullptr;
    QPushButton *addData = nullptr;
    exitButton = new QPushButton(tr("exit"));
    addData = new QPushButton(tr("ADD"));

    mainLayot->addSpacerItem(new QSpacerItem(1,1,QSizePolicy::MinimumExpanding, QSizePolicy::Minimum));
    mainLayot->addLayout(VLayout);
    VLayout->addSpacerItem(new QSpacerItem(1,1,QSizePolicy::Minimum, QSizePolicy::MinimumExpanding));
    VLayout->addWidget(addData);
    VLayout->addWidget(exitButton);
    VLayout->addWidget(label);

    connect(exitButton,SIGNAL(clicked()), this, SLOT(close()));
    connect(addData,SIGNAL(clicked()), this, SLOT(dur()));



}

Widget::~Widget()
{

}

void Widget::dur()
{
 label->setText(tr("WTF?!"));
}
