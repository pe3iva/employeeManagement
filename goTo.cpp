#include "goTo.h"
#include "addEmpInfo.h"
#include <iostream>

int goTo(int destination) {

	if (destination == 1) {
		addEmployeeInfo();

	}
	else if (destination == 2) {
		std::cout << "2";
	}
	else if (destination == 3) {
		std::cout << "3";
	}
	else {
		std::cout << "Invalid number entered.\n\n";
	}

	return destination;
}