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

    for(int row = 1 ; row <= n ; row++) {
        spaces(n - row);
        stars(2 * row - 1);
        printf("\n");
    }

    return 0;
}