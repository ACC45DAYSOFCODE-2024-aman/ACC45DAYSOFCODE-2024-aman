#include <stdio.h>

int main() {
    int T; // Number of test cases
    scanf("%d", &T);
    
    while (T--) {
        int N; // Number of spooky days
        scanf("%d", &N);
        
        // Calculate number of complete weeks
        int weeks = N / 7;
        // Calculate remaining days after complete weeks
        int remaining_days = N % 7;
        
        // Calculate total Tuesdays
        int total_Tuesdays = weeks + (remaining_days >= 2 ? 1 : 0);
        
        // Output the result for this test case
        printf("%d\n", total_Tuesdays);
    }

    return 0;
}


