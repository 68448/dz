#include <stdio.h>


int main()
{
	int sec;
	int hour;
	int minute;
	printf("Ukazite kol-vo sec\n");
	scanf("%d",&sec);
	minute=sec/60;
	hour=sec/3600;
	printf("Hour = %d\n",hour);
	printf("minute= %d",minute);
	
	return 0;
}
