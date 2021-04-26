// lab5.3
#include <iostream>
#include <string>
#include <exception>
#include "A.h"
#include "B.h"

using namespace std;

int main() {
	A a(1);
	B b(2, 3);
	try {
		B b2(a);
		cout << "Continue" << endl;
	}
	catch (int) {
		cout << "catch(int)" << endl;
		exit(1);
	}
	cout << "End" << endl;
	return 0;
}
