#include <stdio.h>

int main() {
    size_t n = 0, m = 0;
    scanf("%zd%zd", &n, &m);

    int rows[50] = {0};
    int cols[50] = {0};

    char temp = 0;
    scanf("%c", &temp);
    for (size_t row = 0 ; row < n ; row++) {
        for (size_t col = 0 ; col < m ; col++) {
            scanf("%c", &temp);
            if (temp == 'X') {
                rows[row] = 1;
                cols[col] = 1;
            }
            
        }
        scanf("%c", &temp);
    }

    size_t max = n < m ? m : n;
    int guards = 0;
    for (size_t row = 0 ; row < n ; row++) {
        for (size_t col = 0 ; col < m ; col++) {
            if (rows[row] == 0 && cols[col] == 0) {
                guards++;
                rows[row] = 1;
                cols[col] = 1;
            }
        }
    }

    for (size_t row = 0 ; row < n ; row++) {
        if (rows[row] == 0) {
            guards++;
            rows[row] = 1;    
        }
    }
    
    for (size_t col = 0 ; col < m ; col++) {
        if (cols[col] == 0) {
            guards++;
            cols[col] = 1;    
        }
    }

    printf("%d\n", guards);

    return 0;
}
