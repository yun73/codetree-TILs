#include <iostream>
using namespace std;

int main() {
    
    int weight = 13;
    double ratio = 0.165000;    

    cout << fixed;
    cout.precision(6);
    cout << weight << " * " << ratio << " = " << weight*ratio;

    return 0;
}