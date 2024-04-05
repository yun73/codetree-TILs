#include <iostream>
using namespace std;

int main() {
    
    int n;
    cin >> n;

    int res = 0;
    for (int i=1; i < n; i++) {
        if (n%i != 0)
            continue;
        res += i;
    }


    if (res==n) {
        cout << 'P';
    } else {
        cout << 'N';
    }

    return 0;
}