#include <stdio.h>

int main() {
    int T; // Number of test cases
    scanf("%d", &T);
    
    for (int i = 0; i < T; i++) {
        int N; // Number of bits taken by the program
        scanf("%d", &N);
        
        // Check if N is a multiple of 4
        if (N % 4 == 0) {
            printf("Good\n");
        } else {
            printf("Not Good\n");
        }
    }
    
    return 0;
}


