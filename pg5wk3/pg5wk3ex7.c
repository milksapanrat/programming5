// This code used for income tax calculation
#include<stdio.h>
#include <stdlib.h> // import to use rand() & srand() function
#include <stdint.h> // import to use uint8_t type
#include<time.h> // import to use time() function

// Normally Salary for Software engineer & Programmer
#define MIN_SALARY      25000
#define MAX_SALARY      75000
#define MIN_REPRISE     1000
#define MAX_REPRISE     60000

/* Net income < 150k/year -> Tax rate is 0 % (No need to pay any tax)
Net income  = (150k, 300k] /year -> Tax rate is 5 %
Net income  = (300k, 500k] /year -> Tax rate is 10 %
Net income  = (500k, 750k] /year -> Tax rate is 15 % */

float yourSalary  = 0;
float yourNetIncome  = 0; 
float otherReprise = 0;
float yourTax = 0;

// This function calculate the salary randomly by using srand() and rand() function
float salaryGenerator(int _minSalary, int _maxSalary)
{
    int _salary = 0;
    srand(time(0));
    for (uint8_t _i=0; _i<10; _i++)
    {
        _salary = (float)rand();
    }
    return (float)(_minSalary + (_salary%(_maxSalary - _minSalary)));
}

// This function calculate the other reprise randomly by using srand() and rand() function
float repriseGenerator(int _minReprise, int _maxReprise)
{
    int _reprise = 0;
    srand(time(0));
    for (uint8_t _i=0; _i<10; _i++)
    {
        _reprise = rand();
    }
    return (float)(_minReprise + (_reprise%(_maxReprise - _minReprise)));
}

int main()
{
    yourSalary = salaryGenerator(MIN_SALARY, MAX_SALARY);
    otherReprise = repriseGenerator(MIN_REPRISE, MAX_REPRISE);
    // 1. Calculate the net income in a year.
    yourNetIncome = (yourSalary*12) + otherReprise;
    printf("yourSalary = %.2f THB, otherReprise = %.2f THB, yourNetIncome = %.2f THB\n",yourSalary,otherReprise,yourNetIncome);
    // 2. Calculate the income tax by using nested if-else.
    yourTax = 0;
    if (yourNetIncome > 150000)
    {
        if (yourNetIncome <= 300000)
        {
            yourTax = yourNetIncome * 0.05;
        }
        else if (yourNetIncome <= 500000)
        {
            yourTax = yourNetIncome * 0.10;
        }
        else
        {
            yourTax = yourNetIncome * 0.15;
        }
    }
    // 3. Check the tax, if it is zero, print "Free income tax" , but not, just show it on the screen.
    if (yourTax == 0)
    {
        printf("Free income tax\n");
    }
    else
    {
        printf("Your income tax is: %.2f THB\n", yourTax);
    }
    // 4. If the tax is not zero, just calculate the tax sharing per a month.
    if (yourTax != 0)
    {
        printf("Your monthly tax sharing is: %.2f THB\n", yourTax / 12);
    }
    return 0;
}