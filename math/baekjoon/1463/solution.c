#include <stdio.h>
#include <stdlib.h>

int min(int new, int old) {
    if (old == 0) return new;
    
    if (new < old) return new;
    else return old;
}

int main() {
    int n = 0;
    scanf("%d", &n);
    
    int* array = (int*)calloc(n + 1, sizeof(int));
    
    array[1] = 1;

    int index = 1;
    while (index < n) {
        if (array[index] != 0) {
            if (index * 3 <= n) array[index * 3] = min(array[index] + 1, array[index * 3]);
            if (index * 2 <= n) array[index * 2] = min(array[index] + 1, array[index * 2]);
            if (index + 1 <= n) array[index + 1] = min(array[index] + 1, array[index + 1]);
        }
        
        index = index + 1;
    }
    
    printf("%d\n", array[n] - 1);
    
    free(array);
    
    return 0;
}
