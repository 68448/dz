#include <stdio.h>
#include <stdlib.h>

float cel(float tm) 
{
	float F, K;
	F = tm * 1.8 + 32;
	K = tm + 273.15;
	printf("%.2f'F and %.2fK\n", F, K);
	return tm;
}

float far(float tm) {
	float C, K;
	C = (tm - 32) / 1.8;
	K = C + 273.15;
	printf("%.2f'C and %.2fK\n", C, K);
	return tm;
}

float kel(float tm) {
	float C, F;
	C = tm - 273.15;
	F = C * 1.8 + 32;
	printf("%.2f'C and %.2f'F\n", C, F);
	return tm;
}

int main(int argc, char *argv[]) 
{
	float otvet,tm ;
	float a,b,c;
	printf("Vvedite znach tm= ");
	scanf("%f",&tm);
	printf("ecli xotite schitat' iz cel to prisvot' a=1   ");
    scanf("%f",&a);
    printf("ecli xotite schitat' iz kel to prisvot' b=1   ");
    scanf("%f",&b);
    printf("ecli xotite schitat' iz far to prisvot' c=1   ");
    scanf("%f",&c);
    if (a==1)
       {
       	otvet=cel(tm);
	   }
	
	if (b==1)
	   {
	   	otvet=kel(tm);
	   }
	   
	if (c==1)
	   {
	   	otvet=far(tm);
	   }
	
	
	
	
	
	
	
	
	return 0;
}
