#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double x = 5;
    double result;
    cout << "x = " << x << endl;
    result = ((x + 2) / (sqrt(2 * x)) - (x / (sqrt(2 * x) + 2)) + (2 / (x - sqrt(2 * x)))) * (sqrt(x) - sqrt(2)) /
             (x + 2);
    cout << round(result * 10000) / 10000 << endl;
    cout << "Vvod x:";
    cin >> x;
    result = ((x + 2) / (sqrt(2 * x)) - (x / (sqrt(2 * x) + 2)) + (2 / (x - sqrt(2 * x)))) * (sqrt(x) - sqrt(2)) /
             (x + 2);
    cout << round(result * 10000) / 10000;
    return 0;
}