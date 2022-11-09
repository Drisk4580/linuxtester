#include "sys.h"
#include <iostream>

std::string loadingList[] = {
	"loading.",
	"loading..",		// literaly the first time ive actually used an array
	"loading..."
};

// standart setup
void setUp() {
	for(int i = 0; i < 1; i++) {
		std::cout << loadingList[0] << std::endl;
		std::cout << loadingList[1] << std::endl;
		std::cout << loadingList[2] << std::endl;
		std::cout << multi(7, 98) << std::endl;
		log("");			
	}
}
