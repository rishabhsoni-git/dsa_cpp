#include <iostream>
#include <string>

int main() {
	// std::string owns a sequence of characters and grows as needed.
	std::string name = "Ada";
	name += " Lovelace";

	std::cout << "Name: " << name << '\n';
	std::cout << "Length: " << name.length() << '\n';
	std::cout << "First character: " << name.front() << '\n';

	// getline reads spaces, unlike operator>> which stops at whitespace.
	std::string sentence;
	std::cout << "Enter a sentence: ";
	std::getline(std::cin >> std::ws, sentence);
	std::cout << "You entered: " << sentence << '\n';

	const std::size_t position = sentence.find("C++");
	if (position != std::string::npos) {
		std::cout << "The text C++ starts at index " << position << ".\n";
	} else {
		std::cout << "The text C++ was not found.\n";
	}
}
