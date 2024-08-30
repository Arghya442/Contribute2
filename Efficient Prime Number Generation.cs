using System;
using System.Collections.Generic;

class PrimeNumberGenerator {
    public static void GeneratePrimes(int n) {
        List<bool> isPrime = new List<bool>(n + 1);
        for (int i = 0; i <= n; i++) {
            isPrime.Add(true);
        }
        isPrime[0] = isPrime[1] = false;

        for (int p = 2; p * p <= n; p++) {
            if (isPrime[p]) {
                for (int i = p * p; i <= n; i += p) {
                    isPrime[i] = false;
                }
            }
        }

        for (int i = 2; i <= n; i++) {
            if (isPrime[i]) {
                Console.Write(i + " ");
            }
        }
        Console.WriteLine();
    }

    public static void Main() {
        Console.Write("Enter the upper limit: ");
        int n = int.Parse(Console.ReadLine());

        GeneratePrimes(n);
    }
}
