#include "pch.h"
#include "Month.h"


CMonth::CMonth(int no, std::string nam)
{
	monthNo = no;
	name = nam;
	hoursTotal = 0;
}

void CMonth::calcWTimesTotal() {
	for (CTimes dummy : tList)
		hoursTotal += dummy.getHours();
}

void CMonth::addTimes(int day, int hStart, int mStart, int hStop, int mStop) {
	CTimes times(day, hStart, mStart, hStop, mStop);
	tList.push_back(times);
}

int CMonth::gethoursTotal() {
	return hoursTotal;
}

std::string CMonth::getName() {
	return name;
}

int CMonth::getMonthNo() {
	return monthNo
}

