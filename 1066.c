/*

Programmer : David M.

Resource: https://www.urionlinejudge.com.br/judge/en/problems/view/1066

Make a program that reads five integer values. Count how many   of these values are even, odd, positive and negative. Print these information like following example.

Input
The input will be 5 integer values.

Output
Print a message like the following example with all letters in lowercase, indicating how many of these values ​​are even, odd, positive and negative.

*/

#include<stdio.h>

int main(void){

	int num1,num2,num3,num4,num5,even,odd,positive,negative;

	even = 0;
	odd = 0;
	positive = 0;
	negative = 0;

	scanf("%d %d %d %d %d",&num1,&num2,&num3,&num4,&num5);

	if(num1%2==0){

		even++;

	}

	else odd++;

	if(num1<0){

		negative++;
	}

	else positive++;

	if(num2%2==0){

		even++;
	}

	else odd++;

	if(num2<0){

		negative++;
	}

	else positive++;

	if(num3%2==0)
	{
		even++;
	}

	else odd++;

	if(num3<0){

		negative++;
	}

	else positive++;

	if(num4%2==0)
	{
		even++;
	}

	else odd++;

	if(num4<0){

		negative++;
	}

	else positive++;

	if(num5%2==0)
	{
		even++;
	}
	else odd++;

	if(num5<0){

		negative++;
	}

	else positive++;

	if(num1==0||num2==0||num3==0||num4==0||num5==0) positive--;


	printf("%d valor(es) par(es)\n",even);
	printf("%d valor(es) impar(es)\n",odd);
	printf("%d valor(es) positivo(s)\n",positive);
	printf("%d valor(es) negativo(s)\n",negative);

	return 0;

}
