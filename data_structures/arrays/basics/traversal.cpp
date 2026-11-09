#include <array>
#include <iostream>

// Visit each element exactly once: O(n) time and O(1) extra space.
int main() {
    const std::array<int, 5> values{12, 4, 8, 3, 10};

    for (std::size_t index = 0; index < values.size(); ++index) {
        std::cout << "values[" << index << "] = " << values[index] << '\n';
    }

    // Range-based for is convenient when the index is not needed.
    std::cout << "All values: ";
    for (const int value : values) {
        std::cout << value << ' ';
    }
    std::cout << '\n';
}
