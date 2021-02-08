#include <stdio.h>

int main(void) {
    int n = 0;
    scanf("%d", &n);

    while(n--) {
        char input_string[200];
        int alphabets[26];
        scanf("%s", input_string);

        for(int i = 0 ; i < 200 ; i++) {
            int index = input_string[i];
            if(alphabets[index] == 0) {
                // new character
            } else if(alphabets[index] == 404) {
                // already detected group character -> break
            } else {
                // group character
            }
        }

    }

    return 0;
}
