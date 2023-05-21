#pragma once
#include <iostream>

const int max_size = 5;

class Set {
	int size;
	int* data;

public:
	Set(int);
	Set(const Set&);
	~Set();
	Set& operator=(const Set&);
	Set operator+(Set&);
	Set operator++(int);
	int operator()();
	int& operator[](int);
	friend std::istream& operator>> (std::istream& in, Set& a);
	friend std::ostream& operator<< (std::ostream& out, const Set& a);
};