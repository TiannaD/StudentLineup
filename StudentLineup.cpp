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

	string nameCheck;

	while (inputFile >> names) {
		nameCheck = names;
		firstName = nameCheck;
		cout << names << endl;
	}
	

	return 0;
}