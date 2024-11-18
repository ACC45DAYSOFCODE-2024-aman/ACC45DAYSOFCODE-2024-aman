#include <stdio.h>

int main() {
    int T;  // Number of test cases
    scanf("%d", &T);  // Read number of test cases

    while (T--) {
        int N, X;  // Number of players and number of tiles
        scanf("%d %d", &N, &X);  // Read N and X

        // Check if X is divisible by N
        if (X % N == 0) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }

    return 0;
}


