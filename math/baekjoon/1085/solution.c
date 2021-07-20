#include <stdio.h>

int main() {
    int x, y, w, h;
    scanf("%d", &x);
    scanf("%d", &y);
    scanf("%d", &w);
    scanf("%d", &h);

    int dx = 0;
    int dy = 0;

    dx = w - x;
    dy = h - y;

    int digits[1024] = {0};

    digits[x] = 1;
    digits[y] = 1;
    digits[dx] = 1;
    digits[dy] = 1;

    for (int i = 0 ; i < 1024 ; i++) {
        if(digits[i] == 1) {
            printf("%d\n", i);
            break;
        }
    }

    return 0;
}