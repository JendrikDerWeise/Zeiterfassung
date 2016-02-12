#pragma once
#include<string>
#include "Times.h"

ref class CMonth sealed
{
public:
	CMonth(int no, std::string nam);
	std::string getName();
	int getMonthNo();
	int gethoursTotal();

	void addTimes(int day, int hStart, int mStart, int hStop, int mStop);

private:
	void calcWTimesTotal();
	float hoursTotal;
	std::string name;
	int monthNo;
	std::list<CTimes> tList;
};

