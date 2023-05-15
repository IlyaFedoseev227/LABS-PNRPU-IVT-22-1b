#pragma once
#include "object.h"
#include <iostream>

class vector {
public:
	vector();
	vector(int);

public:
	~vector();
	void Add(Object*);
	friend std::ostream& operator<<(std::ostream& out, const vector&);

private:
	int o;
	int size;
	int cur;
	Object** beg;
};