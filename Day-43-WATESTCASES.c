
#include <stdio.h>
#include <limits.h>

int main() {
    int T;  // Number of test cases
    scanf("%d", &T);  // Read the number of test cases

    while (T--) {
        int N;  // Number of sub-test cases
        scanf("%d", &N);

        int S[N];  // Array to store sizes of the test cases
        for (int i = 0; i < N; i++) {
            scanf("%d", &S[i]);  // Read sizes of the test cases
        }

        char V[N + 1];  // Binary string for verdicts (adding 1 for null-terminator)
        scanf("%s", V);  // Read the binary string

        int min_size = INT_MAX;  // Initialize the minimum size as a very large number

        // Loop through each test case's verdict
        for (int i = 0; i < N; i++) {
            if (V[i] == '0') {  // If the test case failed
                if (S[i] < min_size) {
                    min_size = S[i];  // Update the minimum size
                }
            }
        }

        printf("%d\n", min_size);  // Output the smallest failing test case size
    }

    return 0;
}
