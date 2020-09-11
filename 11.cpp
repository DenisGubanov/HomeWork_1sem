#include <iostream>
using namespace std;

int main()
{
    int arr[10];
    int sum = 0;
    for (int i = 0; i < 10; i++)
    {
        cin >> arr[i];
        if (arr[i] % 7 == 0)
        {
            sum += arr[i];
        }
    }
    cout << sum;

}

