#include <iostream>

using namespace std;

int main(int argc, char* argv[]) {
    int n, m;
    cin >> n >> m;

    long long int result = 1;

    if(n != 0) {
        while(n--) {
            int temp = 0;
            cin >> temp;

            if(temp == 0) {
                temp = 1;
            }

            result = result * temp;
        }
    }

    cout << result % m;

    return 0;
}