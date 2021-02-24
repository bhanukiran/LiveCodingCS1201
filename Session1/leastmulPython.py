
import sympy as sym
import math as m

def leastMul(N):
    primes = sym.primerange(1, N)
    ans = 1
    for p in primes:
        ans = ans * p**int(m.log(N, p))

    return ans


if __name__ == "__main__":
    N = int(input())
    print("ans = %d"%leastMul(N))


