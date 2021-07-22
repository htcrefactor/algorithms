#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n = 0, m = 0, k = 0;
    
    scanf("%d", &n);
    scanf("%d", &m);
    
    // Allocate arr1
    int** arr1 = (int**)malloc(sizeof(int*) * n);
    for(int row = 0 ; row < n ; row++) {
        arr1[row] = (int*)malloc(sizeof(int) * m);
    }
    
    // Read arr1
    for(int row = 0 ; row < n ; row++){
        for(int col = 0 ; col < m ; col++) {
            scanf("%d", &arr1[row][col]);
        }
    }

    scanf("%d", &m);
    scanf("%d", &k);
    
    // Allocate arr2
    int** arr2 = (int**)malloc(sizeof(int*) * m);
    for(int row = 0 ; row < m ; row++) {
        arr2[row] = (int*)malloc(sizeof(int) * k);
    }

    // Read arr2
    for(int row = 0 ; row < m ; row++){
        for(int col = 0 ; col < k ; col++) {
            scanf("%d", &arr2[row][col]);
        }
    }
    
    // Allocate arr3
    int** arr3 = (int**)malloc(sizeof(int*) * n);
    for (int row = 0 ; row < n ; row++) {
        arr3[row] = (int*)malloc(sizeof(int) * k);
    }
    
    // Calculate arr1 * arr2 and save to arr3
    for (int row = 0 ; row < n ; row++) {
        for (int col = 0 ; col < k ; col++) {
            arr3[row][col] = 0;
            for (int multiplications = 0 ; multiplications < m ; multiplications++) {
                arr3[row][col] = arr3[row][col] + arr1[row][multiplications] * arr2[multiplications][col];
            }
        }
    }
    
    // Print arr3
    for(int row = 0 ; row < n ; row++){
        for(int col = 0 ; col < k ; col++) {
            printf("%d ", arr3[row][col]);
        }
        printf("\n");
    }
    
    // Free arr1
    for(int row = 0 ; row < n ; row++) {
        free(arr1[row]);
    }
    
    // Free arr2
    for(int row = 0 ; row < m ; row++) {
        free(arr2[row]);
    }
    
    // Free arr3
    for(int row = 0 ; row < n ; row++) {
        free(arr3[row]);
    }
    
    return 0;
}
