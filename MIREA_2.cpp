#include <iostream>
#include <cmath>
using namespace std;

void exit() { string enter; cin >> enter;  system("cls"); }
void mirea6()
{
	cout << "Домашняя работа №2. Задача №1. Конус." << endl;
	double a, x, w;
	a = 10;
	x = 1;
	if (abs(x) < 1)
	{
		w = a * log(abs(x));
	}
	else
	{
		w = sqrt(a - (x * x));
	}
	cout << w << endl;
	exit();
}
void mirea7()
{
	cout << "Домашняя работа №2. Задача №2. Разветвление." << endl;
	double x, y, b;
	x = 1;
	y = 1;
	b = 2;

	if (((b - y) > 0) && ((b - x) >= 0))
	{
		cout << log(b - y) * sqrt(b - x) << endl;
	}
	exit();
}
void mirea8()
{
	cout << "Домашняя работа №2. Задача №3. Функция." << endl;
	int N;
	cin >> N;
	if (N >= 1)
	{
		for (int i = N; i < N + 10; i++)
		{
			cout << i;
		}
	}
	else
	{
		cout << "Отрицательные" << endl;
	}

	exit();
}

void mirea9()
{
	cout << "Домашняя работа №2. Задача №4. Порядок." << endl;
	double x;
	for (double i = -4; i <= 4; i += 0.5)
	{
		if (i != 1)
		{
			x = i;
			cout << (x * x + (-2) * x + 2) / (x - 1) << endl;
		}
		else
		{
			cout << "Деление на 0" << endl;
		}
	}
	exit();
}

void mirea10()
{
	cout << "Домашняя работа №2. Задача №5. Табуляция." << endl;
	double m, s;
	int n;
	double p;
	cin >> s;
	cin >> p;
	cin >> n;
	double r = (p / 100);
	cout << (s * r * pow(1 + r, n)) / (12 * (pow(1 + r, n) - 1)) << endl;
	exit();
}

int main()
{
	system("chcp 1251");
	setlocale(LC_ALL, "Russian");
	mirea6();
	mirea7();
	mirea8();
	mirea9();
	mirea10();

}

