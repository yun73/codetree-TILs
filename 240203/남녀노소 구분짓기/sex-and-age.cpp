#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int gen, age;
    cin >> gen >> age;   

    if (age >=19) {
        if (gen == 0) {
            cout << "MAN";
        } else {
            cout << "WOMAN";
        }
    } else {
         if (gen == 0) {
            cout << "BOY";
        } else {
            cout << "GIRL";
        }
    }

    return 0;
}