#include <iostream>
using namespace std;

int main() {
    int a,b;
    cin >> a >> b;

    int sum = 0,cnt = 0;

    for (int i = a; i <=b ; i++) {
        if (i%5==0 or i%7==0) {
            sum += i;
            cnt++;
        }
    }

    cout << sum << " ";
    cout << fixed;
    cout.precision(1);
    cout << sum / double(cnt);
    

    return 0;
}