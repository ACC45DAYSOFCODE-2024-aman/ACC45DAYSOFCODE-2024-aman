#include <stdio.h>
#include <math.h>  // For log2 function

int main() {
    int T;
    scanf("%d", &T);  // Read the number of test cases

    while (T--) {
        int N, A, B;
        scanf("%d %d %d", &N, &A, &B);  // Read N (teams), A (round duration), and B (break duration)
        
        // Calculate number of rounds
        int rounds = log2(N);

        // Calculate total time taken for the tournament
        int totalTime = (rounds - 1) * (A + B) + A;

        // Output the result for this test case
        printf("%d\n", totalTime);
    }

    return 0;
}


