#define TRUE 1
#define FALSE 0
#include <stdio.h>

int is_not_duplicate(int a, int b, int c) {
    if (a != b && a != c && b != c) return TRUE;
    else return FALSE;
}

int main(void) {
    int n = 0, m = 0;
    scanf("%d", &n);
    scanf("%d", &m);

    int cards[100] = {0};

    for (int i = 0 ; i < n ; i++) {
        scanf("%d", &cards[i]);
    }

    int max = 0;
    int max_i = 0;
    int max_j = 0;
    int max_k = 0;
    for (int i = 0 ; i < n ; i++) {
        for (int j = 0 ; j < n ; j++) {
            for(int k = 0 ; k < n ; k++) {
                if (is_not_duplicate(i, j, k) == TRUE) {
                    int sum = cards[i] + cards[j] + cards[k];
                    
                    if (max < sum && sum <= m) max = sum;

                    if (max == m) {
                        printf("%d\n", max);
                        return 0;
                    }
                }
            }
        }
    }

    printf("%d\n", max);

    return 0;
}
