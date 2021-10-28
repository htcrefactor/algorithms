#include <iostream>
#include <cmath>

using namespace std;

int main(void) {
    int a, b, c;
    cin >> a >> b >> c;

    int profit = c - b;
    if(profit <= 0) {
        cout << "-1";
    } else {
        int result = int(floor((double(a) / double(profit)) + 1));
        cout << result;
    }

    return 0;
}
