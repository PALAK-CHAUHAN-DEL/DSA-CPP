/* Ramesh's basic salary is input through the keyboard.His dearness
allowance is 40% of basic salary, and house rent allowance is 20% of basic salary.
Write a program to calculate his gross salary. */

#include <iostream>
using namespace std;

float grossSalary (float basic_salary) {
    float rent = 0.2 * basic_salary;
    float da = 0.4 * basic_salary;
    float totalSalary = basic_salary + rent + da;
    return totalSalary;
}
int main () {
    float basic_salary;
    cout << "Enter your basic salary : ";
    cin >> basic_salary;
    float grossIncome = grossSalary (basic_salary);
    cout << "Your gross salary is : " << grossIncome << endl;
    return 0;
}