#include <stdio.h>
#include <string.h>

void encode_message(int N, char S[]) {
    // Step 1: Swap adjacent characters
    for (int i = 0; i < N - 1; i += 2) {
        // Swap S[i] and S[i+1]
        char temp = S[i];
        S[i] = S[i + 1];
        S[i + 1] = temp;
    }
    
    // Step 2: Encode by reversing the alphabet
    for (int i = 0; i < N; i++) {
        S[i] = 'z' - (S[i] - 'a');
    }
    
    // Output the result
    printf("%s\n", S);
}

int main() {
    int T;  // Number of test cases
    scanf("%d", &T);
    
    while (T--) {
        int N;  // Length of the string
        char S[101];  // The string S (max length 100, +1 for null terminator)
        
        // Read the input
        scanf("%d", &N);
        scanf("%s", S);
        
        // Encode the message
        encode_message(N, S);
    }
    
    return 0;
}


