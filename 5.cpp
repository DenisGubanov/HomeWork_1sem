#include <iostream>
using namespace std;
int main()
{
    double X, Y;
    cin >> X >> Y;
    if ((Y > (X * X - 2)) && ((Y < (-1) * X) || (Y < X)))
    {
        cout << "YES";
    }
}
