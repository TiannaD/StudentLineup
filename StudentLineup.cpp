#include <iostream>
#include <fstream>

using namespace std;

//This program reads a file as input and takes the first and last alphabetically entries and displays them with the number of records

int main() {

	ifstream inputFile("LineUp.txt");

	if (!inputFile) {
		cout << "Error opening file" << endl;
		return 1;
	}

	string names;
	int count = 0;

	string firstName;
	string lastName;

	if (inputFile >> names) {

		firstName = names;
		lastName = names;

		count++;

		while (inputFile >> names) {

			if (names < firstName) {
				firstName = names;
			}
			if (names > lastName) {
				lastName = names;
			}

			//cout << "First name: " << firstName << endl << "Last name: " << lastName << endl << "Number of students: " << count << endl;

			count++;
			
		}

		cout << "First name: " << firstName << endl << "Last name: " << lastName << endl << "Number of students: " << count << endl;

	}

	return 0;
}