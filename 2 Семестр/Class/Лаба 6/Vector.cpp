#include<iostream>
#include"Vector.h"

Vector::Vector (int s, int k) {
	size = s;
	data = new int[size];
	for (int i = 0; i < size; i++)
		data[i] = k;
	beg.elem = &data[0];
	end.elem = &data[size];
}

Vector::Vector(const Vector& a) {
	size = a.size;
	data = new int[size];
	for (int i = 0; i < size; i++)
		data[i] = a.data[i];
	beg = a.beg;
	end = a.end;
}

Vector::~Vector() {
	delete[] data;
	data = 0;
}

Vector& Vector::operator= (const Vector& a) {
	if (this == &a)
		return *this;
	size = a.size;
	if (data != 0)
		delete[] data;
	data = new int[size];
	for (int i = 0; i < size; i++)
		data[i] = a.data[i];
	beg = a.beg;
	end = a.end;
	return *this;
}

int& Vector::operator[] (int index) {
	if (index < size)
		return data[index];
	else
		std::cout << "\nError! Index>size";
}

Vector Vector::operator+ (const Vector ai) {
	Vector temp(size);
	for (int i = 0; i < size; ++i)
		temp.data[i] = data[i] + ai.data[i];
	return temp;
}

int Vector::operator()() {
	return len();
}

std::ostream& operator<<(std::ostream& out, Vector& a) {
	for (int i = 0; i < a.len(); ++i)
		out << a.data[i] << " ";
	return out;
}

std::istream& operator>>(std::istream& in, Vector& a) {
	for (int i = 0; i < a.len(); ++i)
		in >> a.data[i];
	return in;
}