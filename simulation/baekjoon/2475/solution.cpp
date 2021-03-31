#include <iostream>

using namespace std;

int main() {
    int result = 0;
    int a, b, c, d, e;

    cin >> a >> b >> c >> d >> e;

    result = a * a + b * b + c * c + d * d + e * e;
    result = result % 10;

    cout << result;

    return 0;
}