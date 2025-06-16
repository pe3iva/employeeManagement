#include "addEmpInfo.h"
#include <iostream>

void addEmployeeInfo() {

	std::string goBack{};

	do {
		std::cout << "Employee name: ";
		std::string employeeName{};
		std::cin >> employeeName;

		std::cout << "Employee age: ";
		int employeeAge{};
		std::cin >> employeeAge;

		std::cout << "Employee role: ";
		std::string employeeRole{};
		std::cin >> employeeRole;

		std::cout << "\n\nCreated new employee information card.\n\n\n";

		std::cout << "You can exit by typing back, type anything else to continue: ";
		std::cin >> goBack;

	} while (goBack != "back");
	
}