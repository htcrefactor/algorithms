// #include <stdio.h>
// #include <stdlib.h>

// int counter(char* s, int m, int i, int pn_length) {
//     // Check initial occurance
//     for (int j = 0 ; j < pn_length ; j++) {
//         if (j % 2 == 0) {
//             if (s[i + j] != 'I') return 0;
//         } else {
//             if (s[i + j] != 'O') return 0;
//         }
//     }
    
//     // Check consecutive occurances
//     int combo = 1;
//     while (i + (pn_length - 1) + (2 * combo) < m) {
//         if ((s[i + (pn_length - 1) + (2 * combo) - 1] == 'O') && (s[i + (pn_length - 1) + (2 * combo)] == 'I')) combo++;
//         else break;
//     }
    
//     return combo;
// }

// int main() {
//     int n = 0, m = 0;
//     scanf("%d", &n);
//     scanf("%d", &m);

//     const int pn_length = 2 * n + 1;
//     char* s = (char*)malloc(sizeof(char) * m + 1);
//     scanf("%s", s);

//     int count = 0;
//     int i = 0;
//     for ( ; i <= m - pn_length; ) {
//         int combo = counter(s, m, i, pn_length);
        
//         if (combo != 0) {
//             count = count + combo;
//             i = i + pn_length + (2 * combo) - 2;
//         } else {
//             i = i + 1;
//         }
//     }

//     free(s);

//     printf("%d\n", count);

//     return 0;
// }

#include <stdio.h>

int main() {
    int n = 0, m = 0;
    scanf("%d", &n);
    scanf("%d", &m);

    char s[1048576] = "";
    scanf("%s", s);

    int count = 0;
    for (int i = 0 ; i < m ; i++) {
        if (s[i] == 'I') {
            int number_of_o = 0;
            while (s[i + 1] == 'O' && s[i + 2] == 'I') {
                i = i + 2;
                number_of_o++;

                if (s[i] == 'I' && number_of_o == n) {
                    number_of_o--;
                    count++;
                }
            }
        }
    }

    printf("%d\n", count);

    return 0;
}
