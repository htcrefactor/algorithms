#include <iostream>
#include <string.h>

using namespace std;

int main(int argc, char* argv[]) {
    char stringInput[1000000] = {};
    cin >> stringInput;
    int stringLength = strlen(stringInput);

    int alphabetCounter[27] = {};

    //Changes everything to uppercase
    for(int i = 0 ; i < stringLength ; i++) {
        if((int)stringInput[i] >= 97) {
            stringInput[i] = stringInput[i] - 32;
        }
    }

    //(int)A = (int)a = 65
    int maxCounter = 0; //Counts how many times the alphabet with maximum frequency appears in given string 
    int maxIndex = -1; //Saves the alphabet with maximum frequency
    int isThereMultipleMax = 0; // 1 == TRUE (meaning there are multiple maximum frequency alphabets)
    //Finding the most frequently used alphabet
    for(int i = 0 ; i < stringLength ; i++) {
        int charAsInt = (int)stringInput[i]; //(int)A = (int)a = 65
        charAsInt = charAsInt - 64; //(int)A = (int)a = 1
        
        alphabetCounter[charAsInt] = alphabetCounter[charAsInt] + 1;

        if(alphabetCounter[charAsInt] == maxCounter) {
            isThereMultipleMax = 1;
        }

        else if (alphabetCounter[charAsInt] > maxCounter) {
            isThereMultipleMax = 0;
            maxIndex = charAsInt; //(int)A = (int)a = 1
            maxCounter = alphabetCounter[charAsInt];
        }
    }

    if(isThereMultipleMax == 1) {
        cout << "?";
    }

    else {
        cout << (char)(maxIndex + 64); //(int)A = (int)a = 65
    }

    return 0;
}
