#include <iostream>

using namespace std;

int factorial(int n);

int main(int argc, char* argv[]) {
    int numberInput;
    cin >> numberInput;

    int result = factorial(numberInput);

    return 0;
}

int factorial(int n) {
    if(n == 0) {
        return 1;
    }

    else if(n == 1) {
        return 1;
    }

    else {
        return factorial(n-1) * n;
    }    
}