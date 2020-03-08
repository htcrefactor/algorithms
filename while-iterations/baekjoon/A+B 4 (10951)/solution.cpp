#include <iostream>

int main(int argc, char* argv[]) {
    int a = 0, b = 0;

    while(true) {
        std::cin >> a >> b;
        if(std::cin.eof()) {
            break;
        }

        else {
            std::cout << a + b << "\n";
        }
    }

    //std::cout << "EOF\n";
    return 0;
}