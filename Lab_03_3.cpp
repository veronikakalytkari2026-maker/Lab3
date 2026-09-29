// Lab_03_3.cpp
// Калитка Вероніка
// Лабораторна робота № 3.3
// Розгалуження, задане графіком функції.
// Варіант 10

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double x; // вхідний аргумент
    double R; // вхідний параметр
    double y; // результат обчислення функції

    cout << "R = ";
    cin >> R;

    cout << "x = ";
    cin >> x;

    // розгалуження в повній формі
    if (x <= -8 - R)
        y = R;
    else
        if (x <= -8 + R)
            y = R - sqrt(R * R - (x + 8) * (x + 8));
        else
            if (x <= -4)
                y = R;
            else
                if (x <= 2)
                    y = R - (R + 1) * (x + 4) / 6;
                else
                    y = x - 3;

    cout << endl;
    cout << "y = " << y << endl;

    cin.get();
    return 0;
}