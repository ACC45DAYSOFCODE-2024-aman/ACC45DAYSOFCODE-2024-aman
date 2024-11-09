#include <stdio.h>
#include <math.h>

// Function to calculate the total event time
int calculate_event_time(int N, int A, int B) {
    // Calculate the number of rounds (log2(N))
    int rounds = (int)(log2(N));
    
    // Total round time: rounds * A
    int total_round_time = rounds * A;
    
    // Total break time: (rounds - 1) * B (no break after last round)
    int total_break_time = (rounds - 1) * B;
    
    // Total event time
    return total_round_time + total_break_time;
}

int main() {
    int T;
    
    // Read number of test cases
    scanf("%d", &T);
    
    // Process each test case
    for (int i = 0; i < T; i++) {
        int N, A, B;
        
        // Read N, A, B for the current test case
        scanf("%d %d %d", &N, &A, &B);
        
        // Calculate and print the total event time for this test case
        printf("%d\n", calculate_event_time(N, A, B));
    }
    
    return 0;
}




