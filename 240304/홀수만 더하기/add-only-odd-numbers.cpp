#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;

    int sum = 0;

    for (int i=1;i<=n;i++){
        int num;
        cin >> num;
        if (num%2==1 and num%3 == 0) {
            sum += num;
        }
    }

    cout << sum;

    return 0;
}