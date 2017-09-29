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

double Newton(func f, func fd, double a, double b, double tolerance, double eps)
{
  double x0 = (b - a) / 2, x1;
  int maxIter = 100;
  bool solutionFound = false;

  for (int i = 0; i < maxIter; i++)
  {
    double y = f(x0);
    double yprime = fd(x0);

    if (abs(yprime) < eps) {
      break;
    }

    x1 = x0 - y / yprime;

    if (abs(x1 - x0) <= (tolerance + abs(x1)))
    {
      solutionFound = true;
      break;
    }

    x0 = x1;
  }

  if (solutionFound)
    return x1;
  else
    throw "Did not find a solution";
}
