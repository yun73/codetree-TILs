#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;

    if ( n <= 7) {
        if ( n % 2 != 0) {
            cout << 31;
        } else if ( n == 2) {
            cout << 28;
        } else {
            cout << 30;
        }
    } else{
        if ( n % 2 != 0) {
            cout << 30;
        } else {
            cout << 31;
        }
    }

    return 0;
}