#include <stdio.h>

int main() {
    int a = 0, b = 0;
    scanf("%d %d", &a, &b);

    int sum = 0;
    for (int i = 1 ; i <= 1000 ; i++) {
        for (int j = 1 ; j <= i ; j++) {
            int position = (i - 1) * i / 2 + j;
            if (a <= position && position <= b) {
                sum += i;
            }
        }
    }

    printf("%d", sum);

    return 0;
}
