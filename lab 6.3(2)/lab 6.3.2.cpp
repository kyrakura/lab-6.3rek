#include <iostream>
#include <iomanip>
#include <ctime>
#include <Windows.h>
using namespace std;

const int N = 25;

void Create(int a[], const int size, const int Low, const int High, int i = 0) {
    if (i < size) {
        a[i] = Low + rand() % (High - Low + 1);
        Create(a, size, Low, High, i + 1);
    }
}

void Print(int a[], const int size, int i = 0) {
    if (i < size) {
        cout << setw(4) << a[i];
        Print(a, size, i + 1);
    }
    else {
        cout << endl;
    }
}

int SumOne(int a[], const int size, int i = 0) {
    if (i == size) {
        return 0;
    }
    if (a[i] % 2 == 0) {
        return a[i] + SumOne(a, size, i + 1);
    }
    return SumOne(a, size, i + 1);
}

template <typename T>
T SumTwo(T a[], const int size, int i = 0) {
    if (i == size) {
        return 0;
    }
    if (a[i] % 2 == 0) {
        return a[i] + SumTwo(a, size, i + 1);
    }
    return SumTwo(a, size, i + 1);
}

int main() {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    srand((unsigned)time(NULL));
    int a[N];
    int Low = -11;
    int High = 13;

    Create(a, N, Low, High);

    cout << "Початковий масив(1): ";
    Print(a, N);

    int sum = SumOne(a, N);
    cout << "Сума парних елементів(1): " << sum << endl;

    int b[N];
    int LowTwo = -11;
    int HighTwo = 13;

    Create(b, N, LowTwo, HighTwo);

    cout << "Початковий масив(2): ";
    Print(b, N);

    int sumTwo = SumTwo(a, N);
    cout << "Сума парних елементів(2): " << sumTwo << endl;

    return 0;
}
