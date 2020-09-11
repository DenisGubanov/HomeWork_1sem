#include <iostream>
using namespace std;
int main()
{
    int n = 1, i = 0;
    while (n != 0)
    {
        cin >> n;
        if ((n % 19 == 0) && (n != 0))
        {
            i++;
        }
    }
    cout << i;
}
