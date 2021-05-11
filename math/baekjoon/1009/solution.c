#include <stdio.h>

int main() {
    int answer[10][4] = {{10, 10, 10, 10}, {1, 1, 1, 1}, {6, 2, 4, 8}, {1, 3, 9, 7}, {6, 4, 0, 0}, {5, 0, 0, 0}, {6, 0, 0, 0}, {1, 7, 9, 3}, {6, 8, 4, 2}, {1, 9, 0, 0}};
    int divisor[10] = {1, 1, 4, 4, 2, 1, 1, 4, 4, 2};
    int testCases = 0;
    scanf("%d", &testCases);
    while(testCases--) {
        int a = 0;
        int b = 0;
        scanf("%d %d", &a, &b);
        
        a = a % 10;
        b = b % divisor[a];
        
        printf("%d\n", answer[a][b]);      
    }
    
    return 0;
}
