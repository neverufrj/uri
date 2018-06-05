/*

Programmer : David M.

Resource: https://www.urionlinejudge.com.br/judge/en/problems/view/1047

Read the start time and end time of a game, in hours and minutes (initial hour, initial minute, final hour, final minute). Then print the duration of the game, knowing that the game can begin in a day and finish in another day,

Obs.: With a maximum game time of 24 hours and the minimum game time of 1 minute.

Input
Four integer numbers representing the start and end time of the game.

Output
Print the duration of the game in hours and minutes, in this format: “O JOGO DUROU XXX HORA(S) E YYY MINUTO(S)” . Which means: the game lasted XXX hour(s) and YYY minutes.

*/


#include<stdio.h>

int main(void){

	int Bhour,Fhour,Bmin,Fmin;

	scanf("%d %d %d %d",&Bhour,&Bmin,&Fhour,&Fmin);

	if(Bhour == Fhour)
	{
		if(Bmin < Fmin){

			printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",Fhour-Bhour,Fmin-Bmin);
		}

		else{

			printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
		}
	}

	if(Bhour < Fhour){

		if(Bmin <= Fmin){

			printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",Fhour-Bhour,Fmin-Bmin);
		}

		else{

			printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",(Fhour-Bhour)-1,60-(Bmin-Fmin));
		}


	}
	
	if(Bhour > Fhour){

		 if(Bmin <= Fmin){
	        
	    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",(24-Bhour)+Fhour,Fmin-Bmin);
	    
	    }
	    
	    else{

			printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",24-Bhour+Fhour-1,60-(Bmin-Fmin));
		}
	}

return 0;

}