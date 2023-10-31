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

int Sum(int a[], const int size, int i = 0) {
    if (i == size) {
        return 0;
    }
    if (a[i] % 2 == 0) {
        return a[i] + Sum(a, size, i + 1);
    }
    return Sum(a, size, i + 1);
}

int main() {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    srand((unsigned)time(NULL));
    int a[N];
    int Low = -11;
    int High = 13;

    Create(a, N, Low, High);

    cout << "Початковий масив: ";
    Print(a, N);

    int sumEven = Sum(a, N);
    cout << "Сума парних елементів: " << sumEven << endl;

    return 0;
}
