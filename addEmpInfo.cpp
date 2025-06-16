#include "addEmpInfo.h"
#include <iostream>

void addEmployeeInfo() {

	std::cout << "Employee name: ";
	std::string employeeName{};
	std::cin >> employeeName;

	std::cout << "Employee age: ";
	int employeeAge{};
	std::cin >> employeeAge;

	std::cout << "Employee role: ";
	std::string employeeRole{};
	std::cin >> employeeRole;

}