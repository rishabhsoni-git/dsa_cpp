#include <iostream>
#include <optional>
#include <vector>

// Find a value occurring more than n/2 times, if one exists.
// Boyer-Moore voting is O(n) time and O(1) extra space; a verification
// pass is required because the input is not guaranteed to have a majority.
std::optional<int> majorityElement(const std::vector<int>& values) {
    if (values.empty()) {
        return std::nullopt;
    }
    int candidate = 0;
    int votes = 0;

    for (const int value : values) {
        if (votes == 0) {
            candidate = value;
        }
        votes += (value == candidate) ? 1 : -1;
    }

    int occurrences = 0;
    for (const int value : values) {
        occurrences += (value == candidate);
    }
    if (occurrences > static_cast<int>(values.size()) / 2) {
        return candidate;
    }
    return std::nullopt;
}

int main() {
    const std::vector<int> values{2, 1, 2, 2, 3, 2, 2};
    const std::optional<int> result = majorityElement(values);

    if (!result.has_value()) {
        std::cout << "No majority element.\n";
    } else {
        std::cout << "Majority element: " << *result << '\n';
    }
}
