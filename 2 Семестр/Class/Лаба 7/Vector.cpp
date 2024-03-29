#include "Vector.h"
#include<iostream>

template <class T>
Vector<T>::Vector(int s, T k) {
	size = s;
	data = new T[size];
	for (int i = 0; i < size; i++)
		data[i] = k;
}

template <class T>
Vector<T>::Vector(const Vector& a) {
	size = a.size;
	data = new T[size];
	for (int i = 0; i < size; i++)
		data[i] = a.data[i];
}

template <class T>
Vector<T>::~Vector() {
	delete[]data;
	data = 0;
}

template <class T>
Vector<T>& Vector<T>::operator=(const Vector<T>& a) {
	if (this == &a)
		return *this;
	size = a.size;
	if (data != 0)
		delete[]data;
	data = new T[size];
	for (int i = 0; i < size; i++)
		data[i] = a.data[i];
	return *this;
}

template <class T>
T& Vector<T>::operator[](int index) {
	if (index < size)
		return data[index];
	else
		std::cout << "\nError! Index>size";
}

template <class T>
Vector<T> Vector<T>::operator+(const T k) {
	Vector<T> temp(size, k);
	for (int i = 0; i < size; ++i)
		temp.data[i] = data[i] + k;
	return temp;
}

template <class T>
int Vector<T>::operator()() {
	return size;
}

template <class T>
std::ostream& operator<<(std::ostream& out, const Vector<T>& a) {
	for (int i = 0; i < a.size; ++i)
		out << a.data[i] << " ";
	return out;
}

template <class T>
std::istream& operator>>(std::istream& in, Vector<T>& a) {
	for (int i = 0; i < a.size; ++i)
		in >> a.data[i];
	return in;
}