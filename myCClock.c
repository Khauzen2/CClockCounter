/* C program to design a digital clock */

#include <stdio.h>
#include <time.h> // for sleep () function
#include <unistd.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	
	
	int hour, minute, second;
	hour=minute=second=0;
	while(1)
	{
		// clear output screen
		system("cls");
		printf("\t\t\tWelcome To my clock counter !!!! Enjoy time!!!\n\n");
		// print time in HH : MM : SS format
		printf("\t\t\t\t%02d : %02d : %02d", hour, minute, second);
		//clear output buffer in gcc
		fflush(stdout);
		// increase second
		second++;
		//update hour, minute and second
		if(second == 60)
		{
			minute+=1;
			second = 0;	
		}
		if(minute == 60)
		{
			hour += 1;
			minute = 0;	
		}
		if(hour == 24)
		{
			hour = 0;
			minute = 0;
			second = 0;	
		}
		
		sleep(1); //wait 1 second	
	}
	return 0;
}
