#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main() 
{
	int str,stl,i,j,b;
	float a=0,sum;
	printf("Vvedite kol-vo strok= ");
	scanf("%d",&str);
	printf("Vvedite kol-vo stolbzov= ");
	scanf("%d",&stl);
	float A[str][stl];
	srand(time(NULL));
	for (i=0;i<str;i++)
	   for(j=0;j<stl;j++)
	   {
	   	A[i][j]=rand()%100;
	   }
	   
	for (i=0;i<str;i++)
	{
	   for(j=0;j<stl;j++)
	   {
	   	printf("A[%d][%d] =%f \n",i+1,j+1,A[i][j]);
	   }
	   printf("\n");
    }
    
    for(i=0;i<str;i++)
       {
       	for(j=0;j<stl;j++)
       	{
       	sum+=A[i][j];
        }
        if (sum>a)
        {
        a=sum;
		printf("Summa str %d  = %f\n", i+1,a);
		b=i+1;	
		}
		else
		printf("Summa str %d = %f\n", i+1,sum);
        sum=0;
	   }
	   	printf("max stroka  = %d ",b);	
	
	
	
	
	return 0;
}
