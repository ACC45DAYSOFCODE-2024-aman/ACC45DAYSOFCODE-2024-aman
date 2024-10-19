#include <stdio.h>

int main() {
    int T, X, Y;
    
    // Read the number of test cases
    scanf("%d", &T);
    
    // Loop through each test case
    for (int i = 0; i < T; i++) {
        // Read X and Y for each test case
        scanf("%d %d", &X, &Y);
        
        // Compare the times and print the result
        if (X < Y) {
            printf("BIKE\n");
        } else if (X > Y) {
            printf("CAR\n");
        } else {
            printf("SAME\n");
        }
    }

    return 0;
}


