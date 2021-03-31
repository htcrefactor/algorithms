#include <stdio.h>

int main()
{
    int prime[10000] = {0};
    int n = 2;

    prime[0] = -1;
    prime[1] = -1;
    while (n < 1001)
    {
        if (prime[n] == 0)
        {
            prime[n] = 1;

            int index = n;
            while (index < 1001)
            {
                index = index + n;
                prime[index] = -1;
            }
        } else {
            n++;
        }
    }

    int input = 0;
    scanf("%d", &input);

    int result = 0;

    while(input--) {
        int temp = 0;
        scanf("%d", &temp);
        if(prime[temp] == 1) result++;
    }

    printf("%d", result);

    return 0;
}
