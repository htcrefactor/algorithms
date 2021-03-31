#include <stdio.h>
#include <string.h>

int main() {
    int n = 0;
    scanf("%d", &n);
    
    int size = 0;
    int stack[100001];

    while(n--) {
        char inst[8] = {0};

        scanf("%s", inst);

        if(inst[0] == 's') { //SIZE
            printf("%d\n", size);
        } else if (inst[0] == 'e') { // EMPTY
            if(size > 0) {
                printf("0\n");
            } else {
                printf("1\n");
            }
        } else if (inst[0] == 't') { // TOP
            if(size > 0) {
                printf("%d\n", stack[size - 1]);
            } else {
                printf("-1\n");
            }
        } else if (inst[1] == 'u') { // PUSH
            int buffer = 0;
            scanf("%d", &buffer);
            stack[size] = buffer;
            size++;
        } else { // POP
            if(size > 0) {
                printf("%d\n", stack[size - 1]);
                stack[size - 1] = 0;
                size--;
            } else {
                printf("-1\n");
            }
        }
        
    }

    return 0;
}
