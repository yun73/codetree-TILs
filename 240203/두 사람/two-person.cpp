#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int age1, age2;
    char gen1, gen2;

    cin >> age1 >> gen1;
    cin >> age2 >> gen2;

    if (((age1 >= 19) && (gen1 == 'M')) || ((age2 >= 19) && (gen2 == 'M')) ) {
        cout << 1;
    } else {
        cout << 0;
    }

    return 0;
}