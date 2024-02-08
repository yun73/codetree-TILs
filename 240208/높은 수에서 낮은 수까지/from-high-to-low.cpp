#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a,b;

    cin >> a >> b;

    if ( a >= b) {
        for ( int i =a ; i >= b; i--) {
            cout << i << " ";
        }
    } else {
        for ( int i =b ; i >= a; i--) {
            cout << i << " ";
        }
    }

    return 0;
}