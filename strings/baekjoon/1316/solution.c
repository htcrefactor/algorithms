#include <stdio.h>
#include <string.h>

#define A_VAL 97 // ASCII value of 'a'
int check(char* string, unsigned long length);

int main() {
    int n = 0;
    scanf("%d", &n);
    int answer = n;
    
    while(n--) {
        char string[101] = {0};
        scanf("%s", string);
        
        int status = check(string, strlen(string));
        if(status == 1) {
            answer = answer - 1;
        }
    }
    
    printf("%d\n", answer);
    
    return 0;
}

int check(char* string, unsigned long length) {
    int alphabets[26] = {0};
    
    alphabets[string[0] - A_VAL] = 1;
    char previous = string[0];
    
    for(int i = 1 ; i < length ; i++) {
        if(string[i] == previous) {
            continue;
        } else {
            if(alphabets[string[i] - A_VAL] != 0) {
                return 1;
            } else {
                previous = string[i];
                alphabets[string[i] - A_VAL] = 1;
            }
        }
    }
    
    return 0;
}
