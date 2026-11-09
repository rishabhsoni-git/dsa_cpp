#include <iostream>
#include <limits>

// Small, self-contained examples of common operations on a fixed-size array.
// Time complexity: traversal/search/reverse are O(n); min/max/sum are O(n).

int indexOfMinimum(const int values[], int size) {
    if (size <= 0) {
        return -1;
    }

    int minimumIndex = 0;
    for (int i = 1; i < size; ++i) {
        if (values[i] < values[minimumIndex]) {
            minimumIndex = i;
        }
    }
    return minimumIndex;
}

int indexOfMaximum(const int values[], int size) {
    if (size <= 0) {
        return -1;
    }

    int maximumIndex = 0;
    for (int i = 1; i < size; ++i) {
        if (values[i] > values[maximumIndex]) {
            maximumIndex = i;
        }
    }
    return maximumIndex;
}

int linearSearch(const int values[], int size, int target) {
    for (int i = 0; i < size; ++i) {
        if (values[i] == target) {
            return i;
        }
    }
    return -1;
}

long long sum(const int values[], int size) {
    long long total = 0;
    for (int i = 0; i < size; ++i) {
        total += values[i];
    }
    return total;
}

void reverse(int values[], int size) {
    for (int left = 0, right = size - 1; left < right; ++left, --right) {
        const int temporary = values[left];
        values[left] = values[right];
        values[right] = temporary;
    }
}

void print(const int values[], int size) {
    for (int i = 0; i < size; ++i) {
        std::cout << values[i] << (i + 1 == size ? '\n' : ' ');
    }
}

int main() {
    int values[] = {7, -2, 5, 9, 0};
    const int size = static_cast<int>(sizeof(values) / sizeof(values[0]));

    std::cout << "Values: ";
    print(values, size);
    std::cout << "Minimum value: " << values[indexOfMinimum(values, size)] << '\n';
    std::cout << "Maximum value: " << values[indexOfMaximum(values, size)] << '\n';
    std::cout << "Index of 5: " << linearSearch(values, size, 5) << '\n';
    std::cout << "Sum: " << sum(values, size) << '\n';

    reverse(values, size);
    std::cout << "Reversed: ";
    print(values, size);
}
