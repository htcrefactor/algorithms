#include <stdio.h>

int main()
{
    int A, B, C;
    scanf("%d%d%d", &A, &B, &C);
    
    long long int multiplication = A * B * C;
    
    int digits[10] = {0};
    
    while(multiplication)
    {
        digits[multiplication % 10]++;
        multiplication = multiplication / 10;
    }
    
    for(int i = 0 ; i <= 9 ; i++)
    {
        printf("%d\n", digits[i]);
    }
    
    return 0;
}
