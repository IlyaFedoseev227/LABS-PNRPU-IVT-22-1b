#pragma once
#include "Pair.h"

class rect : public pair {
public:
	rect(void);
	
public:
	~rect(void);
	rect(int, int);
	rect(const rect&);
	int GetA() { return a; }
	int GetB() { return b; }
	void SetA(int);
	void SetB(int);
	rect& operator = (const rect&);
	int Perimeter(rect s);
	int Square(rect s);
	friend std::istream& operator>>(std::istream& in, rect& l);
	friend std::ostream& operator<<(std::ostream& out, const rect& l);
protected:
	int a;
	int b;
};