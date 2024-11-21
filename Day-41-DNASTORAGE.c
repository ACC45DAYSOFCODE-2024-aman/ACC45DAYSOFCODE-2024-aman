#include <stdio.h>
#include <string.h>

// Function to encode binary string into DNA sequence
void encode_binary_to_dna(int T) {
    char encoding_map[4] = {'A', 'T', 'C', 'G'};  // Encoding map for 00 -> A, 01 -> T, 10 -> C, 11 -> G
    
    for (int t = 0; t < T; t++) {
        int N;
        char S[1003];  // Assuming max N is 1003 based on constraints
        
        // Read the length of the binary string and the string itself
        scanf("%d", &N);
        scanf("%s", S);
        
        // Array to store the encoded sequence
        char encoded[N / 2 + 1];  // Since each pair of bits produces one character, max size will be N/2
        
        // Process the binary string in pairs of bits
        int index = 0;
        for (int i = 0; i < N; i += 2) {
            // Extract the pair of bits as a string
            char pair[3] = {S[i], S[i+1], '\0'};
            
            // Determine the corresponding DNA character
            if (strcmp(pair, "00") == 0) {
                encoded[index++] = encoding_map[0];  // A
            } else if (strcmp(pair, "01") == 0) {
                encoded[index++] = encoding_map[1];  // T
            } else if (strcmp(pair, "10") == 0) {
                encoded[index++] = encoding_map[2];  // C
            } else if (strcmp(pair, "11") == 0) {
                encoded[index++] = encoding_map[3];  // G
            }
        }
        
        // Null-terminate the encoded string
        encoded[index] = '\0';
        
        // Output the encoded DNA sequence
        printf("%s\n", encoded);
    }
}

int main() {
    int T;  // Number of test cases
    
    // Read the number of test cases
    scanf("%d", &T);
    
    // Process the test cases
    encode_binary_to_dna(T);
    
    return 0;
}

