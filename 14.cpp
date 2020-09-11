#include <iostream>
using namespace std;

int main()
{
    string str;
    cin >> str;
    string fin = "";
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] != '*')
        {
            fin += str[i];
        }
    }
    cout << fin;
}

