#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;

    for ( int i=1;i<=n ; i++) {
        int t;
        cin >> t;
        if (t % 2 == 1 && t % 3 ==0) {
            cout << t << endl;
        }
    }


    return 0;
}