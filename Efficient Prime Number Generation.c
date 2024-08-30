#include <stdio.h>
#include <stdbool.h>

void sieveOfEratosthenes(int n) {
    bool isPrime[n + 1];
    int i, j;

    // Initialize all elements as true
    for (i = 0; i <= n; i++) {
        isPrime[i] = true;
    }

    // Mark non-prime numbers
    isPrime[0] = isPrime[1] = false;
    for (i = 2; i * i <= n; i++) {
        if (isPrime[i]) {
            for (j = i * i; j <= n; j += i) {
                isPrime[j] = false;
            }
        }
    }

    // Print prime numbers
    printf("Prime numbers up to %d:\n", n);
    for (i = 2; i <= n; i++) {
        if (isPrime[i]) {
            printf("%d ", i);
        }
    }
    printf("\n");
}

int main() {
    int n;

    printf("Enter the upper limit: ");
    scanf("%d", &n);

    sieveOfEratosthenes(n);

    return 0;
}
