#include <iostream>

void swapValues(int& first, int& second) {
	const int temporary = first;
	first = second;
	second = temporary;
}

int main() {
	int left = 3;
	int right = 9;
	int& alias = left; // A reference is another name for an existing object.

	alias = 5; // Updating the alias updates left.
	std::cout << "left through its alias: " << left << '\n';

	swapValues(left, right); // References let a function modify its arguments.
	std::cout << "After swap: left=" << left << ", right=" << right << '\n';
}
