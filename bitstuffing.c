#include <stdio.h>
#define FLAG 0x7E    
#define ESCAPE 0x7D   
void bitStuffing(char* input, char* stuffed) {
    int i, j = 0;
    for (i = 0; input[i] != '\0'; i++) {
        stuffed[j++] = input[i];

        if (input[i] == FLAG || input[i] == ESCAPE) {
            stuffed[j++] = input[i] ^ 0x20;  
        }
    }
    stuffed[j] = '\0';  
}
int main() {
    char original[] = "01111110";  
    char stuffed[50];  
    printf("Original Data: %s\n", original);
    bitStuffing(original, stuffed);
    printf("Stuffed Data: %s\n", stuffed);
}
