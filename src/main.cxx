#include <iostream>
#include "sys.h"

// basic functions
void log(const char* msg) {			// made so both code doesnt get as messy and since me lazy
	std::cout << msg << std::endl;
}

int multi(int a, int b) {
	return a * b;
}

// using sys.h/sys.cxx to set up the project
int main() {
	setUp();
	int result = multi(7, 87);
	std::cout << result << std::endl;
	return 0;
}
