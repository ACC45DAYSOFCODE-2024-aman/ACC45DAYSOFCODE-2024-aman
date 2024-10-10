#include <stdio.h>

int main() {
    int T; // number of test cases
    scanf("%d", &T); // read the number of test cases

    while (T--) {
        int X, Y; // X: number of problems submitted, Y: number of problems approved
        scanf("%d %d", &X, &Y); // read X and Y

        // Check if at least 50% of the problems are approved
        if (2 * Y >= X) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }

    return 0;
}


