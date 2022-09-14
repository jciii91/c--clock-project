#pragma once
#include <iostream>
#include <string>

#include "printStars.h"

using namespace std;

void printMenu() {
	cout << printStars(25) << endl;
	cout << printStars(1) << " 1 - Add One Hour      " << printStars(1) << endl;
	cout << printStars(1) << " 2 - Add One Minute    " << printStars(1) << endl;
	cout << printStars(1) << " 3 - Add One Second    " << printStars(1) << endl;
	cout << printStars(1) << " 4 - Exit Program      " << printStars(1) << endl;
	cout << printStars(25) << endl;
}