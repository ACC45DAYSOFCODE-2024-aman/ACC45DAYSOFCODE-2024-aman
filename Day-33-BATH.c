#include <stdio.h>

int main() {
    int T;  // Number of test cases
    scanf("%d", &T);
    
    // Process each test case
    while (T--) {
        int X, Y;  // X is the geyser capacity, Y is the bucket capacity
        scanf("%d %d", &X, &Y);
        
        // Calculate how many full buckets can be filled with X liters of water
        int total_buckets = X / Y;
        
        // Calculate the number of people that can bathe, each requiring 2 buckets
        int people = total_buckets / 2;
        
        // Output the result
        printf("%d\n", people);
    }

    return 0;
}


