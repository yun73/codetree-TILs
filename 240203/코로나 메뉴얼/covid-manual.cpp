#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    char c;
    int t;
    int A, B, C, D;
    A=B=C=D=0;
    cin >> c >> t;
    if ( c == 'Y') {
        if ( t >= 37 ) {
            A += 1;
        } else {
            C += 1;
        }
    } else {
        if ( t >= 37 ) {
            B += 1;
        } else {
            D += 1;
        }
    }
    cin >> c >> t;
    if ( c == 'Y') {
        if ( t >= 37 ) {
            A += 1;
        } else {
            C += 1;
        }
    } else {
        if ( t >= 37 ) {
            B += 1;
        } else {
            D += 1;
        }
    }
    cin >> c >> t;
    if ( c == 'Y') {
        if ( t >= 37 ) {
            A += 1;
        } else {
            C += 1;
        }
    } else {
        if ( t >= 37 ) {
            B += 1;
        } else {
            D += 1;
        }
    }

    if (A >= 2) {
        cout << "E";
    } else {
        cout << "N";
    }

    return 0;
}