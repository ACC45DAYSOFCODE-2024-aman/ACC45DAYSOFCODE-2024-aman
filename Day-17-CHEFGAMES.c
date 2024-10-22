#include <stdio.h>

int main() {
    int T;  // Number of test cases
    scanf("%d", &T);
    
    while (T--) {
        int R1, R2, R3, R4;  // Decisions of the 4 referees
        scanf("%d %d %d %d", &R1, &R2, &R3, &R4);
        
        // If all referees said the ball was inside (i.e., all are 0)
        if (R1 == 0 && R2 == 0 && R3 == 0 && R4 == 0) {
            printf("IN\n");
        } else {
            printf("OUT\n");
        }
    }
    
    return 0;
}


