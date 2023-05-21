#pragma once
#include <iostream>

class Time {

private:
	int min, sec;

public:
	Time() {
		min = 0;
		sec = 0;
	}

	Time(int m, int s) {
		min = m;
		sec = s;
	}

	Time(const Time& t) {
		min = t.min;
		sec = t.sec;
	}

	~Time() {};

	int get_min() { return min; }
	int get_sec() { return sec; }

	void set_min(int m) { min = m; }
	void set_sec(int s) { sec = s; }

	Time& operator = (const Time&);
	Time operator- (const Time&);
	bool operator!=(const Time&);
	bool operator<(const Time&);

	friend std::istream& operator>>(std::istream& in, Time& t);
	friend std::ostream& operator<<(std::ostream& out, const Time& t);
};

//class Time {
//public:
//	Time(void);
//	Time(int, int);
//	Time(const Time&);
//	Time& operator=(const Time&);
//	Time operator+(Time k);
//	friend std::ostream& operator<<(std::ostream& out, const Time&);
//	friend std::istream& operator>>(std::istream& in, Time&);
//
//public:
//	virtual ~Time(void) {};
//
//private:
//	int min, sec;
//};