#include <iostream>

using namespace std;

int countEvenDigits(int n) {
    if (n == 0) return 0;
    int last = n % 10;
    int count = (last % 2 == 0) ? 1 : 0;
    return count + countEvenDigits(n / 10);
}

int main() {
    cout << countEvenDigits(1234) << endl;
    return 0;
}
