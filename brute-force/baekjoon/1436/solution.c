#include <stdio.h>

int check(int n);

int main() {
    int n;
    scanf("%d", &n);
    
    int counter = 1;
    int answer = 0;
    int title = 666;
    while(counter != n) {
        title++;
        if(check(title) == 1) {
            counter++;
        }
    }
    
    answer = title;
    
    printf("%d\n", answer);
    
    return 0;
}

int check(int n) {
    int stack = 0;
    while(n != 0) {
        if (n % 10 == 6) {
            stack++;
        } else {
            stack = 0;
        }
        
        n = n / 10;
        
        if(3 <= stack) return 1;
    }
    
    return 0;
}
