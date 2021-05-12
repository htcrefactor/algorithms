#include <stdio.h>
#include <string.h>

int main() {
    int testCases = 0;
    scanf("%d", &testCases);

    while(testCases--) {
        int score = 0;
        int combo = 1;
        
        char buffer[128] = {0};
        scanf("%s", buffer);
        
        int bufferLength = strlen(buffer);
        int bufferIndex;
        for(bufferIndex = 0 ; bufferIndex < bufferLength ; bufferIndex++) {
            if(buffer[bufferIndex] == 'O') {
                score = score + combo;
                combo = combo + 1;
            } else {
                combo = 1;
            }
        }

        printf("%d\n", score);
    }

    return 0;
}
