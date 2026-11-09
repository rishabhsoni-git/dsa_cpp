#include <iostream>

// Return the first matching index, or -1 when the target is absent.
// Linear search works on unsorted data: O(n) time and O(1) extra space.
int linearSearch(const int values[], int size, int target) {
    for (int index = 0; index < size; ++index) {
        if (values[index] == target) {
            return index;
        }
    }
    return -1;
}

int main() {
    const int values[] = {11, 5, 18, 5, 2};
    const int size = static_cast<int>(sizeof(values) / sizeof(values[0]));
    const int target = 18;
    const int result = linearSearch(values, size, target);

    if (result == -1) {
        std::cout << target << " was not found.\n";
    } else {
        std::cout << target << " was found at index " << result << ".\n";
    }
}
