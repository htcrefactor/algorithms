#include <stdio.h>
#include <string.h>

int main() {
    int n = 0;
    scanf("%d", &n);

    while(n--) {
        char buffer[64] = {0};
        scanf("%s", buffer);
        
        int length = strlen(buffer);

        switch(buffer[length-1]) {
            case '0':
            printf("even\n");
            break;

            case '1':
            printf("odd\n");
            break;
            
            case '2':
            printf("even\n");
            break;
            
            case '3':
            printf("odd\n");
            break;
            
            case '4':
            printf("even\n");
            break;
            
            case '5':
            printf("odd\n");
            break;
            
            case '6':
            printf("even\n");
            break;
            
            case '7':
            printf("odd\n");
            break;
            
            case '8':
            printf("even\n");
            break;
            
            case '9':
            printf("odd\n");
            break;
            
            default:
            printf("Error\n");
            break;
        }
    }
    
    return 0;
}
