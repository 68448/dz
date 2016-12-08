#include <stdio.h>
#include <conio.h>
#include <malloc.h>

main()

{ 
  char *p = NULL;
  int n,i;
  
	printf("ukazite dlinu = ");
	scanf("%d",&n);
   	p=(char*)malloc((n+1)*sizeof(int));
   	printf("Vvedite chislo\n");
    for (i=0;i<n;i++)
    {
    	scanf("%s",&p[i]);
	}
	
	for (i=0;i<n;i++)
	   {
	   	printf("%c",p[i]);
	   }
	   printf("\n");
	for (i=0;i<n;i++)
	{
	  if ((p[i]>= '0'  && p[i]<='9') || (p[i]>='a' && p[i]<='f') )
	    {
	    	
		}
		else
	    {
	    	
	    	printf("Ne evlaetsa");
	    	break;
		}
	  	 
		
		
		
    }
	printf("yavlaetsa");  
	    
	    	
		 
	   
	   
    
    
    free(p);
    
}
