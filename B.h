// B.h
#pragma once
#include "A.h"

class B : public A {
	int y;
public:
	B(int x, int y) : A(x) { this->y = y; }
	B(A a);
	~B() {}
};
