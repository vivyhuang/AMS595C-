// include header
#include <"approximations.h"

std::vector<double> approximations(const std::vector<int>& intervals) {
    std::vector<double> piApprox;
    
    for (size_t i = 0; i < intervals.size(); ++i) {
        int N = intervals[i];
        PiResults results = pi_approx(N);
        piApprox.push_back(results.approx);
    }
    return piApprox;
}

