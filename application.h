#ifndef APPLICATION_H
#define APPLICATION_H

#include <QCoreApplication>
#include <QObject>
#include <circle.h>
#include <equilateraltriangle.h>
#include <square.h>
#include <iostream>


class Application : public QCoreApplication
{
    Q_OBJECT
private:
    QString menu_text;
    QString unknown_command_text;
    int var;
    //Figure *p;

public:
    Application(int,char**);
    void menu();
    void ellipse();
    void circle();
    void quadrangle();
    void parallelogram();
    void rhombus();
    void rectangle();
    void square();
    void triangle();
    void isoscelestriangle();
    void equilateraltriangle();
};

#endif // APPLICATION_H
