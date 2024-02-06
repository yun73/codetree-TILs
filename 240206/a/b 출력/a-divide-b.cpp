#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a,b,tmp;
    cin >> a >> b;
    tmp = (a % b)*10;
    a /= b;
    cout << a << "." ;

    for (int i = 1; i <=20;i++) {
        cout << tmp/b;
        tmp = (tmp%b)*10;
    }
    

    return 0;
}