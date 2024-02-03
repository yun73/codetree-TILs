#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int y;
    cin >> y;

    if ( y %4 != 0 || (y %4 == 0 && y % 100 ==0)) {
        cout << "false";
    } else {
        cout << "true";
    }
        
    
    return 0;
}