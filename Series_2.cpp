#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    double y = 0;
    double valueUp = 1;
    double valueDown = 1;
    for (int i = 0; i < n; i++) {
        valueUp *= (i + 1);
        valueDown += sin(2 * (i + 1));
        y *= valueUp / valueDown;
    }
    cout << y;
    y = 0;
    valueDown = 0;
    valueUp = 1;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i; j++) {
            valueUp *= (j + 1);
            valueDown += pow(-1, i) * (1 / (j + 1));
        }
        y += valueUp / valueDown;
    }
    cout << y;
}
