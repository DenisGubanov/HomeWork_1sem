#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	
}

void mirea6()
{
	double a,x,w;
	a = 10;
	x = 1;
	if (abs(x)<1)
	{
		w = a*log(abs(x));
	} else
	{
		w = sqrt(a-(x*x));
	}
	cout << w;
}
void mirea7()
{
    	double x,y,b;
	x = 1;
	y = 1;
	b = 2;
	
	if (((b-y)>0) && ((b-x)>=0))
	{
		cout << log(b-y)*sqrt(b-x);
    }
	
}
void mirea8()
{
	int N;
	cin >> N;
	if (N >= 1) 
	{
		for(int i = N; i<N+10; i++)
        {
    	cout << i;
	    }
	} else
	{
		cout << "Отрицательные";
	}
	
    
}

void mirea9()
{
	setlocale(LC_ALL,"Russian");
    double x;
	for(double i = -4; i<=4; i+=0.5)
	{
		if (i!=1)
		{
			x = i;
			cout << (x*x+(-2)*x+2)/(x-1) << endl;
		} else 
		{
			cout << "Деление на 0" << endl;
		}
	}
}

void mirea10()
{
	double m,s;
	int n;
	double p;
	cin >> s;
	cin >> p;
	cin >> n;
	double r = (p/100);
	cout << (s*r*pow(1+r,n))/(12*(pow(1+r,n)-1));
}
