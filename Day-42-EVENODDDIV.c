#include <stdio.h>

int count_even_divisors(int N) {
    int count = 0;
    for (int i = 1; i <= N; i++) {
        if (N % i == 0 && i % 2 == 0) {
            count++;
        }
    }
    return count;
}

int count_odd_divisors(int N) {
    int count = 0;
    for (int i = 1; i <= N; i++) {
        if (N % i == 0 && i % 2 != 0) {
            count++;
        }
    }
    return count;
}

int main() {
    int T;  // Number of test cases
    scanf("%d", &T);

    while (T--) {
        int N;
        scanf("%d", &N);

        int f_N = count_even_divisors(N);
        int g_N = count_odd_divisors(N);

        if (f_N > g_N) {
            printf("1\n");
        } else if (f_N == g_N) {
            printf("0\n");
        } else {
            printf("-1\n");
        }
    }

    return 0;
}


