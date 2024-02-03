#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a,b,c;
    cin >> a >> b >> c;

    if ( a >= b) {
        if (a <= c) {
            cout << a;
        } else if ( b >= c) {
            cout << b;
        } else {
            cout << c;
        }
    } else {
        if (a >= c) {
            cout << a;
        } else if ( b >= c) {
            cout << c;
        } else {
            cout << b;
        }
    }


    return 0;
}