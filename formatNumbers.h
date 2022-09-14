#pragma once
#include <iostream>
#include <string>

using namespace std;

string formatNumbers(int timePiece) {
	string formattedNumber;

	if (timePiece < 10 && timePiece >= 0)
	{
		formattedNumber = "0" + to_string(timePiece);
	}
	else if (timePiece >= 10 && timePiece <= 59)
	{
		formattedNumber = to_string(timePiece);
	}
	else
	{
		cout << "Error. Invalid input in formatNumbers." << endl;
	}

	return formattedNumber;
}