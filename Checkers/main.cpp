#include "space.h"
#include "display.h"
#include "board.h"
#include "Game.h"
#include <QApplication>
#include <QGraphicsScene>
#include <QGraphicsRectItem>
#include <QGraphicsView>
#include <QGridLayout>
#include <QFrame>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    a.setApplicationDisplayName("Checkers");
    Display D;
    QGraphicsView* view = new QGraphicsView(D.getScene());
    view->show();
    return a.exec();
}
