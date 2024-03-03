#include <iostream>
using namespace std;

int main() {

    int num,cnt_x3 = 0, cnt_x5 = 0;

    for (int i = 1; i <= 10; i++) {
        cin >> num;

        if (num % 3 == 0) {
            cnt_x3 += 1;
        }

        if (num % 5 == 0) {
            cnt_x5 += 1;
        }
    }

    cout << cnt_x3 << " " << cnt_x5;

    return 0;
}