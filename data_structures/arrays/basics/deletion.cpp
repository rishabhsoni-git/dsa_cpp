#include <iostream>

// Remove the first matching value by shifting the following elements left.
// Time complexity: O(n); extra space: O(1).
bool eraseFirst(int values[], int& size, int target) {
    int position = 0;
    while (position < size && values[position] != target) {
        ++position;
    }
    if (position == size) {
        return false;
    }

    for (int i = position; i + 1 < size; ++i) {
        values[i] = values[i + 1];
    }
    --size;
    return true;
}

int main() {
    int values[] = {4, 7, 9, 7, 12};
    int size = 5;

    if (!eraseFirst(values, size, 7)) {
        std::cout << "Value was not found.\n";
        return 0;
    }

    for (int i = 0; i < size; ++i) {
        std::cout << values[i] << (i + 1 == size ? '\n' : ' ');
    }
}
