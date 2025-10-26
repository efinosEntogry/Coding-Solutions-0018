#include <iostream>

using namespace std;

int countEvenDigits(int n) {
    if (n == 0) return 0;
    if ((n % 10) % 2 != 0) return 0 + countEvenDigits(n / 10);
    if ((n % 10) % 2 == 0) return 1 + countEvenDigits(n / 10);
}

int main() {

    cout << countEvenDigits(2468) << endl;

    return 0;
}
