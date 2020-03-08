#include <iostream>

int main(int argc, char* argv[]) {
    int cases = 0;
    std::cin >> cases;

    while(cases--) {
        int a = 0, b = 0;
        std::cin >> a >> b;

        std::cout << a + b << "\n";
    }

    return 0;
}