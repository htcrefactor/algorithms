#include <iostream>

using namespace std;

int main(int argc, char* argv[]) {
    string inputString;
    cin >> inputString;
    int inputStringLength = inputString.length();

    int estimatedTime = 0;
    for(int i = 0 ; i < inputStringLength ; i++) {
        int currentLetterAsInt = (int)inputString[i] - 65; //A = 0
        if(currentLetterAsInt >= 18) { //S = 18 ~ Z = 25 -> S = 17 ~ Z = 24
          currentLetterAsInt = currentLetterAsInt - 1;
        }

        if(currentLetterAsInt == 24) { //Z = 24 -> Z = 23
          currentLetterAsInt = currentLetterAsInt - 1;
        }

        estimatedTime = estimatedTime + currentLetterAsInt / 3 + 3;
    }

    cout << estimatedTime;

    return 0;
}