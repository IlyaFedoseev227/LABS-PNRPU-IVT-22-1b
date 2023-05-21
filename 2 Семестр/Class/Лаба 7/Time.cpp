#include "Time.h"
#include <iostream>

Time& Time::operator = (const Time& t) {
	if (&t == this)
		return *this;
	min = t.min;
	sec = t.sec;
	return *this;
}

Time Time::operator- (const Time& t) {
	int temp1 = min * 60 + sec;
	int temp2 = t.min * 60 + t.sec;
	Time p;
	p.min = (temp1 - temp2) / 60;
	p.sec = (temp1 - temp2) % 60;
	return p;
}

bool Time::operator != (const Time& t) {
	bool inq1 = (min != t.min);
	bool inq2 = (sec != t.sec);
	return (inq1 + inq2);
}

bool Time::operator < (const Time& t) {
	bool comp = (min < t.min);
	return comp;
}

std::istream& operator >> (std::istream& in, Time& t) {
	std::cout << "Minutes:";
	in >> t.min;
	std::cout << "Seconds:";
	in >> t.sec;
	return in;
}

std::ostream& operator << (std::ostream& out, const Time& t) {
	return (out << t.min << " : " << t.sec);
}

//Time::Time(void) {
//	min = sec = 0;
//}
//
//Time::Time(int M, int S) {
//	min = M;
//	sec = S;
//}
//
//Time::Time(const Time&t) {
//	min = t.min;
//	sec = t.sec;
//}
//
//Time& Time::operator=(const Time& t) {
//	min = t.min;
//	sec = t.sec;
//	return *this;
//}
//
//Time Time::operator+(Time k) {
//	int t = min * 60 + sec;
//	int kt = k.min * 60 + k.sec;
//	t += kt;
//	Time temp(t / 60, t % 60);
//	return temp;
//}
//
//std::ostream& operator<<(std::ostream& out, const Time& t) {
//	out << t.min << " : " << t.sec;
//	return out;
//}
//
//std::istream& operator>>(std::istream& in, Time& t) {
//	std::cout << "\nmin?";
//	in >> t.min;
//	std::cout << "\nsec?";
//	in >> t.sec;
//	return in;
//}