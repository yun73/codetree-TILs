#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int cnt = 0;
    int n;

    for (int i=1;i<=10;i++) {
        cin >> n;
        if (n%2==1) {
            cnt++;
        }
    }

    cout << cnt;
    
    return 0;
}