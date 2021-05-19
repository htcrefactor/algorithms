#include <stdio.h>

int pericaMin(int input) {
    int pericaMin = input;
    for(int position = 1 ; input != 0 ; position = position * 10) {
        int digit = input  % 10;
        input = input / 10;
        if(digit == 6) pericaMin = pericaMin - position;
    }

    return pericaMin;
}

int pericaMax(int input) {
    int pericaMax = input;
    for(int position = 1 ; input != 0 ; position = position * 10) {
        int digit = input  % 10;
        input = input / 10;
        if(digit == 5) pericaMax = pericaMax + position;
    }

    return pericaMax;
}

int main() {
    int a = -1;
    int b = -1;
    scanf("%d %d", &a, &b);

    int minSum = pericaMin(a) + pericaMin(b);
    int maxSum = pericaMax(a) + pericaMax(b);
    
    printf("%d %d", minSum, maxSum);

    return 0;
}
