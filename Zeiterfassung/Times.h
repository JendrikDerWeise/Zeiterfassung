#pragma once
#include<time.h>
ref class CTimes sealed
{
public:
	CTimes(int day, int hStart, int mStart, int hStop, int mStop);
	float getHours();
	int getDay();
	int getWHourStart();
	int getWHourStop();
	int getWMinuteStart();
	int getWMinuteStop();
	tm getStart();
	tm getEnd();

private:
	int wDay;
	int wHourStart;
	int wMinuteStart;
	int wHourStop;
	int wMinuteStop;
	float hours;
	struct tm start, end;
	
	void calcHours();
};

