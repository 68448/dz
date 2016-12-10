#include <stdio.h>
#include <conio.h>
#include <malloc.h>
#include <ctype.h>


int name(char , char );

main()

{ 
  int i,j,n,m;
  int otv;
  
  char name[10][20]= {"NIKITA","KOLAN","STEPAN","IVAN","MARIA","ANDREI","ARCENIY"};
  char ima[20];

  
  printf("enter name = ");
  scanf("%s",&ima);
  strupr(ima);
  
  for (i=0;i<10;i++)
  {
    otv=strcmp(name[i],ima);
    if(otv==0)
    {
    	printf("name in base\n");
    	break;
    
	}
	if (i==9)
	{
		printf("name is not in base\n");
	}
  
  }
    

return 0;
}
