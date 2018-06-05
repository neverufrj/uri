/*

Programmer : David M.

Resource: https://www.urionlinejudge.com.br/judge/en/problems/view/1062

Read 6 values that can be floating point numbers. After, print how many of them were positive. In the next line, print the average of all positive values typed, with one digit after the decimal point.

Input
The input consist in 6 numbers that can be integer or floating point values. At least one number will be positive.

Output
The first output value is the amount of positive numbers. The next line should show the average of the positive values ​typed.

*/

#include<stdio.h>

int main(void){

	float num1,num2,num3,num4,num5,num6,media,add;

	scanf("%f %f %f %f %f %f",&num1,&num2,&num3,&num4,&num5,&num6);

    add = 0;
	
	int positive = 0;

	if(num1>0){
	
		positive++;
		add = add + num1;
	}

	if(num2>0){

		 positive++;
		  add = add + num2;
	}

	if(num3>0){

		positive++;
		add = add + num3;
	} 

	if(num4>0){

		positive++;
		add = add + num4;
	}

	if(num5>0){

		positive++;
		add = add+num5;
	
	} 

	if(num6>0){

		positive++;
		add= add+num6;
	} 

	media = add/positive;

	printf("%d valores positivos\n",positive);

	printf("%.1f\n",media);

	return 0;


}