#include "vector.h"

vector::vector() {
	beg = nullptr;
	size = 0;
	cur = 0;
}

vector::~vector() {
	if (beg != nullptr) delete[] beg;
	beg = nullptr;
}

vector::vector(int n) {
	beg = new Object * [n];
	cur = 0;
	size = n;
}

void vector::Add(Object* p) {
	if (cur < size) {
		beg[cur] = p;
		cur++;
	}
}

std::ostream& operator<<(std::ostream& out, const vector& v) {
	if (v.size == 0) out << "Empty\n";
	Object** p = v.beg;
	for (int i = 0; i < v.cur; i++)
		(*p)->Show(); p++;
	return out;
}