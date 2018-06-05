/*

Programmer : David M.

Resource: https://www.urionlinejudge.com.br/judge/en/problems/view/1051

In an imaginary country called Lisarb, all the people are very happy to pay their taxes because they know that doesn’t exist corrupt politicians and the taxes are used to benefit the population, without any misappropriation. The currency of this country is Rombus, whose symbol is R$.

Read a value with 2 digits after the decimal point, equivalent to the salary of a Lisarb inhabitant. Then print the due value that this person must pay of taxes, according to the table below.

*** View in : https://www.urionlinejudge.com.br/judge/en/problems/view/1051 ***

Remember, if the salary is R$ 3,002.00 for example, the rate of 8% is only over R$ 1,000.00, because the salary from R$ 0.00 to R$ 2,000.00 is tax free. In the follow example, the total rate is 8% over R$ 1000.00 + 18% over R$ 2.00, resulting in R$ 80.36 at all. The answer must be printed with 2 digits after the decimal point.

Input
The input contains only a float-point number, with 2 digits after the decimal point.

Output
Print the message "R$" followed by a blank space and the total tax to be payed, with two digits after the decimal point. If the value is up to 2000, print the message "Isento".

*/

#include<stdio.h>

int main(void){

	float Salary;

	scanf("%f",&Salary);
	
	if(Salary <= 2000.00) printf("Isento\n");

	if(Salary > 2000.01 && Salary <= 3000.00) printf("R$ %.2f\n",(Salary-2000)*8/100);

	if(Salary > 3000.01 && Salary <= 4500.00) printf("R$ %.2f\n",((Salary-3000)*18/100) + 1000*8/100);

	if(Salary > 4500.01) printf("R$ %.2f\n",((Salary-4500)*28/100) + (1500*18/100) +(1000*8/100));

	return 0;
}
