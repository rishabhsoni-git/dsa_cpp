#include <iostream>
#include <utility>
#include <vector>

// Brute-force search; works for any input order. O(n^2) time, O(1) space.
std::pair<int, int> pairSumBruteForce(const std::vector<int>& values, int target) {
    for (int left = 0; left < static_cast<int>(values.size()); ++left) {
        for (int right = left + 1; right < static_cast<int>(values.size()); ++right) {
            if (static_cast<long long>(values[left]) + values[right] == target) {
                return {left, right};
            }
        }
    }
    return {-1, -1};
}

// Two pointers are O(n) time and O(1) space, but require sorted input.
// Returned indices refer to the sorted vector passed to this function.
std::pair<int, int> pairSumSorted(const std::vector<int>& sortedValues, int target) {
    int left = 0;
    int right = static_cast<int>(sortedValues.size()) - 1;

    while (left < right) {
        const long long currentSum =
            static_cast<long long>(sortedValues[left]) + sortedValues[right];
        if (currentSum == target) {
            return {left, right};
        }
        if (currentSum < target) {
            ++left;
        } else {
            --right;
        }
    }
    return {-1, -1};
}

int main() {
    const std::vector<int> sortedValues{2, 6, 10, 13, 16};
    const int target = 29;
    const auto result = pairSumSorted(sortedValues, target);

    if (result.first == -1) {
        std::cout << "No pair sums to " << target << ".\n";
    } else {
        std::cout << "Indices " << result.first << " and " << result.second
                  << " contain " << sortedValues[result.first] << " + "
                  << sortedValues[result.second] << " = " << target << ".\n";
    }
}
