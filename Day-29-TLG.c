#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N); // Read the number of rounds

    int cumulative_score1 = 0, cumulative_score2 = 0;
    int max_lead = 0, winner = 0;

    for (int i = 0; i < N; i++) {
        int S, T;
        scanf("%d %d", &S, &T); // Read the scores for the current round

        cumulative_score1 += S; // Update cumulative score for Player 1
        cumulative_score2 += T; // Update cumulative score for Player 2

        int lead, current_winner;

        // Determine the current leader and lead
        if (cumulative_score1 > cumulative_score2) {
            lead = cumulative_score1 - cumulative_score2;
            current_winner = 1;
        } else {
            lead = cumulative_score2 - cumulative_score1;
            current_winner = 2;
        }

        // Check if this is the maximum lead
        if (lead > max_lead) {
            max_lead = lead;
            winner = current_winner;
        }
    }

    // Output the winner and the maximum lead
    printf("%d %d\n", winner, max_lead);

    return 0;
}

