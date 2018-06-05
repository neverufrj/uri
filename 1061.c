/*

Programmer : David M.

Resource: https://www.urionlinejudge.com.br/judge/en/problems/view/1061

Peter is organizing an event in his University. The event will be in April month, beginning and finishing within April month. The problem is: Peter wants to calculate the event duration in seconds, knowing obviously the begin and the end time of the event.

You know that the event can take from few seconds to some days, so, you must help Peter to compute the total time, in seconds, corresponding to duration of the event.

Input
The first line of the input contains information about the beginning day of the event in the format: “Dia xx”. The next line contains the start time of the event in the format presented in the sample input. Follow 2 input lines with same format, corresponding to the end of the event.

Output
Your program must print the following output, one information by line, considering that if any information is null for example, the number 0 must be printed in place of W, X, Y or Z:

W dia(s)
X hora(s)
Y minuto(s)
Z segundo(s)

Obs: Consider that the event of the test case have the minimum duration of one minute. “dia” means day, “hora” means hour, “minuto” means minute and “Segundo” means second in Portuguese.

Input
Dia 5
08 : 12 : 23

Dia 9
06 : 13 : 23

Output

3 dia(s)
22 hora(s)
1 minuto(s)
0 segundo(s)


*/

#include<stdio.h>

int main(void){

	char cday1[4],cday2[4],point[2]; //Doesn't need creat 2 var's for points and spaces

	int day1,day2,hour1,hour2,minute1,minute2,second1,second2,day,hour,minute,second,total;

	scanf("%s %d",&cday1,&day1);

	scanf("%d %s %d %s %d",&hour1,&point,&minute1,&point,&second1);

	scanf("%s %d",&cday2,&day2);

	scanf("%d %s %d %s %d",&hour2,&point,&minute2,&point,&second2);

	second = 60-second1+second2;

    minute = (60-1-minute1+minute2)*60;

    hour = (24-1-hour1+hour2)*3600;

    day = (day2-day1-1)*86400;

    total = second+minute+hour+day;
    
    day = total/86400;
    
    hour = (total%86400/3600);
    
    minute = ((total%86400)%3600)/60;

    second =((total%86400)%3600)%60; 
    

    printf("%d dia(s)\n",day);

    printf("%d hora(s)\n",hour);

    printf("%d minuto(s)\n",minute);

    printf("%d segundo(s)\n",second);


	return 0;
}