#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T); // Read the number of test cases

    while (T--) {
        int N;
        scanf("%d", &N); // Read the number of problems

        int count_start38 = 0;
        int count_ltime108 = 0;

        for (int i = 0; i < N; i++) {
            char contest_code[10];
            scanf("%s", contest_code); // Read the contest code

            // Increment the appropriate counter
            if (strcmp(contest_code, "START38") == 0) {
                count_start38++;
            } else if (strcmp(contest_code, "LTIME108") == 0) {
                count_ltime108++;
            }
        }

        // Output the results for this test case
        printf("%d %d\n", count_start38, count_ltime108);
    }

    return 0;
}


