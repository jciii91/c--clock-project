#pragma once
#include <iostream>
#include <string>

#include "formatNumbers.h"
#include "printStars.h"
#include "print12hClock.h"
#include "print24hClock.h"

using namespace std;

void printBothClocks(int h, int m, int s) {
	const string inputH = formatNumbers(h);
	const string inputM = formatNumbers(m);
	const string inputS = formatNumbers(s);

	cout << printStars(25) << "   " << printStars(25) << endl;
	cout << printStars(1) << "     12-Hour Clock     " << printStars(1) << "   " 
		 << printStars(1) << "     24-Hour Clock     " << printStars(1) << endl;
	cout << printStars(1) << "      " << print12hClock(inputH, inputM, inputS) << "      " << printStars(1) << "   " 
		 << printStars(1) << "        " << print24hClock(inputH, inputM, inputS) << "       " << printStars(1) << endl;
	cout << printStars(25) << "   " << printStars(25) << endl;
}