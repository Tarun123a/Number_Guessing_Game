                        //GAME:NUMBER GUESSING
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
 int num,guess,nguess=0;
 srand(time(0));
 num = rand()%1000+1; 
 do
 {
 printf("\nGuess the number between 1 to 1000: ");
 scanf("%d",&guess);
 if(guess>num)
 {
 	printf("\nLower number please");
 }
 else if(guess<num)
 {
 	printf("\nHigher number please");
 }
 else
 {
 	printf("\n You Guessed it in %d attempts",nguess+1);
 }
 nguess++;
 }
 while(guess!=num);
 printf("\n Thank you for play the game ");
	getch();
}
