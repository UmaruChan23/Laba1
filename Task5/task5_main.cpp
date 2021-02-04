#include <iostream>
#include <cmath>

using namespace std;

double calculate(double x);

int main() {
    double x = 5;
    cout << "x = " << x << endl;
    double result = calculate(x);
    cout << round(result * 10000) / 10000 << endl;
    cout << "Vvod x:";
    cin >> x;
    result = calculate(x);
    cout << round(result * 10000) / 10000 << endl;
    system("PAUSE");
    return 0;
}

