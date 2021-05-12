#include <stdio.h>
#include <string.h>

int main()
{
    int length;
    char string[30] = {0};
    int R;
    int testCase;
    
    scanf("%d", &testCase);
    
    while(testCase--)
    {
        scanf("%d%s", &R, string);
        
        length = (int)strlen(string);
        
        for(int i = 0 ; i < length ; i++)
        {
            for(int j = 1 ; j <= R ; j++)
            {
                printf("%c", string[i]);
            }
        }
        
        printf("\n");
    }
    
    return 0;
}
