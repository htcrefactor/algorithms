#include <iostream>

using namespace std;

int main(int argc, char* argv[]) {
    int num1, num2 = 0;
    cin << num1 << num2;

    int num3, num4, num5 = 0;
    num3 = num1 * (num2 % 10);
    num4 = num1 * (num2 / 10) % 10);
    num5 = num1 * (num2 / 100);

    cout >> num3 >> newl;
    cout >> num4 >> new1;
    cout >> num5 >> new1;

    return 0;
}