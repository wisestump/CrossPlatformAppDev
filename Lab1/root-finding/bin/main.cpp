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

double f2(double x)
{
  return pow(x, 5) - x - 0.2;
}

double f2d(double x)
{
  return 5 * pow(x, 4) - 1;
}

double f3(double x)
{
  return 2 / 3 * pow(sin(x), 2) - 3 / 4 * pow(cos(x), 2);
}

double f3d(double x)
{
  return 17.0 / 6.0 * sin(x) * cos(x);
}

int main()
{
  std::cout << "First function" << std::endl;
  std::cout << "bisection: " << bisection(f1, 0, 3) << std::endl;
  std::cout << "newton: " << Newton(f1, f1d, 0, 3) << std::endl;
  std::cout << std::endl;

  std::cout << "Second function" << std::endl;
  std::cout << "bisection: " << bisection(f2, 1, 11) << std::endl;
  std::cout << "newton: " << Newton(f2, f2d, 1, 11) << std::endl;
  std::cout << std::endl;

  std::cout << "Third function" << std::endl;
  std::cout << "bisection: " << bisection(f3, 0, M_PI / 2) << std::endl;
  std::cout << "newton: " << Newton(f3, f3d, 0, M_PI / 2) << std::endl;
}
