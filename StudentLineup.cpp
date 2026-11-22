#include <iostream>
#include <fstream>

using namespace std;

int main() {

	ifstream inputFile("LineUp.txt");

	if (!inputFile) {
		cout << "Error opening file" << endl;
		return 1;
	}

	string names;
	int total = 0;
	int count = 0;

	string firstName;
	string lastName;

	string nameCheck = "";

	if (inputFile >> names) {

		firstName = names;
		lastName = names;

		while (inputFile >> names) {

			if (names < firstName) {
				firstName = names;
			}
			if (names > lastName) {
				lastName = names;
			}

			count++;

			cout << "First name: " << firstName << endl << "Last name: " << lastName << endl << "Number of students: " << count << endl;

		}
	}

	return 0;
}