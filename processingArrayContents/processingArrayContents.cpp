/*
	This program stores, in an array, the hours worked by
	employees who all make the same hourly wage
*/

#include "stdafx.h"
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	const int NUM_Employees = 5;
	int hours[NUM_Employees];
	double payrate;

	// Input the hours worked
	cout << "Enter the hours worked by ";
	cout << NUM_Employees << " employees who all\n";
	cout << "earn the same hourly rate.\n";

	for (int index = 0; index < NUM_Employees; index++)
	{
		cout << "Employee #" << (index + 1) << ": ";
		cin >> hours[index];
	}

	// Input the hourly rate for all employees.
	cout << "Enter the hourly pay rate for all the employees: ";
	cin >> payrate;

	// Display each employee's gross pay
	cout << "Here is the gross pay for each employee:\n";
	cout << fixed << showpoint << setprecision(2);
	
	for (int index = 0; index < NUM_Employees; index++)
	{
		double grossPay = hours[index] * payrate;
		cout << "Employee #" << (index + 1);
		cout << ": $" << grossPay << endl;
	}

    return 0;
}

