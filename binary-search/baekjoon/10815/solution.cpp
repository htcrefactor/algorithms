#include <iostream>
#include <algorithm>

int numbers[500001] = {0};

using namespace std;

int main(void)
{
    std::ios::sync_with_stdio(false);

    int n = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> numbers[i];
    }

    sort(numbers, numbers + n);

    int m = 0;
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        int key = 0;
        cin >> key;
        if (binary_search(numbers, numbers + n, key))
            printf("1 ");
        else
            printf("0 ");
    }

    return 0;
}