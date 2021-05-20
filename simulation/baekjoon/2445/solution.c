#include <stdio.h>

void spaces(int count) {
    while(count--) {
        printf(" ");
    }
}

void stars(int count) {
    while(count--) {
        printf("*");
    }
}

int main() {
    int n = -1;
    scanf("%d", &n);

    for(int row = 1 ; row <= n - 1 ; row++) {
        stars(row);
        spaces(2 * (n - row));
        stars(row);
        printf("\n");
    }

    stars(2 * n);
    printf("\n");

    for(int row = n - 1 ; 1 <= row ; row--) {
        stars(row);
        spaces(2 * (n - row));
        stars(row);
        printf("\n");
    }   

    return 0;
}
