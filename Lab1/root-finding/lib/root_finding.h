#ifndef ROOTFINDING_H
#define ROOTFINDING_H

#include <stdlib.h>
#include <iostream>
#include <cmath>

typedef double (*func)(double);

int sign(double x);
double bisection(func f, double a, double b, double eps = 0.0001, int maxIter = 1000);
double Newton(func f, func fd, double a, double b, double eps = 1e-7);
double Chord(func f, double a, double b, double eps = 1e-7);

 #endif
