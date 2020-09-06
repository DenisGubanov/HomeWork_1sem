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
int lesson6(); // Задача 6.
void lesson7(); // Задача 7.
void lesson8();
void lesson9();

int main()
{
    
    system("chcp 1251"); // Смена кодировки.
    setlocale(LC_ALL, "Russian");
    /*
    lesson1();
    cout << "Домашняя работа №4. Задача №2. Знак числа." << endl;
    cout << sign(-22.9) << endl;
    cout << "----------------" << endl;
    cout << "Домашняя работа №4. Задача №3. Геометрические фигуры." << endl;
    cout << rectangle(1, 2) << " " << triangle(1, 2, 3) << " " << triangle(3, 4) << " " << circle(5) << endl;
    cout << "----------------" << endl;
    lesson8();
    */

    // int l7 = lesson6();
    lesson9();
   

    
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
    cout << "Сумма цифр: " << sum << endl;
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


#pragma region Задача 6. Автоматный распознаватель.

bool isCorrectLetter(const char& letter)
{ //Проверка символов.
    const int size = 7;
    char mySymbols[size] = { 'I', 'V', 'X', 'L', 'C', 'D', 'M' };
    for (int i = 0; i < size; ++i) {
        if (letter == mySymbols[i]) {
            return true;
        }
    }
    return false;
}

bool isCorrectSequence(const char& previous, const char& next, int& recurrence)
{ // Проверка последовательности.
    if (next == previous && (previous == 'L' || previous == 'D' || previous == 'V')) {
        return false;
    }
    if (recurrence == 3 && (next == 'X' || next == 'C' || next == 'M' || next == 'I')) {
        return false;
    }
    if ((next == 'X' && previous == 'V') || (next == 'C' && previous == 'L') || (next == 'M' && previous == 'D')) {
        return false;
    }

    return true;
}

int getArabNumber(const char& rimNumber)
{ // Конвертация.
    switch (rimNumber) {
    case 'I':
        return 1;
    case 'V':
        return 5;
    case 'X':
        return 10;
    case 'L':
        return 50;
    case 'C':
        return 100;
    case 'D':
        return 500;
    case 'M':
        return 1000;
    }
    return 0;
}

int calculation(const char array[], const int& count)
{ // Подсчет.
    int res = 0;
    int prev = 0, next;
    for (int i = count; i >= 0; --i) {
        next = getArabNumber(array[i]);
        if (prev > next) {
            res = (res - prev) + (prev - next);
        }
        else {
            res += next;
        }
        prev = next;

    }
    return res;
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
    for (int i = t-1; i >= 0; i--)
    {
        cout << arr[i];
    }
}

int lesson6()
{ // Тело Задачи 6.
    cout << "Домашняя работа №4. Задача №6. Автоматный распознаватель." << endl;
    const int size = 256;
    char s[size], next, previous;
    int i, recurrence = 0;
    bool isCorrect = true;

    cout << "Введите Римское число: ";
    for (i = 0; (next = cin.get()) != '\n'; i++) {
        if (i == 0) {
            s[i] = next;
            previous = next;
        }
        else
        {
            if (previous == next) recurrence++;
            else recurrence = 0;
            if (isCorrectLetter(next) && isCorrectSequence(previous, next, recurrence))
            {
                s[i] = next;
                previous = next;
            }
            else
            {
                isCorrect = false;
                break;
            }
        }
    }
    if (!isCorrect || (s[i - 3] == 'I' && s[i - 2] != 'I')) {
        cout << "Некорректное число.";
    }
    else {
        cout << "Результат :: " << calculation(s, i - 1);
    }
    cout << "----------------" << endl;
    return 0;
}
#pragma endregion
