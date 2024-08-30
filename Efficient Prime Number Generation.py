def generate_primes(n):
    is_prime = [True] * (n + 1)
    is_prime[0] = is_prime[1] = False

    for p in range(2, int(n**0.5) + 1):
        if is_prime[p]:
            for i in range(p * p, n + 1, p):
                is_prime[i] = False

    for i in range(2, n + 1):
        if is_prime[i]:
            print(i)

n = int(input("Enter the upper limit: "))
generate_primes(n)
