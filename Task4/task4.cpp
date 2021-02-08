#include <iostream>
#include <cmath>

using namespace std;

double x = 5;
double result;

void calculate();

int main() {
    cout << "x = " << x << endl;
    calculate();
    cout << round(result * 10000) / 10000 << endl;
    cout << "Vvod x:";
    cin >> x;
    calculate();
    cout << round(result * 10000) / 10000;
    return 0;
}

void calculate() {
    result = ((x + 2) / (sqrt(2 * x)) - (x / (sqrt(2 * x) + 2)) + (2 / (x - sqrt(2 * x)))) *
             (sqrt(x) - sqrt(2)) / (x + 2);
}
