#include <cmath>
#include "head.h"

double x = 5;
double result;

void calculate() {
    result = ((x + 2) / (sqrt(2 * x)) - (x / (sqrt(2 * x) + 2)) + (2 / (x - sqrt(2 * x)))) *
             (sqrt(x) - sqrt(2)) / (x + 2);
}

