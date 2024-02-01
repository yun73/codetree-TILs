#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.

    int h, w ;
    cin >> h >> w;

    int bmi = w /((h*0.01)*(h*0.01));
    cout << fixed;
    cout.precision(0);
    cout << bmi << endl;

    if (bmi >= 25) {
        cout << "Obesity";
    } 

    return 0;
}