#include <QtWidgets/QApplication>
#include <QtWidgets/QgraphicsScene.h>
#include <QtWidgets/QgraphicsRectItem>
#include <QtWidgets/qgraphicsview.h>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QGraphicsScene scene;
    QGraphicsRectItem rect(0,0,200,100);
    scene.addItem(&rect);

    QGraphicsView view(&scene);
    // view.show();
    view.showFullScreen();
    return a.exec();
}
