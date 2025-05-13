#include <iostream>
using namespace std;

bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i*i <= n; i++) {
        if (n % i == 0)
            return false;
    }
    return true;
}

int nextPrime(int num) {
    int next = num + 1;
    while (!isPrime(next)) {
        next++;
    }
    return next;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Next prime number is: " << nextPrime(n) << endl;
    return 0;
}
