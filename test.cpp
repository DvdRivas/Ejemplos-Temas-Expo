#include <iostream>
using namespace std;

bool esPrimo(int n) {
    if (n < 2) return false;          // 0 y 1 no son primos
    if (n % 2 == 0) return n == 2;    // el único par primo es 2
    for (int d = 3; d * d <= n; d += 2) {
        if (n % d == 0) return false;
    }
    return true;
}

int main() {
    for (int i = 0; i <= 200; i++) {
        cout << "el numero: " << i << " es: " << esPrimo(i) << endl;
    }
}