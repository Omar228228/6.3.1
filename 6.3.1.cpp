#include <iostream>
#include <iomanip>
#include <time.h>

using namespace std;

void CreateArray(int* a, const int n, int Low, int High) {
    for (int i = 0; i < n; i++) 
    {
        a[i] = Low + rand() % (High - Low + 1);
    }
}

template<typename T>
void CreateArray(T* a, const int n, int Low, int High) {
    for (int i = 0; i < n; i++) 
    {
        a[i] = (T)Low + rand() % (High - Low + 1);
    }
}

void PrintArray(int* a, const int n) {
    for (int i = 0; i < n; i++) 
    {
        cout << setw(4) << a[i];
    }
    cout << endl;
}

template <typename T>
void PrintArray(T* a, const int n) {
    for (int i = 0; i < n; i++) 
    {
        cout << setw(4) << a[i];
    }
    cout << endl;
}

int Min(int* a, const int n) {
    int min = a[0];
    for (int i = 0; i < n; i++) 
    {
        if (a[i] < min)
            min = a[i];
    }
    return min;
}

template <typename T>
int Min(T* a, const int n) {
    int min = a[0];
    for (int i = 0; i < n; i++) 
    {
        if (a[i] < min)
            min = a[i];
    }
    return min;
}

int main()
{
    srand((unsigned)time(NULL));

    int n;

    cout << "n = "; cin >> n;

    int* a = new int[n];

    int Low;

    cout << "Low = "; cin >> Low;

    int High;

    cout << "High = "; cin >> High;

    CreateArray(a, n, Low, High);

    PrintArray(a, n);
    cout << " min = " << Min(a, n) << endl;

    return 0;
}