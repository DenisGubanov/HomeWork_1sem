//Educational Codeforces Round 95 (рейтинговый для Див. 2)
#include <iostream>
#include <time.h>
using namespace std;


int Operation(int* arr, int length)
{
    int start = 0;
    int k = 0, p = 0;
    if ((arr[0] == 0) && (arr[1] == 0))
    {
        start += 2;
    }
    else if ((arr[0] == 0) && (arr[1] == 1))
    {
        start++;
    }
    else if ((arr[0] == 1) && (arr[1] == 0))
    {
        k++;
        start += 2;
    }
    else if ((arr[0] == 1) && (arr[1] == 1))
    {
        k++;
        start++;
    }
    for (int i = start; i < length; i++)
    {
        if (arr[i] == 1)
        {
            p++;
        }
    }
    k += (p / 3);
    return k;
}

int main()
{
    int t,n;
    cin >> t;
    cin >> n;
    int* arr = new int[n];
    for (int i = 0; i < t; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[j];
        }
        cout << Operation(arr, n);
    }
}
