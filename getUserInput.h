#pragma once
#include <iostream>

using namespace std;

int getUserInput() {
	int userInput;

	cin >> userInput;

	while (!(userInput == 1 || userInput == 2 || userInput == 3 || userInput == 4)) {
		cout << "Invalid input. Enter the number for the desired menu item." << endl;
		cin.clear();
		cin.ignore();
		cin >> userInput;
	}

	return userInput;
}