#include <iostream>
#include <string>

using namespace std;

int main()
{
	const int inputNumber = -1;
	string formattedNumber;
	
	if (inputNumber < 10 && inputNumber >= 0) 
	{
		formattedNumber = "0" + to_string(inputNumber);
	}
	else if (inputNumber >= 10 && inputNumber <= 59)
	{
		formattedNumber = to_string(inputNumber);
	}
	else
	{
		cout << "Error. Invalid input in formatNumbers." << endl;
		return 1;
	}
	
	cout << inputNumber << " has been formatted to " << formattedNumber << endl;

	return 0;
}