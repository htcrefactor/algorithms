#include <iostream>

using namespace std;

int main() {
    int hour, minute;

    cin >> hour;
    cin >> minute;

    if(minute >= 45) {
        minute -= 45;
    }

    else {
        if(hour == 0) {
            hour = 23;
        } else {
            hour -= 1;
        }
        
        minute = minute + 60 - 45;
    }

    cout << hour << " " << minute;

    return 0;
}