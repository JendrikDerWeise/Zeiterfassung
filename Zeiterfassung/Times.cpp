#include "pch.h"
#include "Times.h"


CTimes::CTimes(int day, int hStart, int mStart, int hStop, int mStop)
{
	start.tm_mday = day;
	start.tm_hour = mStart;
	start.tm_min = mStart;
	end.tm_mday = day;
	end.tm_hour = hStop;
	end.tm_min = mStop;
	calcHours();
}

int CTimes::getDay() {
	return start.tm_mday;
}

int CTimes::getWHourStart() {
	return start.tm_hour;
}

int CTimes::getWMinuteStart() {
	return start.tm_min;
}

int CTimes::getWHourStop() {
	return end.tm_hour;
}

int CTimes::getWMinuteStop() {
	return end.tm_min;
}

tm CTimes::getStart() {
	return start;
}

tm CTimes::getEnd() {
	return end;
}

float CTimes::getHours() {
	return hours;
}

void CTimes::calcHours() {
	time_t begin, stop;
	begin = mktime(&start);
	stop = mktime(&end);
	hours = difftime(stop, begin) / (60*60);
}