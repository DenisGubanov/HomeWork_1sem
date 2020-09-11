#include <iostream>
using namespace std;
int main()
{
    int n = 1;
    while (n != 0)
    {
        cin >> n;
        if (n % 3 == 0)
        {
            cout << "Кратное";
        }
    }
}
