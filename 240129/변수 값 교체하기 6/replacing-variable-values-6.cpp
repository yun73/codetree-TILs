#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.

    int a = 2, b = 5;

    int Temp = b;
    b = a;
    a = Temp;

    cout << a << endl << b;

    return 0;
}