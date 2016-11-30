#include <stdio.h>
#include <stdlib.h>
#define N 5

int frand()
{
	int i,a,b;
printf("ygadai chislo\n\n");
    srand(time(NULL));
    a = rand()%100;
    for (i=0; i < N; i++)
    {
        printf("Vvedite chislo\n");
        scanf("%d", &b);
        
        if (a == b) break;
        
    }
    
    if (i == N) printf("You lose\n");
    else printf("You win!\n");
    printf("Chislo a = %d",a);
	return 0;	
}




int main()
{
    int i, a, b;
    frand(b);
    
    getch();
    return 0;
}
