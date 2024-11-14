#include <stdio.h>

int main() {
    int T;  // Number of test cases
    scanf("%d", &T);
    
    while (T--) {
        int N, X, P;
        // Reading N, X, and P for each test case
        scanf("%d %d %d", &N, &X, &P);
        
        // Calculate the total score
        int total_score = 4 * X - N;
        
        // Check if the score is enough to pass
        if (total_score >= P) {
            printf("PASS\n");
        } else {
            printf("FAIL\n");
        }
    }
    
    return 0;
}


