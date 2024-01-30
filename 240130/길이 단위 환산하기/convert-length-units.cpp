#include <iostream>
using namespace std;

int main() {

    double length, ft = 30.48;
    cin >> length;

    cout << fixed;
    cout.precision(1);

    cout << length*ft;

    return 0;
}