#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int* arr = new int[n+1];
    for (int i = 1; i <= n; i++)
        arr[i] = i;
    for (int i = 2; i <= n; i++)
    {
        int simple = arr[i];
        if (simple != 0)
        {
            for (int j = simple+1; j <= n; j++)
            {
                if ((arr[j] % simple) == 0)
                {
                    arr[j] = 0;
                }
            }
            cout << simple << " ";
        }
    }
}
