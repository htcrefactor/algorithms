// #define ARR_SIZE 1048576

// #include <stdio.h>

// int numbers[ARR_SIZE] = {0};

// int main(void) {
//     int n = 0;
//     scanf("%d", &n);

//     for (int count = 0 ; count < n ; count++) {
//         int index = 0;
//         scanf("%d", &index);

//         numbers[index] = 1;
//     }

//     for (int index = 0 ; index < ARR_SIZE ; index++) {
//         if (numbers[index] == 1) {
//             printf("%d\n", index);
//             n = n - 1;

//             if (n == 0) break;
//         }
//     }

//     return 0;
// }

#include <stdio.h>
#include <stdlib.h>

int compare (const void * a, const void* b) {
    return (*(int*)a - *(int*)b);
}

int main (void) {
    int n = 0;
    scanf("%d", &n);
    
    int *numbers = (int *)calloc(n, sizeof(int));
    for (int i = 0 ; i < n ; i++) {
        int temp = 0;
        scanf("%d", &temp);
        
        numbers[i] = temp;
    }
    
    qsort(numbers, n, sizeof(int), compare);
    
    for (int i = 0 ; i < n ; i++) {
        printf("%d\n", numbers[i]);
    }
    
    return 0;
}
