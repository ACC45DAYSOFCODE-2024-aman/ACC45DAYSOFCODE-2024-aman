#include <stdio.h>

int main() {
    int T;  // Number of test cases
    scanf("%d", &T);
    
    while (T--) {
        int N, K;  // Number of people and initial ATM balance
        scanf("%d %d", &N, &K);
        
        int A[N];  // Withdrawal amounts
        for (int i = 0; i < N; i++) {
            scanf("%d", &A[i]);
        }

        char result[N + 1];  // To store the result for each test case
        for (int i = 0; i < N; i++) {
            if (K >= A[i]) {
                result[i] = '1';  // Successful withdrawal
                K -= A[i];        // Decrease the balance
            } else {
                result[i] = '0';  // Unsuccessful withdrawal
            }
        }
        result[N] = '\0';  // Null-terminate the string

        printf("%s\n", result);  // Print the result for the test case
    }

    return 0;
}


