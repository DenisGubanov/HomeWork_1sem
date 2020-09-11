#include <iostream>
#include <fstream>
#include <iomanip>
#include <cmath>


using namespace std;
// Домашняя работа №4

void lesson1(); 
void lesson2();
void lesson3(); 
int sign(double number);
#pragma region Площади. Задача 3.
double rectangle(double  a, double b);
double triangle(double a, double b, double c); 
double triangle(double h, double a); 
double circle(double r);
#pragma endregion 
void lesson4();
void lesson5();
void lesson6(); 
void lesson7();
void lesson8();
void lesson9();
void exit() { string enter; cin >> enter;  system("cls"); }

int main()
{
    system("chcp 1251"); 
    setlocale(LC_ALL, "Russian");
   
    lesson5();
    lesson6();
    lesson7();
    lesson8();
    lesson9();    
    
}

void lesson1()
{
    cout << "Домашняя работа №4. Задача №1. Файл." << endl;
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
    cout << "Сумма цифр: " << sum << endl;
    ifile.close();
    exit();
}
void lesson2()
{
    cout << "Домашняя работа №4. Задача №2. Знак числа." << endl;
    cout << "Введите число, знак которого будет вычислен: ";
    double a;
    cin >> a;
    cout << "Знак числа " << a << " равен " << sign(a) << endl;
    exit();
}  
void lesson3()
{
    double a, b, c;
    cout << "Домашняя работа №4. Задача №3. Геометрические фигуры." << endl;
    cout << "Площадь прямоугольник: " << endl;
    cout << "a = "; cin >> a;
    cout << "b = "; cin >> b;
    cout << "Ответ : " << rectangle(a, b) << endl;
    cout << "Площадь треугольник через его стороны: " << endl;
    cout << "a = "; cin >> a;
    cout << "b = "; cin >> b;
    cout << "с = "; cin >> c;
    cout << "Ответ : " << triangle(a, b, c) << endl;
    cout << "Площадь прямоугольник через высоту: " << endl;
    cout << "a = "; cin >> a;
    cout << "h = "; cin >> c;
    cout << "Ответ : " << triangle(a, c) << endl;
    cout << "Площадь круга: " << endl;
    cout << "r = "; cin >> a;
    cout << "Ответ : " << circle(a) << endl;
    exit();
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
    exit();
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
void lesson5()
{
    system("CppCLR_WinformsProjekt1.exe");
    exit();
} 
void lesson6()
{
    system("MIREA_4_temp.exe");
    exit();
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
    exit();
}
void lesson8()
{
    cout << "Домашняя работа №4. Задача №8. Умножение  матриц." << endl;
    int A[3][4] = { {5,2,0,10},{3,5,2,5},{20,0,0,0} };
    double B[4][2] = { {1.20f, 0.50f},{2.80f, 0.40f},{5.00f, 1.00f},{2.00f, 1.50f} };
    double C[3][2] = { {0,0}, {0,0}, {0,0} };
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            C[i % 3][i / 3] += (A[i % 3][j] * B[j][i / 3]);
        }
    }
    for (int i = 0; i < 3; i++)
    {
        cout << "Продавец №" << i + 1 << " Доход: " << C[i][0] << " Налоги: " << C[i][1] << " Прибыль: " << C[i][0] - C[i][1] << endl;
    }
    cout << "1) Больше: 2, Меньше: 1" << endl;
    cout << "2) Больше: 1, Меньше: 3" << endl;
    cout << "3) " << C[0][0] - C[0][1] + C[1][0] - C[1][1] + C[2][0] - C[2][1] << endl;
    cout << "4) " << C[0][1] + C[1][1] + C[2][1] << endl;
    cout << "5) " << C[0][0] + C[1][0] + C[2][0] << endl;
    cout << "----------------" << endl;
    exit();
} 
void lesson9()
{
    cout << "Домашняя работа №4. Задача №9. Системы  счисления." << endl;
    string old_str;
    int Nold, Nnew;
    cout << "Старое основание: ";
    cin >> Nold;
    cout << "Старое число: ";
    cin >> old_str;
    cout << "Новое основание: ";
    cin >> Nnew;
    int temp, sum;
    sum = 0;
    temp = 0;
    for (int i = 0; i < old_str.length(); i++)
    {
        switch (old_str[i])
        {
        case '0': temp = 0; break;
        case '1': temp = 1; break;
        case '2': temp = 2; break;
        case '3': temp = 3; break;
        case '4': temp = 4; break;
        case '5': temp = 5; break;
        case '6': temp = 6; break;
        case '7': temp = 7; break;
        case '8': temp = 8; break;
        case '9': temp = 9; break;
        case 'A': temp = 10; break;
        case 'B': temp = 11; break;
        case 'C': temp = 12; break;
        case 'D': temp = 13; break;
        case 'E': temp = 14; break;
        case 'F': temp = 15; break;
        }
        sum += temp * pow(Nold, old_str.length() - i - 1);
    }
    int arr[100000];
    int t = 0;
    while (sum != 0)
    {

        temp = sum % Nnew;
        sum = sum / Nnew;
        arr[t] = temp;
        t++;
    }
    cout << "Ответ: ";
    for (int i = t - 1; i >= 0; i--)
    {
        cout << arr[i];
    }
    cout << endl;
    exit();
}