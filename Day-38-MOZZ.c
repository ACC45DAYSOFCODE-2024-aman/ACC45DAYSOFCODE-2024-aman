#include <stdio.h>

int main() {
    int T;  // Number of test cases
    scanf("%d", &T);

    while (T--) {
        int X, Y, R;
        scanf("%d %d %d", &X, &Y, &R);

        // Calculate the number of extra sticks Chef ate
        int extra_sticks = R / 30;

        // Calculate the total number of sticks Chef ate
        int total_sticks = X + extra_sticks;

        // Calculate the number of plates, rounded up
        int plates = (total_sticks + Y - 1) / Y;  // Equivalent to ceil(total_sticks / Y)

        // Output the result for this test case
        printf("%d\n", plates);
    }

    return 0;
}


