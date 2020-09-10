#include <iostream>
using namespace std;

void PrintMass(double arr[], int count)
{
    
    for (int i = 0; i < count; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

bool ProveSort(double arr[], int count)
{
    for (int i = 0; i < count - 2; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            return false;
        }
    }
    return true;
}

int main()
{
    system("chcp 1251");
    setlocale(LC_ALL, "Russian");
    int count;
    cout << "Сортировка пузырьком: " << endl;
    cout << "Введите кол-во чисел в массиве: "; cin >> count;
    cout << "Заполните массив числами согласно их номеру: " << endl;
    double *arr = new double[count];
    for (int i = 0; i < count; i++)
    {
        cout << '#' << i << " : "; cin >> arr[i];
    }
    cout << "Начальный массив" << endl; PrintMass(arr, count);

    while(!ProveSort(arr, count))
    {
        cout << "Новая итерация" << endl;
        for (int i = 0; i < count - 1; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                double temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
                PrintMass(arr, count);
            }
            
        }
    }
    cout << "Массив отсортирован..." << endl;
    cout << "Финальный вид : ";
    PrintMass(arr, count);
    return 0;
}
