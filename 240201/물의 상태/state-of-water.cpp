#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;

    if (n < 0) {
        cout << "ice";
    } else if ( n >= 100) {
        cout << "vapor";
    } else {
        cout << "water";
    }
    return 0;
}