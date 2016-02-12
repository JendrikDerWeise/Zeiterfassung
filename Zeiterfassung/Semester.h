#pragma once
#include "Month.h"
ref class CSemester sealed
{
public:
	CSemester();
	void addMonth();

private:
	int number;
	float wTimesTotal;
	CMonth monthArray[6];
	void calcWTimesTotal();
};

