#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        int h, w, n;
        cin >> h >> w >> n;

        // n = y + h(x - 1)
        // x = (n - y) / h + 1
        // y = n - h(x-1)
        int y = n % h;
        int x = n / h + 1;

        if(y == 0) {
            y = h;
            x = x - 1;
        }
        
        int result = 100 * y + x;

        cout << result << "\n";
    }

    return 0;
}
