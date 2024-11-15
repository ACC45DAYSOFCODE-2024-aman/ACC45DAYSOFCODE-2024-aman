#include <stdio.h>

int main() {
    int T;  // Number of test cases
    scanf("%d", &T);

    while (T--) {
        int N, A, B;
        // Read the number of episodes (N), duration for even indexed episodes (A) 
        // and duration for odd indexed episodes (B)
        scanf("%d %d %d", &N, &A, &B);
        
        // Calculate the count of odd and even indexed episodes
        int odd_count = (N + 1) / 2;  // Odd indexed episodes (1, 3, 5, ...)
        int even_count = N / 2;       // Even indexed episodes (2, 4, 6, ...)
        
        // Calculate total duration
        int total_duration = odd_count * B + even_count * A;
        
        // Output the total duration for the current test case
        printf("%d\n", total_duration);
    }

    return 0;
}


