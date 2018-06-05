/*

Programmer : David M.

Resource: https://www.urionlinejudge.com.br/judge/en/problems/view/1065

Make a program that reads five integer values. Count how many of these values ​​are even and  print this information like the following example.

Input
The input will be 5 integer values.

Output
Print a message like the following example with all letters in lowercase, indicating how many even numbers were typed.

*/

#include<stdio.h>

int main(void){

	int num1,num2,num3,num4,num5,even;

	even = 0;

	scanf("%d %d %d %d %d",&num1,&num2,&num3,&num4,&num5);

	if(num1%2==0)even++;

	if(num2%2==0)even++;

	if(num3%2==0)even++;

	if(num4%2==0)even++;

	if(num5%2==0)even++;

	printf("%d valores pares\n",even);

	return 0;

}
