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
        spaces(row - 1);
        stars((2 * n - 1) - 2 * (row - 1));
        printf("\n");
    }

    spaces(n - 1);
    stars(1);
    printf("\n");

    for(int row = n - 1 ; 1 <= row ; row--) {
        spaces(row - 1);
        stars((2 * n - 1) - 2 * (row - 1));
        printf("\n");
    }

    
    return 0;
}
