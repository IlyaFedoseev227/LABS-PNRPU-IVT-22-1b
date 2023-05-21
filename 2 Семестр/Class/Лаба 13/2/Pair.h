#pragma once 
#include<iostream>
#include<ctime>

class Pair {
private:
	int first;
	double second;

public:
	Pair();
	Pair(int f, double s);
	Pair(const Pair& p);
	~Pair() {}
	void setFirst(int first);
	void setSecond(double second);
	int getFirst();
	double getSecond();
	Pair& operator= (const Pair& p);
	Pair& operator- (const Pair& p);
	Pair& operator+ (int x);
	Pair& operator+ (double x);
	bool operator > (const Pair& p);
	bool operator < (const Pair& p) const;
	bool operator!= (const Pair& p);
	Pair& operator+ (Pair& p);
	Pair& operator+ (const Pair& p);
	Pair& operator/ (int n);
	void randomize();
	Pair& operator+= (const Pair& p);
	friend std::ostream& operator<< (std::ostream& out, const Pair& p);
	friend std::istream& operator>> (std::istream& in, Pair& p);
};