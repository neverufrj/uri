/*

Programmer : David M.

Resource: https://www.urionlinejudge.com.br/judge/en/problems/view/1067

Read an integer value X (1 <= X <= 1000).  Then print the odd numbers from 1 to X, each one in a line, including X if is the case.

Input
The input will be an integer value.

Output
Print all odd values between 1 and X, including X if is the case

*/


#include<stdio.h>

int main(void){

	int i,x;

	scanf("%d",&x);

	for(i=0;i<=x;i++){

		if(i%2!=0) printf("%d\n",i);
	}

return 0;
}