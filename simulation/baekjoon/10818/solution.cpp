#include <iostream>

using namespace std;

int main(int argc, char* argv[]) {
    int cases = 0;
    cin >> cases;

    int min = 1000000;
    int max = -1000000;

    for(int i = 0 ; i < cases ; i++) {
        int input = 0;
        cin >> input;

        if(input > max) {
            max = input;
        }

        if(input < min) {
            min = input;
        }
    }

    cout << min << " " << max;

    return 0;
}
