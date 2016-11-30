#include <stdio.h>
#include <stdlib.h>

int funct(int x)
{
int i, y=0, t = 1, s = 1;
	
	while ( x > 0 )
	{
		y = y + x%10*t;
		t *=2;
		x= x / 10;
	}
	printf("%d\n", y);
	return(x);	
}

int main()
{
	int x, i, y=0, t = 1, s = 1;
	printf("Vvedite dvoicnoe chislo\n");
	scanf("%d", &x);
	funct(x);
	
	
	return 0;
}


