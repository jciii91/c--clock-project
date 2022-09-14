#include <iostream>
#include <string>

#include "printMenu.h"
#include "getUserInput.h"
#include "printBothClocks.h"

using namespace std;

int main()
{
	int hour = 0;
	int minute = 0;
	int second = 0;
	int flag = 1;

	while (flag != 4)
	{
		printBothClocks(hour, minute, second);

		printMenu();
		
		flag = getUserInput();
	}

	return 0;
}