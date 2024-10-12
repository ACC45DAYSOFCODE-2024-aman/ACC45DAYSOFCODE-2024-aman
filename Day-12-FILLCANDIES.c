#include <stdio.h>
#include <math.h>

int main() {
    int T;  // Number of test cases
    scanf("%d", &T);
    
    while (T--) {
        int N, K, M;
        scanf("%d %d %d", &N, &K, &M);

        // Calculate the capacity of one bag
        int bag_capacity = K * M;

        // Calculate the minimum number of bags needed
        int bags_needed = (N + bag_capacity - 1) / bag_capacity; // Equivalent to ceiling(N / bag_capacity)

        // Output the result for this test case
        printf("%d\n", bags_needed);
    }
    
    return 0;
}


