#include <stdio.h>
#include <math.h>

int is_prime(int n) {
    if (n <= 1) return 0; // Not prime
    if (n == 2) return 1; // 2 is prime
    if (n % 2 == 0) return 0; // Even number greater than 2 is not prime

    for (int i = 3; i <= sqrt(n); i += 2) {
        if (n % i == 0) {
            return 0; // Not prime
        }
    }
    return 1; // Prime
}

int main() {
    int T;
    scanf("%d", &T); // Read number of test cases

    for (int i = 0; i < T; i++) {
        int N;
        scanf("%d", &N); // Read the number to check

        if (is_prime(N)) {
            printf("yes\n");
        } else {
            printf("no\n");
        }
    }

    return 0;
}


