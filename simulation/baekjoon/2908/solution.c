#include <stdio.h>

int main() {
    char a1, a10, a100;
    char b1, b10, b100;
    char space;

    scanf("%c", &a1);
    scanf("%c", &a10);
    scanf("%c", &a100);

    scanf("%c", &space);

    scanf("%c", &b1);
    scanf("%c", &b10);
    scanf("%c", &b100);

    int a = 100 * a100 + 10 * a10 + a1;
    int b = 100 * b100 + 10 * b10 + b1;

    if(a > b) printf("%c%c%c\n", a100, a10, a1);
    else printf("%c%c%c\n", b100, b10, b1);

    return 0;    
}
