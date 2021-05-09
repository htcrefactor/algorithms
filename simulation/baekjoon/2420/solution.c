#include <stdio.h>

int main() {
    long long m, n;
    scanf("%lld %lld", &m, &n);

    long long diff = n - m;
    if (diff < 0) diff = -diff;

    printf("%lld\n", diff);

    return 0;
}
