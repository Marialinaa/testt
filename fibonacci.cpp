#include <iostream>

using namespace std;

bool isFibonacci(int n) {
    int fib0 = 0, fib1 = 1;

    while (fib1 < n) {
        int fibn = fib0 + fib1;
        fib0 = fib1;
        fib1 = fibn;
    }

    return fib1 == n;
}

int main() {
    int num;
    cout << "De um numero: ";
    cin >> num;

    if (isFibonacci(num)) {
        cout << "o número " << num << "e um numero de Fibonacci." << endl;
    } else {
        cout << "o numero " << num << " nao e um numero de Fibonacci." << endl;
    }

    return 0;
}
