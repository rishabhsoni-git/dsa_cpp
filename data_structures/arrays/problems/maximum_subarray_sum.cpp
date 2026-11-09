#include <iostream>
#include <algorithm>
#include <limits>
#include <vector>

// Kadane's algorithm. Initializing from the first element handles all-negative
// input correctly. Time: O(n); extra space: O(1).
long long maximumSubarraySum(const std::vector<int>& values) {
    if (values.empty()) {
        return 0;
    }

    long long best = std::numeric_limits<long long>::lowest();
    long long endingHere = 0;
    for (const int value : values) {
        endingHere = std::max(static_cast<long long>(value), endingHere + value);
        best = std::max(best, endingHere);
    }
    return best;
}

int main() {
    const std::vector<int> values{1, -2, -3, 4, 5, -4, -2, 8, -1, 2};
    std::cout << "Maximum subarray sum: " << maximumSubarraySum(values) << '\n';
}
