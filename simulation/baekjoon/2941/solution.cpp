#include <iostream>

using namespace std;

int main(int argc, char* argv[]) {
    string inputString;
    cin >> inputString;
    int inputStringLength = inputString.length();

    int alphabetCount = 0;
    int index = 0;
    for(index = 0 ; index < inputStringLength ; index++) {
        if(inputString[index] == 'c') {
            if(inputString[index+1] == '=') {
                index = index + 1;
            }
            
            else if(inputString[index+1] == '-') {
                index = index + 1;
            }

            else {

            }
        }

        else if(inputString[index] == 'd') {
            if(inputString[index+1] == 'z') {
                if(inputString[index+2] == '=') {
                    index = index + 2;
                }
            }

            else if(inputString[index+1] == '-') {
                index = index + 1;
            }

            else {

            }
        }

        else if(inputString[index] == 'l') {
            if(inputString[index+1] == 'j') {
                index = index + 1;
            }

        }

        else if(inputString[index] == 'n') {
            if(inputString[index+1] == 'j') {
                index = index + 1;
            }

        }

        else if(inputString[index] == 's') {
            if(inputString[index+1] == '=') {
                index = index + 1;
            }

        } 

        else if(inputString[index] == 'z') {
            if(inputString[index+1] == '=') {
                index = index + 1;
            }

        }

        else {

        }

        alphabetCount = alphabetCount + 1;
    }

    cout << alphabetCount;

    return 0;
}
