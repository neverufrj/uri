/*

Programmer : David M.

Resource: https://www.urionlinejudge.com.br/judge/en/problems/view/1049

In this problem, your job is to read three Portuguese words. These words define an animal according to the table below, from left to right. After, print the chosen animal defined by these three words.

**** View in : https://www.urionlinejudge.com.br/judge/en/problems/view/1049 ****

Input
The input contains 3 words, one by line, that will be used to identify the animal, according to the above table, with all letters in lowercase.

Output
Print the animal name according to the given input.

*/

#include <stdio.h>
int main()
{
    char Class[20],Subclass[20],Type[20];

    scanf("%s %s %s",Class,Subclass,Type);

    if (Class[0] == 'v' && Subclass[0] == 'a' && Type[0] == 'c')printf("aguia\n");
    if (Class[0] == 'v' && Subclass[0] == 'a' && Type[0] == 'o')printf("pomba\n");
    if (Class[0] == 'v' && Subclass[0] == 'm' && Type[0] == 'o')printf("homem\n");
    if (Class[0] == 'v' && Subclass[0] == 'm' && Type[0] == 'h')printf("vaca\n");
    if (Class[0] == 'i' && Subclass[0] == 'i' && Type[2] == 'm')printf("pulga\n");
    if (Class[0] == 'i' && Subclass[0] == 'i' && Type[2] == 'r')printf("lagarta\n");
    if (Class[0] == 'i' && Subclass[0] == 'a' && Type[0] == 'h')printf("sanguessuga\n");
    if (Class[0] == 'i' && Subclass[0] == 'a' && Type[0] == 'o')printf("minhoca\n");

    return 0;
}