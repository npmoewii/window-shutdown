/*
Programming by Moewii :)
Alias: Little Devil
Writer at: www.krunutz.com
*/

#include "stdio.h"
#include "stdlib.h"	//system();
#include "string.h"	//strcpy(); and strcat();

int main()
{
	char timer[10];
	char st[100];
	char choice;
	
	printf("Shutdown(s) or Cancel shutdown(a): ");
	scanf("%c",&choice);	//input s for shutdown or a for cancel shutdown
	
	switch(choice)
	{
		case 's':	//case command for shutdown
			printf("Input time for shutdown(s): ");
			scanf("%s",timer);
			strcpy(st,"C:\\WINDOWS\\System32\\shutdown -s -t ");
			strcat(st,timer);
			break;
			
		case 'a':	//case command for cancel shutdown
			strcpy(st,"C:\\WINDOWS\\System32\\shutdown -a");
			break;
	}
	
	system(st);	//command
	printf("--------------Success!--------------\n");
	getch();
}


