#include <iostream>

using namespace std;

int main(int argc, char* argv[]) {
    int num1, num2 = 0;
    cin >> num1 >> num2;

    int num3, num4, num5, num6 = 0;
    num3 = num1 * (num2 % 10);
    num4 = num1 * ((num2 / 10) % 10);
    num5 = num1 * (num2 / 100);
    num6 = num1 * num2;

    cout << num3 << "\n";
    cout << num4 << "\n";
    cout << num5 << "\n";
    cout << num6 << "\n";

    return 0;
}