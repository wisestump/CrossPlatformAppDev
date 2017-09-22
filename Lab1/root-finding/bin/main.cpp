#include <cmath>
#include <iostream>

#include "../lib/root_finding.h"

double f1(double x)
{
    return x + log(x + 0.5) - 0.5;
}

double f1d(double x)
{
  return 1 + (1 / (x + 0.5));
}

int main()
{
    std::cout << "bisection: " << bisection(f1, 0, 3) << std::endl;
    std::cout << "newton: " << Newton(f1, f1d, 0, 3) << '\n';
}
