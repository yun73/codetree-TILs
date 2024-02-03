#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a,b,c;
    cin >> a >> b >> c;

    int min_num = 101;
    
    if ( a <= min_num) {
        min_num = a;
    }

     if ( b <= min_num) {
        min_num = b;
    }

     if ( c <= min_num) {
        min_num = c;
    }

    cout << min_num;


    return 0;
}