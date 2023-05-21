#pragma once
#include<iostream>

template <class T>

class Vector {
public:
	Vector(int s, T k);
	Vector(const Vector<T>& a);
	~Vector();
	Vector& operator=(const Vector<T>& a);
	T& operator[](int index);
	Vector operator+(const T k);
	int operator()();
	friend std::ostream& operator<< (std::ostream& out, const Vector<T>& a);
	friend std::istream& operator>> (std::istream& in, Vector<T>& a);

private:
	int size;
	T* data;
};