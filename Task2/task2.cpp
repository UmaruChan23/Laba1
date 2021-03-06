#include <iostream>
#include <cmath>

using namespace std;

double calculate(double x) {
    return ((x + 2) / (sqrt(2 * x)) - (x / (sqrt(2 * x) + 2)) + (2 / (x - sqrt(2 * x)))) *
           (sqrt(x) - sqrt(2)) / (x + 2);
}

int main() {
    double x = 5;
    cout << "x = " << x << endl;
    double result = calculate(x);
    cout << round(result * 10000) / 10000 << endl;
    cout << "Vvod x:";
    cin >> x;
    result = calculate(x);
    cout << round(result * 10000) / 10000;
    return 0;
}