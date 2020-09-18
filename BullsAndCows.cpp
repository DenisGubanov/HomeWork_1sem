#include <iostream>
#include <time.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    srand(time(NULL));
    int a1 = rand() % 10;
    int a2 = rand() % 10;
    while (a1 == a2)
    {
        a2 = rand() % 10;
    }
    int a3 = rand() % 10;
    while ((a1 == a3) || (a2 == a3))
    {
        a3 = rand() % 10;
    }
    int a4 = rand() % 10;
    while ((a1 == a4) || (a2 == a4) || (a3 == a4))
    {
        a4 = rand() % 10;
    }
    int arr[4];
    arr[0] = a1;
    arr[1] = a2;
    arr[2] = a3;
    arr[3] = a4;
    cout << a1 << " " << a2 << " " << a3 << " " << a4 << endl;
    int truepoint = 0;
    int truenumber = 0;
    int b1, b2, b3, b4;
    while (truepoint != 4)
    {
        truepoint = 0;
        truenumber = 0;
        cin >> b1 >> b2 >> b3 >> b4;
        int barr[4];
        barr[0] = b1;
        barr[1] = b2;
        barr[2] = b3;
        barr[3] = b4;
        for (int i = 0; i < 4; i++)
        {
            if (arr[i] == barr[i])
            {
                truepoint++;
            }
            for (int j = 0; j < 4; j++)
            {
                if ((barr[i] == arr[j]) && (barr[i] != arr[i]))
                {
                    truenumber++;
                }
            }
        }
        cout << "Bulls: " << truepoint << endl;
        cout << "Cows: " << truenumber << endl;
    }
}
