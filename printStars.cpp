#include <iostream>
#include <string>

using namespace std;

int main()
{
	int howManyStars = 5;
	string starString = "*";

	for (int i = 1; i < howManyStars; i++) {
		starString += "*";
	}

	cout << starString << endl;

	return 0;
}