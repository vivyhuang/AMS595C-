#include <iostream>
#include <vector>

// Include headers
#include "pi_approx.h"
#include "approximations.h"

int main() {

    // Question 1

    int N = 10000;
    PiResults Q1results = pi_approx(N);
    // Output
    std::cout << "Question 1 Approximation: " << Q1results.approx << ", Error: " << Q1results.error << std::endl;

    // Question 2

    std::vector<int> intervals = {10, 100, 1000, 10000, 100000, 1000000, 10000000};
    // Array of approximations
    std::vector<double> Q2Results = approximations(intervals);
    
    // Output the elements of array
    for (size_t i = 0; i < intervals.size(); ++i) {
        std::cout << "N = " << intervals[i] << ", Results: " << Q2Results[i] << std::endl;
    }
}