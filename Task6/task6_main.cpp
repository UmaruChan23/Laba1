#include <iostream>
#include <cmath>

using namespace std;

extern double x;
extern double result;

extern void calculate();

int main() {
    cout << "x = " << x << endl;
    calculate();
    cout << round(result * 10000) / 10000 << endl;
    cout << "Vvod x:";
    cin >> x;
    calculate();
    cout << round(result * 10000) / 10000 << endl;
    system("PAUSE");
    return 0;
}