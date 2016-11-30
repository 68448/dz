#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main() 
{
	float q,sr;
	int k,i,zn1,zn2;
	q=0;
	printf("Vvedite razmernost' massiva\n");
	scanf("%d",&k);
	printf("zadaite diaposon = ");
	scanf("%d %d",&zn1,&zn2);
	float a[k];
	srand (time(NULL));
	for (i=0;i<k;i++)
	                a[i]=rand()%zn2-zn1;
	                   for (i=0;i<k;i++)
	                   	printf("%.2f\n",a[i]);
	                   	
	                   	for (i=0;i<k;i++)
	                   	      {
	                   	      	if (a[i]>0)
	                   	      	q=q+1;
	                   	      	sr+=a[i];
						    	}
						    	          printf("kol-vo perem > 0= %.1f\n",q);
	                                      printf("sr = %.2f",sr/q);
	
	return 0;
}
