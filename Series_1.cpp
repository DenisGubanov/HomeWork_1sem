#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    double y = 0;
    double value = 0;
    for (int i = 0; i < n; i++) {
        value += sin(i + 1);
        y += (i+1 / value);
    }
    cout << y << endl;
    y = 0;
    double point = 1;
    for (int i = 0; i < n; i++) {
        value = 0;
        for (int j = 0; j < i + 1; j++) {
            value += point;
            point++;
        }
        double factorial = 1;
        for (int j = 1; j < n - i + 1; j++) { factorial *= j; }
        y += factorial / sqrt(value);
    }
    cout << y << endl;
}
