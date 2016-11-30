#include <stdio.h>
#include <stdlib.h>


int main() 
{
	int razmer,i;
	printf("Vvedite razmernost' massiva\n");
	scanf("%d",&razmer);
	int A[razmer];
	printf("Vvedite znach massiva\n");
	
	for (i=0;i<razmer;i++)
	{
		printf("A[%d]= ",i+1);
		scanf("%d",&A[i]);
		
		if (A[i]>A[i+1])
	  	   {
	  	   	printf("Ne vozrast");
	  	   	
			}
			 
	}
	
	 
	
	
	return 0;
}
