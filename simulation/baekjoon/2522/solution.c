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
        spaces(n - row);
        stars(row);
        printf("\n");
    }

    stars(n);
    printf("\n");

    for(int row = n - 1 ; 1 <= row ; row--) {
        spaces(n - row);
        stars(row);
        printf("\n");
    }

    
    return 0;
}
