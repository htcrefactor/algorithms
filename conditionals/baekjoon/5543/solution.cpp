#include <iostream>

using namespace std;

int minPrice (int minPrice, int menus);

int main (int argc, char* argv[]) {
    int minBurgerPrice = 10000, minDrinkPrice = 10000;

    minBurgerPrice = minPrice(minBurgerPrice, 3);
    minDrinkPrice = minPrice(minDrinkPrice, 2);

    int minSetPrice = minBurgerPrice + minDrinkPrice - 50;

    cout << minSetPrice;

    return 0;
}

int minPrice (int minPrice, int menus) {
    for(int i = 0 ; i < menus ; i++) {
        int Price = 0;
        cin >> Price;

        if(minPrice > Price) {
            minPrice = Price;
        }
    }

    return minPrice;
}