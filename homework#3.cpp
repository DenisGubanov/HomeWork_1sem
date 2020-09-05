#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

// Домашняя работа №3 

void lesson1(); // Задача "Заем".
void lesson2(); // Задача "Ссуда".
void lesson3(); // Задача "Копирование файла".
void lesson4(); // Задача "Фильтр".
void lesson5(); // Задача "Сортировка букв".

int main()
{
	lesson1();
	lesson2();
	lesson3();
	lesson4();
	lesson5();
}


void lesson1() 
{
	system("chcp 1251"); // Смена кодировки.
	cout << "Домашняя работа №3. Задача №1. Заём." << endl;
	double m, s; int n; double p;
	cout << "Введите сумму заёма: "; cin >> s;
	cout << "Введите процентную ставку: "; cin >> p;
	cout << "Введите количество лет: "; cin >> n;
	double r = (p / 100);
	cout << "Месячный платеж: " << (s * r * pow(1 + r, n)) / (12 * (pow(1 + r, n) - 1)) << endl;
	cout << "----------------" << endl;
}

void lesson2() 
{
	system("chcp 1251"); // Смена кодировки.
	cout << "Домашняя работа №3. Задача №2. Ссуда." << endl;
	double m, s, r;	int n; double p;
	cout << "Введите сумму заёма: "; cin >> s;
	cout << "Введите месячный платеж: "; cin >> m;
	cout << "Введите количество лет: "; cin >> n;
	for (p = 0; p <= 100; p += 0.0001)
	{
		r = p / 100;
		if (abs((m - ((s * r * pow(1 + r, n)) / (12 * (pow(1 + r, n) - 1))))) < 0.0001)
		{
			cout << "Под p% = " << p << endl;
			break;
		}
	}
	cout << "----------------" << endl;
}

void lesson3()
{
	system("chcp 1251"); // Смена кодировки.
	cout << "Домашняя работа №3. Задача №3. Копирование файла." << endl;
	setlocale(LC_ALL, "Russian");
	string path = "C:\\Main Data\\VS2019\\MIREA_3\\file.txt";
	ofstream ofile(path, ios::out);
	cout << "Файл создан." << endl << "Введите текст, который вы хотите записать в файл: ";
	string text;
	cin >> text;
	ofile << text;
	ofile.close();
	ifstream ifile(path, ios::out);
	ifile >> text;
	cout << "В файле следующий текст: " << text << endl;
	ifile.close();
	cout << "----------------" << endl;
}

void lesson4()
{
	system("chcp 1251"); // Смена кодировки.
	cout << "Домашняя работа №3. Задача №4. Фильтр." << endl;
	setlocale(LC_ALL, "Russian");
	string path = "C:\\Main Data\\VS2019\\MIREA_3\\file.txt";
	ofstream ofile(path, ios::out);
	cout << "Файл создан." << endl << "Введите текст, который вы хотите записать в файл: ";
	string text;
	cin >> text;
	ofile << text;
	ofile.close();
	ifstream ifile(path, ios::out);
	ifile >> text;
	string number;
	for (int i = 0; i < text.length(); i++)
	{
		if (((int)text[i] >= 48) && ((int)text[i] <= 57))
		{
			number += text[i];
		}
	}
	cout << "В файле следующие цифры: " << number << endl;
	ifile.close();
	cout << "----------------" << endl;
}

void lesson5()
{
	system("chcp 1251"); // Смена кодировки.
	cout << "Домашняя работа №3. Задача №5. Сортировка букв." << endl;
	setlocale(LC_ALL, "Russian");
	string alfa;
	int numarray = alfa.length();
	int* sort = new int[numarray];
	cout << "Введите строку на Русском*: "; cin >> alfa;
	for (int i = 0; i < alfa.length(); i++)
	{
		sort[i] = (int)alfa[i];
	}
	cout << "После сортировки: ";
	for (int i = 0; i < alfa.length(); i++)
	{
		for (int j = i+1; j < alfa.length(); j++)
		{
			if (sort[j] <= sort[i]) { int temp = sort[i]; sort[i] = sort[j]; sort[j] = temp; }
		}
		cout << (char)sort[i];
	}
	cout << "----------------" << endl;
}
