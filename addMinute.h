#pragma once
#include <iostream>

using namespace std;

void addMinute(int& h, int& m) {
	if (h == 23 && m == 59) {
		return;
	}

	m += 1;

	if (m > 59) {
		m = 0;
		h += 1;
	}
}