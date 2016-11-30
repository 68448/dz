#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>

int funct(float a,float b)
{
printf("%.f\n",powf(a,b));
return 0;	
}

int main() {
	float a,b;
	printf("Vvedite stepen\n");
	scanf("%f %f",&a,&b);
	funct(a,b);
	getch();
	
	
	
	
	
	
	
	return 0;
}
