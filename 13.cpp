#include <iostream>
using namespace std;

int main()
{
    int arr[100][100];
    int sum = 0;
    int N, M;
    cin >> N >> M;
    for (int i = 0; i < 100; i++)
    {
        for (int j = 0; j < 100; j++)
        {
            arr[i][j] = 0;
        }
    }
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < 100; i++)
    {
        for (int j = 0; j < 100; j++)
        {
            sum += arr[i][j];
        }
    }
    cout << sum;
}

