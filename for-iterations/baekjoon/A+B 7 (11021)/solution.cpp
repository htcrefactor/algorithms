#include <iostream>

int main(int argc, char* argv[]) {
    int cases = 0;
    std::cin >> cases;

    for(int i = 0 ; i < cases ; i++) {
        int a = 0, b = 0;
        std::cin >> a >> b;

        std::cout << "Case #" << i + 1 << ": ";
        std::cout << a + b << "\n";
    }

    return 0;
}