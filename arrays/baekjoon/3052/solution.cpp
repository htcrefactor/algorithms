#include <iostream>

using namespace std;

int main(int argc, char* argv[]) {
    int numbers[10] = {0};
    int modulo[42] = {0};
    int counter = 0;

    for(int i = 0 ; i < 10 ; i++) {
        scanf("%d", &numbers[i]);

        if(modulo[numbers[i] % 42] == 0) {
            modulo[numbers[i] % 42] = 1;
            counter = counter + 1;
        }        
    }

    printf("%d", counter);

    return 0;
}