#include <QCoreApplication>

#include <QDebug>
#include <QScopedPointer>

int *test()
{
    //int* i = new int(22);
    //qDebug() << *i;
    QScopedPointer<int> i(new int(23));
    qDebug() << *i;

    return i.take();
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    //int* z = test();
    //qDebug() << *z;

    QScopedPointer<int> z(test());
    qDebug() << *z;


    return a.exec();
}
