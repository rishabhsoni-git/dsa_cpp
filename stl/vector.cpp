#include <iostream>
#include <vector>

// A vector is a dynamically-sized, contiguous sequence. push_back is amortized O(1).
int firstIndexOf(const std::vector<int>& values, int target) {
    for (std::size_t index = 0; index < values.size(); ++index) {
        if (values[index] == target) {
            return static_cast<int>(index);
        }
    }
    return -1;
}

void reverseInPlace(std::vector<int>& values) {
    std::size_t left = 0;
    std::size_t right = values.size();
    while (left < right) {
        --right;
        if (left >= right) {
            break;
        }
        const int temporary = values[left];
        values[left] = values[right];
        values[right] = temporary;
        ++left;
    }
}

int main() {
    std::vector<int> values;
    values.reserve(5); // Avoid reallocations while adding the known number of items.
    for (const int value : {4, 8, 4, 2, 9}) {
        values.push_back(value);
    }

    std::cout << "Vector (size " << values.size() << ", capacity "
              << values.capacity() << "): ";
    for (const int value : values) {
        std::cout << value << ' ';
    }
    std::cout << "\nFirst index of 2: " << firstIndexOf(values, 2) << '\n';

    reverseInPlace(values);
    std::cout << "Reversed: ";
    for (const int value : values) {
        std::cout << value << ' ';
    }
    std::cout << '\n';
}
