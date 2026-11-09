#include <iostream>

// Insert into a sorted prefix by shifting larger elements one position right.
// Time complexity: O(n); extra space: O(1). The array needs one free slot.
bool insertSorted(int values[], int& size, int capacity, int value) {
    if (size >= capacity) {
        return false;
    }

    int position = size;
    while (position > 0 && values[position - 1] > value) {
        values[position] = values[position - 1];
        --position;
    }
    values[position] = value;
    ++size;
    return true;
}

int main() {
    int values[6] = {2, 5, 8, 12};
    int size = 4;

    if (!insertSorted(values, size, 6, 7)) {
        std::cerr << "Array is full; cannot insert.\n";
        return 1;
    }

    for (int i = 0; i < size; ++i) {
        std::cout << values[i] << (i + 1 == size ? '\n' : ' ');
    }
}
