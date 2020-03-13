#include <iostream>

using namespace std;

struct people {
    int weight;
    int height;
    int ranking;
};

int main(int argc, char* argv[]) {
    int n = 0;
    cin >> n;

    people peoples[n];

    for(int i = 0 ; i < n ; i++) {
        cin >> peoples[i].weight >> peoples[i].height;
    }

    for(int i = 0 ; i < n ; i++) {
        int currentWeight = peoples[i].weight;
        int currentHeight = peoples[i].height;

        int ranking = 1;
        for(int j = 0 ; j < n ; j++) {
            if(currentWeight < peoples[j].weight && currentHeight < peoples[j].height) {
                ranking = ranking + 1;
            }            
        }
        peoples[i].ranking = ranking;
    }

    for(int i = 0 ; i < n ; i++) {
        cout << peoples[i].ranking << " ";
    }

    return 0;
}