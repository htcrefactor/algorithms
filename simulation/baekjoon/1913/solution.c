#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int target;
    scanf("%d", &target);
    int targetX = 1, targetY = 1;

    int answer[1010][1010] = {0};
    int currentNumber = n * n;
    int x = 0;
    int y = 0;
    int direction = 2;

    answer[x][y] = currentNumber;
    while (currentNumber > 1)
    {
        currentNumber--;
        switch (direction)
        {
        case 2:
            if (answer[x][y + 1] != 0 || (y + 1) > n - 1)
            {
                direction = 3;
                x = x + 1;
            }
            else
            {
                y = y + 1;
            }
            break;

        case 3:
            if (answer[x + 1][y] != 0 || (x + 1) > n -1 )
            {
                direction = 4;
                y = y - 1;
            }
            else
            {
                x = x + 1;
            }
            break;

        case 4:
            if (y == 0)
            {
                direction = 1;
                x = x - 1;
            }
            else if (answer[x][y - 1] != 0)
            {
                direction = 1;
                x = x - 1;
            }
            else
            {
                y = y - 1;
            }
            break;

        case 1:
            if (x == 0)
            {
                direction = 2;
                y = y + 1;
            }
            else if (answer[x - 1][y] != 0)
            {
                direction = 2;
                y = y + 1;
            }
            else
            {
                x = x - 1;
            }
            break;
        }

        if(currentNumber == target) {
            targetX = y + 1;
            targetY = x + 1;
        }
        answer[x][y] = currentNumber;
        // printf("answer[%d][%d] = %d\tdirection = %d\n", x, y, currentNumber, direction);
    }

    for(int i = 0 ; i < n ; i++) {
        for(int j = 0 ; j < n ; j++) {
            printf("%d ", answer[j][i]);
        }
        printf("\n");
    }

    printf("%d %d\n", targetX, targetY);

    return 0;
}