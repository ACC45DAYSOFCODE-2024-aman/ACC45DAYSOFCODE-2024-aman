#include <stdio.h>

void solve() {
    int T;
    scanf("%d", &T);  // Read the number of test cases
    
    while (T--) {
        int N;
        scanf("%d", &N);  // Read the length of the array
        int A[N];
        int count_1 = 0;

        // Read the array elements and count the number of 1's
        for (int i = 0; i < N; i++) {
            scanf("%d", &A[i]);
            if (A[i] == 1) {
                count_1++;
            }
        }
        
        // Calculate the number of -1's by subtracting count_1 from N
        int count_minus_1 = N - count_1;

        // If N is odd, it's impossible to balance the array
        if (N % 2 != 0) {
            printf("-1\n");
        } else {
            // Calculate the absolute difference and check if it's even
            int diff = abs(count_1 - count_minus_1);
            if (diff % 2 != 0) {
                printf("-1\n");
            } else {
                // The number of flips required is half of the difference
                printf("%d\n", diff / 2);
            }
        }
    }
}

int main() {
    solve();
    return 0;
}


