// A.h
#pragma once

class A {
protected:
	int x;
public:
	A() { this->x = 0; }
	A(int x) { this->x = x; }
	int getX() { return x; }
	~A() {}
};
