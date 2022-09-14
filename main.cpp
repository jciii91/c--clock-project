#include <iostream>
#include <string>

#include "printMenu.h"
#include "getUserInput.h"
#include "printBothClocks.h"
#include "addSecond.h"
#include "addMinute.h"
#include "addHour.h"

using namespace std;

int main()
{
	int hour = 20;
	int minute = 59;
	int second = 59;
	int flag = 1;

	while (flag != 4)
	{
		printBothClocks(hour, minute, second);

		printMenu();
		
		flag = getUserInput();

		switch (flag) {
		case 1:
			addHour(hour);
			break;
		case 2:
			addMinute(hour, minute);
			break;
		case 3:
			addSecond(hour, minute, second);
			break;
		default:
			break;
		}
	}

	return 0;
}