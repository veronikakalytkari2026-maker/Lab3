// Lab_03_4.cpp
// Калитка Вероніка
// Лабораторна робота № 3.4
// Розгалуження, задане плоскою фігурою.
// Варіант 10

#include <iostream>
using namespace std;

int main()
{
    double x; // координата x точки
    double y; // координата y точки
    double R; // радіус кола
    double a; // параметр прямокутника
    double b; // параметр прямокутника

    cout << "R = "; cin >> R;
    cout << "a = "; cin >> a;
    cout << "b = "; cin >> b;
    cout << "x = "; cin >> x;
    cout << "y = "; cin >> y;

    // розгалуження в повній формі
    if ((x >= 0 && x <= a && y >= 0 && y <= b && x*x + y*y >= R*R) ||
        (x <= 0 && x >= -a && y <= 0 && y >= -b && x*x + y*y >= R*R))
        cout << "yes" << endl;
    else
        cout << "no" << endl;

    cin.get();
    return 0;
}