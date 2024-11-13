#include <stdio.h>

int main() {
    int T;  // Number of test cases
    scanf("%d", &T);  // Read number of test cases
    
    while (T--) {
        int A, B, C;
        scanf("%d %d %d", &A, &B, &C);  // Read the prices of the 3 items
        
        // Find the minimum of the three prices
        int min_price = A;
        if (B < min_price) min_price = B;
        if (C < min_price) min_price = C;
        
        // Calculate the total price Chef has to pay
        int total_price = A + B + C - min_price;
        
        // Output the result
        printf("%d\n", total_price);
    }
    
    return 0;
}


