#include<iostream>
using namespace std;
int main()
{
    int employeeNumber, workedHours;
    double hourlyRate, salary;
    cin >> employeeNumber >> workedHours >> hourlyRate;
    salary = workedHours * hourlyRate;
    printf("NUMBER = %d\n", employeeNumber);
    printf("SALARY = U$ %.2lf\n", salary);
    return 0;
}

