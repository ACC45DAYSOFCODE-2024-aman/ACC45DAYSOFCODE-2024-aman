#include <stdio.h>
#include <math.h>

int main() {
    int T;
    scanf("%d", &T); // Read the number of test cases

    while (T--) {
        int H, X, Y;
        scanf("%d %d %d", &H, &X, &Y); // Read H, X, Y

        // Calculate attacks without using the special attack
        int attacks_without_special = (int)ceil((double)H / X);

        // Calculate remaining health after using the special attack
        int remaining_health_after_special = H - Y;
        int attacks_with_special;

        if (remaining_health_after_special <= 0) {
            attacks_with_special = 1; // Only the special attack needed
        } else {
            attacks_with_special = 1 + (int)ceil((double)remaining_health_after_special / X);
        }

        // Get the minimum number of attacks
        int min_attacks = (attacks_without_special < attacks_with_special) ? 
                          attacks_without_special : attacks_with_special;

        printf("%d\n", min_attacks); // Output the result
    }

    return 0;
}


