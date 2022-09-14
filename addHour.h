#pragma once
#include <iostream>

using namespace std;

void addHour(int& h) {
	if (h == 23) {
		return;
	}

	h += 1;
}