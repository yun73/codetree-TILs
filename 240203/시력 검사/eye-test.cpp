#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    double  left, right;
    cin >> left >> right;

    if ( left >= 1.0 && right >= 1.0) {
        cout << "High";
    } else if  ( left >= 0.5 && right >= 0.5) {
        cout << "Middle";
    } else {
        cout << "Low";
    }

    return 0;
}