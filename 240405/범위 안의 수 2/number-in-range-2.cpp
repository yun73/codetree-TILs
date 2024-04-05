#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int total = 0, cnt = 0;

    for (int i=1 ; i<=10 ;i++){
        int tmp;
        cin >> tmp;
        if (tmp <0 || tmp > 200) {
            continue;
        }
        cnt += 1;
        total += tmp;
    }

    cout << total<< " ";

    cout<<fixed;
    cout.precision(1);

    double avg = double(total) / cnt;

    cout << avg;

    return 0;
}