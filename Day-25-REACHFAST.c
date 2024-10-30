#include <stdio.h>
#include <stdlib.h>

int main() {
    int T;
    scanf("%d", &T);  // Read the number of test cases

    while (T--) {
        int A, B, K;
        scanf("%d %d %d", &A, &B, &K);  // Read A, B, and K

        int distance = abs(A - B);  // Calculate the absolute distance
        int steps = (distance + K - 1) / K;  // Calculate the number of steps

        printf("%d\n", steps);  // Print the result
    }

    return 0;
}


