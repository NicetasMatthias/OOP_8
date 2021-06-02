#include "application.h"


Application::Application(int argc, char*argv[]): QCoreApplication(argc,argv)
{
    menu_text = QString::fromStdString("\n0 - exit\n")+
            "1 - Треугольник\n"+
            "2 - Окружность\n"+
            "3 - Эллипс\n"+
            "4 - Четырехугольник\n"+
            "5 - Ромб\n"+
            "6 - Квадрат\n"+
            "7 - Параллелограмм\n"+
            "8 - Прямоугольник\n"+
            "9 - Равносторонний треугольник\n"+
            "10 - Равнобедренный треугольник\n"+
                ">>";
    unknown_command_text = "не знаю такого \n";
    //p = nullptr;
}

void Application::menu()
{
    var = -1;
    while(var!=0)
    {
        std::cout << menu_text.toStdString();
        std::cin >> var;
        switch (var)
        {
        case 1:
        {
            triangle();
            break;
        }
        case 2:
        {
            circle();
            break;
        }
        case 3:
        {
            ellipse();
            break;
        }
        case 4:
        {
            quadrangle();
            break;
        }
        case 5:
        {
            rhombus();
            break;
        }
        case 6:
        {
            square();
            break;
        }
        case 7:
        {
            parallelogram();
            break;
        }
        case 8:
        {
            rectangle();
            break;
        }
        case 9:
        {
            equilateraltriangle();
            break;
        }
        case 10:
        {
            isoscelestriangle();
            break;
        }
        case 0:
            break;
        default:
            std::cout << unknown_command_text.toStdString();
            break;
        }
    }
}


void Application::ellipse()
{
    std::cout << "'Эллипс" << std::endl;
    double r1=0,r2=0;
    do
    {
    std::cout << "Один радиус = ";
    std::cin >> r1;
    }
    while(r1<=0);
    do
    {
    std::cout << "Второй радиус = ";
    std::cin >> r2;
    }
    while(r2<=0);
    Ellipse *p = new Ellipse(r1,r2);
    std::cout << "Площадь:" << p->area() << std::endl;
    std::cout << "Периметр:" << p->perimeter() << std::endl;
    delete p;
}

void Application::circle()
{
    std::cout << "'Окружность" << std::endl;
    double r=0;
    do
    {
    std::cout << "Радиус = ";
    std::cin >> r;
    }
    while(r<=0);
    Circle *p = new Circle(r);
    std::cout << "Площадь:" << p->area() << std::endl;
    std::cout << "Периметр:" << p->perimeter() << std::endl;
    delete p;
}

void Application::quadrangle()
{
    std::cout << "Четырехугольник" << std::endl;
    double a1=0,a2=0,a3=0,fi1=0,fi2=0;
    do
    {
    std::cout << "Длина 1 стороны = ";
    std::cin >> a1;
    }
    while(a1<=0);
    do
    {
    std::cout << "Длина 2 стороны = ";
    std::cin >> a2;
    }
    while(a2<=0);
    do
    {
    std::cout << "Длина 3 стороны = ";
    std::cin >> a3;
    }
    while(a3<=0);
    do
    {
    std::cout << "Угол между 1 и 2 стороной = ";
    std::cin >> fi1;
    }
    while(fi1<=0);
    do
    {
    std::cout << "Угол между 2 и 3 стороной = ";
    std::cin >> fi2;
    }
    while(fi2<=0);

    Quadrangle *p = new Quadrangle(a1,fi1,a2,fi2,a3);
    std::cout << "Площадь:" << p->area() << std::endl;
    std::cout << "Периметр:" << p->perimeter() << std::endl;
    delete p;
}

void Application::parallelogram()
{
    std::cout << "Параллелограмм" << std::endl;
    double a=0,b=0,fi=0;
    do
    {
    std::cout << "Длина 1 стороны = ";
    std::cin >> a;
    }
    while(a<=0);
    do
    {
    std::cout << "Длина 2 стороны = ";
    std::cin >> b;
    }
    while(b<=0);
    do
    {
    std::cout << "Угол между ними = ";
    std::cin >> fi;
    }
    while(fi<=0);
    Parallelogram *p = new Parallelogram(a,fi,b);
    std::cout << "Площадь:" << p->area() << std::endl;
    std::cout << "Периметр:" << p->perimeter() << std::endl;
    delete p;
}

void Application::rhombus()
{
    std::cout << "Ромб" << std::endl;
    double a=0,fi=0;
    do
    {
    std::cout << "Длина стороны = ";
    std::cin >> a;
    }
    while(a<=0);
    do
    {
    std::cout << "Угол ними = ";
    std::cin >> fi;
    }
    while(fi<=0);
    Rhombus *p = new Rhombus(a,fi);
    std::cout << "Площадь:" << p->area() << std::endl;
    std::cout << "Периметр:" << p->perimeter() << std::endl;
    delete p;
}

void Application::rectangle()
{
    std::cout << "Прямоугольник" << std::endl;
    double a=0,b=0;
    do
    {
    std::cout << "Длина 1 стороны = ";
    std::cin >> a;
    }
    while(a<=0);
    do
    {
    std::cout << "Длина 2 стороны = ";
    std::cin >> b;
    }
    while(b<=0);
    Rectangle *p = new Rectangle(a,b);
    std::cout << "Площадь:" << p->area() << std::endl;
    std::cout << "Периметр:" << p->perimeter() << std::endl;
    delete p;
}

void Application::square()
{
    std::cout << "Квадрат" << std::endl;
    double a=0;
    do
    {
    std::cout << "Длина = ";
    std::cin >> a;
    }
    while(a<=0);
    Square *p = new Square(a);
    std::cout << "Площадь:" << p->Rectangle::area() << std::endl;
    std::cout << "Периметр:" << p->Rectangle::perimeter() << std::endl;
    delete p;
}

void Application::triangle()
{
    std::cout << "Треугольник" << std::endl;
    double a=0,b=0,fi=0;
    do
    {
    std::cout << "Длина 1 стороны = ";
    std::cin >> a;
    }
    while(a<=0);
    do
    {
    std::cout << "Длина 2 стороны = ";
    std::cin >> b;
    }
    while(b<=0);
    do
    {
    std::cout << "Угол между ними = ";
    std::cin >> fi;
    }
    while(fi<=0);
    Triangle *p = new Triangle(a,fi,b);
    std::cout << "Площадь:" << p->area() << std::endl;
    std::cout << "Периметр:" << p->perimeter() << std::endl;
    delete p;
}

void Application::isoscelestriangle()
{
    std::cout << "Равнобедренный треугольник" << std::endl;
    double a=0,fi=0;
    do
    {
    std::cout << "Длина стороны (две одинаковые) = ";
    std::cin >> a;
    }
    while(a<=0);
    do
    {
    std::cout << "Угол между ними = ";
    std::cin >> fi;
    }
    while(fi<=0);
    IsoscelesTriangle *p = new IsoscelesTriangle(a,fi);
    std::cout << "Площадь:" << p->area() << std::endl;
    std::cout << "Периметр:" << p->perimeter() << std::endl;
    delete p;
}

void Application::equilateraltriangle()
{
    std::cout << "Равносторонний треугольник" << std::endl;
    double a=0;
    do
    {
    std::cout << "Длина стороны = ";
    std::cin >> a;
    }
    while(a<=0);
    EquilateralTriangle *p = new EquilateralTriangle(a);
    std::cout << "Площадь:" << p->area() << std::endl;
    std::cout << "Периметр:" << p->perimeter() << std::endl;
    delete p;
}
