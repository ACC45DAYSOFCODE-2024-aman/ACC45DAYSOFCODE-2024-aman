#include <stdio.h>

int main() {
    int T; // Number of test cases
    scanf("%d", &T);

    while (T--) {
        int a, b, c, d;
        // Read the tastiness values for a, b, c, and d
        scanf("%d %d %d %d", &a, &b, &c, &d);

        // Calculate the maximum tastiness from the four possible combinations
        int max_tastiness = a + c;
        if (a + d > max_tastiness) max_tastiness = a + d;
        if (b + c > max_tastiness) max_tastiness = b + c;
        if (b + d > max_tastiness) max_tastiness = b + d;

        // Output the result for the current test case
        printf("%d\n", max_tastiness);
    }

    return 0;
}
