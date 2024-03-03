#include <iostream>
using namespace std;

int main() {
    
    int n, room =0 ,pass = 0,bath=0;

    cin >> n;

    for (int i = 1; i <= n;i++) {
        if ( i%12 == 0) {
            bath++;
        } else if ( i%3 == 0) {
            pass++;
        } else if ( i%2 == 0) {
            room++;
        }
    }


    cout << room << " " << pass << " " << bath;

    return 0;
}