#include <stdio.h>

void fill_numbers(int n, int* numbers);
void move_numbers(int n, int* numbers);
void delete_numbers(int n, int* numbers);

int main() {
    int n = 0;
    scanf("%d", &n);
    int numbers[128] = {0};
    fill_numbers(n, numbers);

    while(numbers[2] != 0) {
        delete_numbers(n, numbers);
        move_numbers(n, numbers);
    }

    printf("%d\n", numbers[1]);

    return 0;
}

void fill_numbers(int n, int* numbers) {
    for(int i = 0 ; i <= n ; i++) {
        numbers[i] = i;
    }
}

void move_numbers(int n, int* numbers) {
    for(int i = 0 ; i <= n ; i++) {
        if(i % 2 == 0) {
            numbers[i/2] = numbers[i];
            numbers[i] = 0;
        }
    }
}

void delete_numbers(int n, int* numbers) {
    for(int i = 0 ; i <= n ; i++) {
        if(i % 2 == 1) numbers[i] = 0;
    }
}
