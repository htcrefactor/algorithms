#include <stdio.h>

int numbers[10001] = {0};

int main(void)
{
    int n = 0;
    scanf("%d", &n);

    int buffer = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &buffer);
        numbers[buffer]++;
    }

    for (int i = 0; i <= 10000; i++)
    {
        if (numbers[i] != 0)
        {
            for (int j = 0; j < numbers[i]; j++)
            {
                printf("%d\n", i);
            }
        }
    }

    return 0;
}