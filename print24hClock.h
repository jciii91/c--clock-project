#pragma once
#include <string>

using namespace std;

string print24hClock(string h, string m, string s) {
	const string time = h + ":" + m + ":" + s;
	return time;
}