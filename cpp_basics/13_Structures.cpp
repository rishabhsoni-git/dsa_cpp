#include <iostream>
#include <string>

// A struct groups related values into one user-defined type.
struct Student {
	std::string name;
	int rollNumber;
	double score;
};

void printStudent(const Student& student) {
	std::cout << student.name << " (roll " << student.rollNumber
			  << ") scored " << student.score << ".\n";
}

int main() {
	const Student student{"Sam", 24, 91.5};
	printStudent(student);
}
