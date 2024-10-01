#include <iostream>

bool isPrime(int num) {
    if (num < 2) return false; // Numbers less than 2 are not prime
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false; // If divisible by any number, it is not prime
        }
    }
    return true;
}

void bruteForcePrimeGeneration(int n) {
    for (int i = 2; i <= n; i++) {
        if (isPrime(i)) {
            std::cout << i << " ";
        }
    }
    std::cout << std::endl;
}

int main() {
    int n;

    std::cout << "Enter the upper limit: ";
    std::cin >> n;

    bruteForcePrimeGeneration(n);

    return 0;
}