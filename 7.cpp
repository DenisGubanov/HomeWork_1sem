#include <iostream>
using namespace std;
int main()
{
    int l = 5,i = 1;
    int op;
    cin >> op;
    while (l < op)
    {
        l += 2;
        i++;
    }
    cout << i;
}
