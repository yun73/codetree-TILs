#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a;
    cin >> a;

    if ( ~a%13 || ~a%19 ) {
        cout << "True";
    } else {
        cout << "False";
    }

    return 0;
}