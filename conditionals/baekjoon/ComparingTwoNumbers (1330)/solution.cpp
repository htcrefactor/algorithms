#include <iostream>

int main(int argc, char* argv[]) {
    int a, b = 0;
    cin >> a >> b;

    if (a > b) {
        cout << ">";
    }

    elif (b < a) {
        cout << "<";
    }

    else {
        cout << "==";
    }

    return 0;
}