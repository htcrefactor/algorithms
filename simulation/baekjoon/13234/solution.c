#include <stdio.h>

int main() {
    char value1[8];
    char operation[8];
    char value2[8];
    
    scanf("%s", value1);
    scanf("%s", operation);
    scanf("%s", value2);
    
    int value1_int = value1[0] == 't' ? 1 : 0;
    int value2_int = value2[0] == 't' ? 1 : 0;
    // printf("%d %d\n", value1_int, value2_int);

    int result = -1;
    if (operation[0] == 'A') result = value1_int * value2_int;
    else result = value1_int + value2_int;

    if (result == 0) printf("false\n");
    else printf("true\n");
    
    return 0;
}
