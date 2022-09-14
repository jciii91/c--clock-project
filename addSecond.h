#pragma once
#include <iostream>

using namespace std;

void addSecond(int& h, int& m, int& s) {
	if (h == 23 && m == 59 && s == 59) {
		return;
	}
	
	s += 1;
	
	if (s > 59) {
		s = 0;
		m += 1;
	}

	if (m > 59) {
		m = 0;
		h += 1;
	}
}