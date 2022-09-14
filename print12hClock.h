#pragma once
#include <string>

using namespace std;

string print12hClock(string h, string m, string s) {
	string AMorPM;
	string hour = h;

	if (hour == "00") 
	{
		hour = "12";
		AMorPM = "AM";
	}
	else if (stoi(hour) < 12)
	{
		AMorPM = "AM";
	}
	else if (stoi(hour) > 12 && stoi(hour) < 24)
	{
		hour = "0" + to_string(stoi(hour) - 12);
		AMorPM = "PM";
	}
	
	const string time = hour + ":" + m + ":" + s + " " + AMorPM;
	return time;
}