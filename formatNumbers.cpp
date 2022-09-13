#include <iostream>
#include <string>

using namespace std;

int main()
{
	const int inputNumber = 1;
	const string formattedNumber = to_string(inputNumber);
	cout << "1 has been formatted to 0" << formattedNumber << endl;

	return 0;
}