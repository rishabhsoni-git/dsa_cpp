#include <iostream>

void addOne(int* value) {
	if (value != nullptr) {
		++(*value); // Dereference the pointer to update the value it points to.
	}
}

int main() {
	int score = 10;
	int* scorePointer = &score; // & obtains the address of score.

	std::cout << "Value: " << score << '\n';
	std::cout << "Address: " << scorePointer << '\n';
	std::cout << "Dereferenced value: " << *scorePointer << '\n';

	addOne(scorePointer); // A pointer can be passed when a function may update a value.
	std::cout << "After addOne: " << score << '\n';

	int* noValue = nullptr; // Prefer nullptr to the older NULL or integer 0.
	addOne(noValue);        // The helper safely ignores a null pointer.
}
