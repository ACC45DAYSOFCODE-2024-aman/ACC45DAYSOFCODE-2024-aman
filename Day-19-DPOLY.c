#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T); // Read the number of test cases

    while (T--) {
        int N;
        scanf("%d", &N); // Read the number of terms

        int coefficients[N];
        for (int i = 0; i < N; i++) {
            scanf("%d", &coefficients[i]); // Read the coefficients
        }

        // Find the degree by looking for the last non-zero coefficient
        int degree = -1; // Start with -1 for safety
        for (int i = 0; i < N; i++) {
            if (coefficients[i] != 0) {
                degree = i; // Update the degree
            }
        }

        printf("%d\n", degree); // Output the degree
    }

    return 0;
}


