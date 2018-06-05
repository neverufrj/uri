/*

Programmer : David M.

Resource: https://www.urionlinejudge.com.br/judge/en/problems/view/1059

Write a program that prints all even numbers between 1 and 100, including them if it is the case.

Input
In this extremely simple problem there is no input.

Output
Print all even numbers between 1 and 100, including them, one by row.

*/

#include<stdio.h>

int main(void){

	int i = 100;

	for(i =2 ; i<=100 ; i=i+2){

		printf("%d\n",i);
	}

	return 0;

}