#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int m;
    cin >> m;

    if ( m >=3 && m <=5) {
        cout << "Spring";
    } else if (  m >=6 && m <=8 ) {
        cout << "Summer";
    } else if ( m >=9 && m <=11) {
        cout << "Fall";
    } else {
        cout << "Winter";
    }

    return 0;
}