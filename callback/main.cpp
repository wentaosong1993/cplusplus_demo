#include <QCoreApplication>
#include <QDebug>

int Callback_1(int x) // Callback Function 1
{
    qInfo() << QString("Hello, this is Callback_1: x = %1").arg(x);
    return 0;
}

int Callback_2(int x) // Callback Function 2
{
    qInfo() << QString("Hello, this is Callback_2: x = %1").arg(x);
    return 0;
}

int Callback_3(int x) // Callback Function 3
{
    qInfo() << QString("Hello, this is Callback_3: x = %1").arg(x);
    return 0;
}

int Handle(int y, int (*Callback)(int))
{
    printf("Entering Handle Function. ");
    Callback(y);
    printf("Leaving Handle Function. ");
}

int main(int argc, char *argv[])
{
    QCoreApplication app(argc, argv);

    int a = 2;
    int b = 4;
    int c = 6;

    qInfo() << "Entering Main Function. ";
    Handle(a, Callback_1);
    Handle(b, Callback_2);
    Handle(c, Callback_3);
    qInfo() << "Leaving Main Function. ";

    return app.exec();
}
