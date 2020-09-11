
#include <iostream>
using namespace std;

int fact(int a, int t, int stop)
{
    if (t < stop)
    {
        a *= (t + 1);
        t++;
        fact(a, t, stop);
    }
    else {
        return a;
    }
}


int main()
{
    int n;
    cin >> n;
    cout << fact(1, 1, n);
    return 0;
}

