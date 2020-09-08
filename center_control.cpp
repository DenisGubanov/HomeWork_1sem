#include <iostream>
#include <windows.h>

using namespace std;

void menu();
void process();

int main()
{
    menu();
    process();
}

void menu()
{
    setlocale(LC_ALL, "Russian");
    cout << "Запустите код задания согласно цифрам в ( .. ) : " << endl;
    cout << "Домашняя работа #1 (1): " << endl;
    cout << "Домашняя работа #2 (2): " << endl;
    cout << "Домашняя работа #3 (3): " << endl;
    cout << "Домашняя работа #4 (4): " << endl;
}

void process()
{
    int enter;
    cin >> enter;
    
    STARTUPINFO si;
    PROCESS_INFORMATION pi;
    GetStartupInfo(&si);
    switch (enter)
    {
    case 1: system("MIREA_1.exe"); break; 
    case 2: system("MIREA_2.exe"); break;
    case 3: system("MIREA_3.exe"); break;
    case 4: system("MIREA_4.exe"); break;
    }
    char exit;
    cout << endl << endl;
    cout << "Вернуться в меню (Y/N) : ";
    cin >> exit;
    if (exit == 'Y')
    {
        system("cls");
        system("MIREA_5.exe");
    }

}
