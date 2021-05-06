#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int a, b, v;
    cin >> a >> b >> v;
    
    v = v - a;
    double v_double = (double)v;
    cout << int(ceil(v_double / double(a - b)) + 1) << "\n";
    
    return 0;    
}
