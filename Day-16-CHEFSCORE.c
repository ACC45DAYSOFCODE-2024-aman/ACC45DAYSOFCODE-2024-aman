#include <stdio.h>

int main() {
    int T;
    
    // Read the number of test cases
    scanf("%d", &T);
    
    while (T--) {
        int N, X, Y;
        
        // Read N, X, Y for each test case
        scanf("%d %d %d", &N, &X, &Y);
        
        // Check if Y is divisible by X and Y is less than or equal to N * X
        if (Y % X == 0 && Y <= N * X) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
    
    return 0;
}


