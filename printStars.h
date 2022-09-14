#pragma once
#include <iostream>
#include <string>

using namespace std;

string printStars(int howManyStars)
{
	string starString = "*";

	for (int i = 1; i < howManyStars; i++) {
		starString += "*";
	}

	return starString;
}