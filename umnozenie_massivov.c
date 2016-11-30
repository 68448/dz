#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main()
{
	int sr1,sr2,st1,st2,i,j,d;
	printf("vvedite razmernost' 1 mas\n");
	printf("kol-vo strok= ");scanf("%d",&sr1);
	printf("kol-vo stol= ");scanf("%d",&st1);
	printf("Vvedite razmernost' 2 mas\n");
	printf("kol-vo strok= ");scanf("%d",&sr2);
	printf("kol-vo stol= ");scanf("%d",&st2);
	int A[sr1][st1];
	int B[sr2][st2];
	int C[sr1][st2];
	 for (i=0;i<sr1;i++)
	    for (j=0;j<st1;j++)
	    {
	    	printf("Enter value of A[%d][%d] = ", i+1, j+1);
		    scanf("%d", &A[i][j]);   
        }
        
    for (i=0;i<sr2;i++)
       for(j=0;j<st2;j++)
         {
        	printf("Enter value of B[%d][%d] = ", i+1, j+1);
            scanf("%d", &B[i][j]);
		 }
		 printf("Vivod A mas\n");
	for(i = 0;i < sr1; i++)
	{
		for(j = 0; j < st1;j++)
		{
			printf("A[%d][%d]=%d ",i+1, j+1, A[i][j]);
		}
		printf("\n");
	}
	 printf("Vivod B mas\n");
	for(i = 0;i < sr2; i++)
	{
		for(j = 0; j < st2;j++)
		{
			printf("B[%d][%d]=%d ",i+1, j+1, A[i][j]);
		}
		printf("\n");
	}
	   
	   printf("Peremnozenie massivov\n");
	   if (st1==sr2)
	   {
	   for(i = 0; i < sr1; i++)
          for(j = 0; j < st2; j++)
          {
        C[i][j] = 0;
        for(d = 0; d < sr2; d++)
            C[i][j] += A[i][d] * B[d][j];
          }
            
           for(i=0;i<sr1;i++)
           {
		   
              for(j=0;j<st2;j++)
              {
			
              printf("C[%d][%d]= %d ",i+1,j+1,C[i][j]);
              }
              printf("\n");
	       }
	   }
	          else 
	              printf("peremnozhit' nel'za");
	            
	   
	   
	return 0;
}
