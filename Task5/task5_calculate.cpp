#include <cmath>

using namespace std;

double calculate(double x) {
    return ((x + 2) / (sqrt(2 * x)) - (x / (sqrt(2 * x) + 2)) + (2 / (x - sqrt(2 * x)))) *
           (sqrt(x) - sqrt(2)) / (x + 2);
}
