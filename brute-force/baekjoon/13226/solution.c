#include <stdio.h>
#include <math.h>

int main() {
    int C, L, U;
    scanf("%d", &C);
    
    while (C--) {
        scanf("%d", &L);
        scanf("%d", &U);

        int divisorsMax = -1;

        for (int currentInteger = L ; currentInteger <= U ; currentInteger++) {
            double squareRootInDouble = sqrt(currentInteger);
            int squareRootInInt = (int)squareRootInDouble;
            
            int divisors = 0;
            for (int divisor = 1 ; divisor <= squareRootInInt ; divisor++) {
                if (currentInteger % divisor == 0) divisors = divisors + 1;
            }

            if (0.000001 < squareRootInDouble - (double)squareRootInInt) divisors = divisors * 2;
            else divisors = divisors * 2 - 1;

            if (divisorsMax < divisors) {
                divisorsMax = divisors;
            }
        }

        printf("%d\n", divisorsMax);
    }

    return 0;
}
