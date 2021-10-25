#include <stdio.h>

int item[10000001] = {0};

int main() {
    int n = 0;
    scanf("%d", &n);

    int m = 0;
    scanf("%d", &m);

    while(n--) {
        int temp = 0;
        scanf("%d", &temp);
        item[temp]++;
    }

    int armors = 0;
    if (m % 2 == 0) {
        for(int i = 0 ; i < m / 2 ; i++) {
            armors += item[i] < item[m-i] ? item[i] : item[m-i];
        }

        armors += item[m / 2] / 2;
    } else {
        for(int i = 0 ; i <= m / 2 ; i++) {
            armors += item[i] < item[m-i] ? item[i] : item[m-i];
        }
    }

    printf("%d\n", armors);

    return 0;
}
