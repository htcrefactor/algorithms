#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char* argv[]) {
    vector <int> numbers(10, 0);
    int maxValue = 0;
    int maxIndex = 0;

    for(int i = 1 ; i <= 9 ; i++) {
        cin >> numbers[i];
        
        if(numbers[i] > maxValue) {
            maxValue = numbers[i];
            maxIndex = i;
        }
    }

    cout << maxValue << "\n" << maxIndex;

    return 0;
}
