#include <iostream>
using namespace std;


int main() {
    // 여기에 코드를 작성해주세요.
    int a,n,i;
    cin >> a >> n;
    i = n;
    while (i > 0) {
        a += n;
        cout << a << endl;
        
        i--;
    }

    return 0;
}