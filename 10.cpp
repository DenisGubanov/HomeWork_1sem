#include <iostream>
using namespace std;

bool track(int X, int temp)
{
    if ((temp + 9 == X) || (temp + 8 == X)) return true;
    temp = track(X, temp + 9);
    temp = track(X, temp + 8);
    if (temp > 400)
    {
        return false;
    }
}

int main()
{
    int X;
    cin >> X;
    int y = 1;
    bool a = track(X, y);
    cout << a;
    return 0;
}

