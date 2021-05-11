#include <stdio.h>

int main() {
    int cuts = 0;
    scanf("%d", &cuts);
    
    int pieces = 2; // cuts = 1
    int n = cuts / 2 + 1;

    
    if(cuts % 2 == 0) pieces = pieces + n * (n + 1) - 2 - n;
    else pieces = pieces + n * (n + 1) - 2;
    
    printf("%d\n", pieces);
    
    return 0; 
}
