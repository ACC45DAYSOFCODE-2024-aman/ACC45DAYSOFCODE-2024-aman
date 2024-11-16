#include <stdio.h>

void solve() {
    int T;
    scanf("%d", &T);  // Read the number of test cases
    
    while (T--) {
        long long N;
        scanf("%lld", &N);  // Read the number of gifts Chef wants to buy
        
        // Calculate the cost
        long long full_sets = N / 5;
        long long remaining = N % 5;
        
        // The total cost is 4 coins for each full set of 5 gifts,
        // plus the cost of the remaining gifts (1 coin each).
        long long cost = (full_sets * 4) + remaining;
        
        // Print the result
        printf("%lld\n", cost);
    }
}

int main() {
    solve();  // Call the solve function to process the input and output
    return 0;
}


