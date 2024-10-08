#include <stdio.h>
#include <stdlib.h>

int main() {
    int T; // Number of test cases
    scanf("%d", &T);

    while (T--) {
        int X, Y; // Positions of the policeman and the thief
        scanf("%d %d", &X, &Y);

        // Calculate the minimum time to catch the thief
        int time = abs(Y - X);
        
        // Output the result
        printf("%d\n", time);
    }

    return 0;
}


