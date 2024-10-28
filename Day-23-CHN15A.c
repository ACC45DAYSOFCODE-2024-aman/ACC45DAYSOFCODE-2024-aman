#include <stdio.h>

int main() {
    int T; // Number of test cases
    scanf("%d", &T);
    
    while (T--) {
        int N, K; // Number of minions and value to be added
        scanf("%d %d", &N, &K);
        
        int count = 0; // Count of Wolverine-like minions
        for (int i = 0; i < N; i++) {
            int characteristic_value;
            scanf("%d", &characteristic_value);
            
            // Calculate the new characteristic value
            int new_value = characteristic_value + K;
            
            // Check if it is divisible by 7
            if (new_value % 7 == 0) {
                count++;
            }
        }
        
        // Print the count for this test case
        printf("%d\n", count);
    }
    
    return 0;
}


