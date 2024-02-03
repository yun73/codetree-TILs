#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a,b,c;
    cin >> a >> b >> c;

    int max = -101;
    
    if ( a >= max) {
        max = a;
    } 

    if ( b >= max) {
        max = b;
    } 
    
    if ( c >= max) {
        max = c;
    } 
    
    cout << max;

    return 0;
}