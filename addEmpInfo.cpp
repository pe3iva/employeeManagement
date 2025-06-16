#include "addEmpInfo.h"
#include "goTo.h"
#include <iostream>

void addEmployeeInfo() {

	std::string back{};

	do {
		std::cout << "\nEmployee name: ";
		std::string employeeName{};
		std::cin >> employeeName;

		std::cout << "Employee age: ";
		int employeeAge{};
		std::cin >> employeeAge;

		std::cout << "Employee role: ";
		std::string employeeRole{};
		std::cin >> employeeRole;

		std::cout << "\n\nCreated new employee information card.\n\n\n";

		// display the inputed content
		std::cout << "Employee name: " << employeeName << '\n';
		std::cout << "Employee age: " << employeeAge << '\n';
		std::cout << "Employee role: " << employeeRole << '\n' << '\n';

		std::cout << "You can exit by typing back, type anything else to continue: ";
		std::cin >> back;

		goBack(back);

	} while (back != "back");
	
}