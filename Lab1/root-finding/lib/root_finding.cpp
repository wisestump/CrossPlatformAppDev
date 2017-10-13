#include "root_finding.h"

int sign(double x)
{
    return (x > 0) - (x < 0);
}

double bisection(func f, double a, double b, double eps, int maxIter)
{
    int n = 1;
    while (n <= maxIter)
    {
        double c = (a + b) / 2;
        if ((f(c) == 0) || ((b - a) / 2 < eps))
            return c;

        n++;
        if (sign(f(c)) == sign(f(a)))
            a = c;
        else
            b = c;
    }
    throw "Max iter exceeded";
}

double Newton(func f, func fd, double a, double b, double eps)
{
  double x0 = (b - a) * 0.7;
  double x1  = x0 - f(x0)/fd(x0);
  while (abs(x1-x0)>eps) {
    x0 = x1;
    x1 = x1 - f(x1)/fd(x1);
  }
  return x1;
}
