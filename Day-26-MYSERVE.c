#include <stdio.h>

int main() {
    int T; // Number of test cases
    scanf("%d", &T);

    while (T--) {
        int P, Q;
        scanf("%d %d", &P, &Q);

        int totalPoints = P + Q;
        int remainingPoints = totalPoints % 4;

        if (remainingPoints == 0 || remainingPoints == 1) {
            printf("Alice\n");
        } else {
            printf("Bob\n");
        }
    }

    return 0;
}


