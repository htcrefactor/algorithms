#include <stdio.h>

int stones[100000] = {0};
int visited[100000] = {0};

int count = 0;

void jump(int n, int s);

int main() {
    int n = 0;
    scanf("%d", &n);

    for (size_t index = 0 ; index < n ; index++) {
        scanf("%d", &stones[index]);
    }

    int s = 0;
    scanf("%d", &s);

    jump(n, s - 1);

    printf("%d\n", count);

    return 0;
}

void jump(int n, int s) {
    count++;
    visited[s] = 1;
    int upward = s + stones[s];
    int downward = s - stones[s];

    if (0 <= downward && visited[downward] == 0) jump(n, downward);
    if (upward < n && visited[upward] == 0) jump(n, upward);
}
