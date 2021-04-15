#include <iostream>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    if(0 <= k && k <= n) {
        int result = 1;
        for(int i = n ; i > n - k ; i--) {
            result = result * i;
        }

        for(int i = k ; i > 0 ; i--) {
            result = result / i;
        }

        cout << result << "\n";
    } else if (k < 0) {
        cout << "0\n";
    } else if(k > n) {
        cout << "0\n";
    } else {
        cout << "Undefined Behavior\n";
    }
    
    return 0;
}