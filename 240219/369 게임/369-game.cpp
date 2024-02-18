#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) {


        if (i % 3 == 0) {
            cout << 0 << " ";
            continue;
        }

        int j = i;
        int cnt = 0;
        while ( j > 0) {
             //  현재 수를 10으로 나눈 나머지 == 현재 판별할 수
            if (j % 10 == 3 || j % 10 == 6 ||  j % 10 == 9 ) {
                cnt += 1;
            }

            j /= 10; // 현재 수를 10으로 나눈 몫 == 다음 수
        }

        if ( cnt > 0) {
            cout << 0 << " ";
        } else {
            cout << i << " ";
        }
    }

    return 0;
}