#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;

void Create(int* a, const int size, const int Low, const int High)
{
    srand(time(0));
    for (int i = 0; i < size; i++)
    {
        a[i] = Low + rand() % (High - Low + 1);
    }
}

void Print(int* a, const int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << setw(4) << a[i];
    }
    cout << endl;
}

int Count(int* a, const int size)
{
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        if (a[i] % 2 != 0)
            count++;
    }
    return count;
}

void Modify(int* a, const int size)
{
    for (int i = 0; i < size; i++)
    {
        if (a[i] % 2 != 0)
            a[i] = 0;
    }
}

int Sum(int* a, const int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += a[i];
    }
    return sum;
}

int main()
{
    const int size = 15;
    int a[size];

    int Low = 1;
    int High = 100;

    Create(a, size, Low, High);
    cout << " array:  " << endl;// масив
    Print(a, size);

    cout << "Odd Elements " << Count(a, size) << endl;//непарні елементи

    Modify(a, size);
    cout << "Modified array: " << endl;//Модифікований масив
    Print(a, size);

    cout << "The sum of all elements: " << Sum(a, size) << endl;//Сума всіх елементів:

    return 0;
}

