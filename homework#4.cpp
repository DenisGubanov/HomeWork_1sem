#include <iostream>
#include <fstream>
#include <iomanip>
#include <cmath>
using namespace std;

// Домашняя работа №4

void lesson1(); // Задача 1.
int sign(double number); // Задача 2.
#pragma region Площади. Задача 3.
double rectangle(double  a, double b);
double triangle(double a, double b, double c); // Формула Герона.
double triangle(double h, double a); // Площадь через высоту и основание.
double circle(double r);
#pragma endregion 
void lesson4(); // Задача 4.
void lesson6();
void lesson7();

int main()
{
    system("chcp 1251"); // Смена кодировки.
    setlocale(LC_ALL, "Russian");
    /*
    lesson1();
    cout << "Домашняя работа №4. Задача №2. Знак числа." << endl;
    cout << sign(-22.9);
    cout << "----------------" << endl;
    cout << "Домашняя работа №4. Задача №3. Геометрические фигуры." << endl;
    cout << rectangle(1, 2) << " " << triangle(1, 2, 3) << " " << triangle(3, 4) << " " << circle(5) << endl;
    cout << "----------------" << endl;
    lesson4();
    */
    lesson7();
}

void lesson1()
{
    system("chcp 1251"); // Смена кодировки.
    cout << "Домашняя работа №4. Задача №1. Файл." << endl;
    setlocale(LC_ALL, "Russian");
    string path = "C:\\Main Data\\VS2019\\MIREA_4\\file.txt";
    ofstream ofile(path, ios::out);
    int arr[10];
    for (int i = 0; i < 10; i++)
    {
        cout << "#" << i+1 << " : ";
        cin >> arr[i];
        ofile << arr[i] << endl;
    }
    ofile.close();
    ifstream ifile(path, ios::out);
    int getting, sum;
    sum = 0;
    for (int i = 0; i < 10; i++)
    {
        ifile >> getting;
        sum += getting;
    }
    cout << "Сумма цифр: " << sum;
    ifile.close();
    cout << "----------------" << endl;
}

int sign(double number)
{
    if (number > 0)
    {
        return 1;
    }
    else if (number == 0)
    {
        return 0;
    }
    else
    {
        return -1;
    }
}

#pragma region Логика задания 3.
double rectangle(double a, double b)
{
    return a * b;
}
double triangle(double a, double b, double c)
{
    double p = (a + b + c) / 2;
    return sqrt(p * (p - a) * (p - b) * (p - c));
}
double triangle(double h, double a)
{
    return 0.5 * h * a;
}
double circle(double r)
{
    return 3.14159265359 * r * r;
}
#pragma endregion

void lesson4()
{
    cout << "Домашняя работа №4. Задача №4. Былая слава." << endl;
    cout << "Былую славу 1912 года" << endl << endl;
    for (int i = 0; i < 13; i++)
    {
        if (i < 7) 
        {
            for (int j = 0; j < 8; j++)
            {
                cout << "* ";
            }
            for (int j = 0; j < 30; j++)
            {
                cout << "-";
            }
        }
        else
        {
            for (int j = 0; j < 46; j++)
            {
                cout << "-";
            }
        }
        cout << endl;
        
    }
}

void lesson6()
{
    cout << "Домашняя работа №4. Задача №6. Автоматный распознователь." << endl;
    int temp;
    string rim; //1-I 5-V 10-X 50-L 100-C 500-D 1000-M
    cin >> rim;
    int old_value;
    old_value = 0;
    for (int i = rim.length(); i > 0; i--)
    {
        switch (rim[i])
        {
        case 'I': {temp = 1; break; }
        case 'V': {temp = 5; break; }
        case 'X': {temp = 10; break; }
        case 'L': {temp = 50; break; }
        case 'C': {temp = 100; break; }
        case 'D': {temp = 500; break; }
        case 'M': {temp = 1000; break; }
        }
        if (old_value == 0)
        {
            old_value = temp;
        }
        else if (temp < old_value)
        {
          //  old_value
        }
    }
    cout << old_value;
}

void formul(int s, int m, int c, int i, int iter, int stop)
{
    int s1 = (s * m + i) % c;
    cout << s1 << " ";
    if (iter <= stop)
    {
        formul(s1, m, c, i, iter + 1, stop);
    }
}

void lesson7()
{
    cout << "Домашняя работа №4. Задача №7. Гениратор случайных чисел." << endl;
    int m, c, i, s;
    cout << "Введите So: "; cin >> s;
    cout << "Введите m: "; cin >> m;
    cout << "Введите c: "; cin >> c;
    cout << "Введите i: "; cin >> i;
    formul(s, m, c, i, 1, 10);
}
