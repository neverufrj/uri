/*

Programmer : David M.

Resource: https://www.urionlinejudge.com.br/judge/en/problems/view/1060

Write a program that reads 6 numbers. These numbers will only be positive or negative (disregard null values). Print the total number of positive numbers.

Input
Six numbers, positive and/or negative.

Output
Print a message with the total number of positive numbers.

*/

#include<stdio.h>

int main(void){

	float num;
	int i,positives = 0;

	for (i = 0 ; i < 6 ; i++){

		scanf("%f",&num);

		if(num>0) positives = positives+1;
	}

	printf("%d valores positivos\n",positives);

	return 0;


}

