#include <stdio.h>

int main() {
    int n = 0;
    scanf("%d", &n);

    int numbers[3000] = {0};
    while(n--) {
        int buffer = 0;
        scanf("%d", &buffer);
        buffer = buffer + 1500;
        numbers[buffer] = 1;
    }

    for(int i = 0 ; i <= 2999 ; i++) {
        if(numbers[i] != 0) printf("%d\n", i - 1500);
    }

    return 0;
}
