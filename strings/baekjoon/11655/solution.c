#include <stdio.h>
#include <string.h>

int main(void) {
    char s[128] = "";
    gets(s);
    int s_length = strlen(s);

    char uppercase[26] = "NOPQRSTUVWXYZABCDEFGHIJKLM";
    char lowercase[26] = "nopqrstuvwxyzabcdefghijklm";

    // Include terminating null character
    char ret[128] = "";

    for (int index = 0 ; index < s_length ; index++) {
        // 65: A, 90: Z
        // 97: a, 122: z
        int temp = (int)s[index];
        if (65 <= temp && temp <= 90) {
            ret[index] = uppercase[temp - 65];
        } else if (97 <= temp && temp <= 122) {
            ret[index] = lowercase[temp - 97]; 
        } else {
            ret[index] = s[index];
        }

        printf("%c", ret[index]);
    }

    return 0;
}
