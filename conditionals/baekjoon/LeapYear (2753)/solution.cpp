#include <iostream>

int main(int argc, char* argv[]) {
    int year = 0;
    std::cin >> year;

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        std::cout << "1";
    }

    else {
        std::cout << "0";
    }

    return 0;
}