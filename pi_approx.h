// pi_approx.h

#ifndef PI_APPROX_H
#define PI_APPROX_H

#include <cmath>

struct PiResults {
    double approx;
    double error;
};

PiResults pi_approx(int N);

#endif // PI_APPROX_H