/*

Programmer : David M.

Resource: https://www.urionlinejudge.com.br/judge/en/problems/view/1048

The company ABC decided to give a salary increase to its employees, according to the following table:

**** View in : https://www.urionlinejudge.com.br/judge/en/problems/view/1048 ****

Read the employee's salary, calculate and print the new employee's salary, as well the money earned and the increase percentual obtained by the employee, with corresponding messages in Portuguese, as the below example.

Input

The input contains only a floating-point number, with 2 digits after the decimal point.

Output
Print 3 messages followed by the corresponding numbers (see example) informing the new salary, the among of money earned and the percentual obtained by the employee. Note:
Novo salario:  means "New Salary"
Reajuste ganho: means "Money earned"
Em percentual: means "In percentage"

*/

#include<stdio.h>

int main (void){

	float Salary;

	scanf("%f",&Salary);

	if(Salary <= 400.00){

		printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 15 %\n",Salary + Salary*15/100,Salary*15/100);

	}
	if(Salary >= 400.01 && Salary <= 800.00){

		printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 12 %\n",Salary + Salary*12/100,Salary*12/100);
	}
	if(Salary >= 800.01 && Salary <= 1200.00){

		printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 10 %\n",Salary + Salary*10/100,Salary*10/100);
	}
	if(Salary >= 1200.01 && Salary <= 2000.00){

		printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 7 %\n",Salary + Salary*7/100,Salary*7/100);
	}
	if(Salary > 2000.00){

		printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 4 %\n",Salary + Salary*4/100,Salary*4/100);

	}

return 0;

}
	