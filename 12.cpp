#include <iostream>
using namespace std;

int main()
{
    int arr[10];
    int max = 0;
    for (int i = 0; i < 10; i++)
    {
        cin >> arr[i];
        if ((arr[i] % 3 == 0) && (arr[i] > max))
        {
            max = arr[i];
        }
    }
    cout << max;

}

