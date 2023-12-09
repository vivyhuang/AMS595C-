
#include "pi_approx.h"

struct PiResults {
    double approx;
    double error;
};

PiResults pi_approx(int N) {
    PiResults result;

    // initial values
    double sum = 0.0;
    double delta_x = 1.0 / N;

    // implement both formulas
    for (int k = 1; k <= N; ++k) {
        double x_k_1 = (k - 1) * delta_x;
        double x_k = k * delta_x;

        sum += 0.5 * delta_x * (sqrt(1 - pow(x_k_1, 2)) + sqrt(1 - pow(x_k,2)));
    }

    result.approx = sum * 4.0;
    double actual_pi = M_PI;
    result.error = std::abs(actual_pi - result.approx);

    return result;
}