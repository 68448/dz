#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <malloc.h>
#include <string.h>
 
 
int main () {
    int n, m, i, j, tmp = 0, k = 0, minNumber = 101, countN = 0, countM = 0; // k - amount elements minNumber //
   
    // Random numbers//
   
    srand(time(0));
    n = 3 + rand() %12;
    m = 4 + rand() %12;
   
    int ar[m][n];
   
    // Number 1 //
   
    printf("Zadanie 1\n\nARRAY:\n");
   
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
           
            ar[i][j] = rand() %100;
            printf("%4d", ar[i][j]);
           
            if (minNumber > ar[i][j]) {
                minNumber = ar [i][j];
                k = 0;
            }
            if (minNumber == ar[i][j]) {
                k++;
            }
        }
        printf("\n");
    }
   
    int min[k * 2];
   
    // Number 2 //
   
    printf("\nZadanie 2\n\nARRAY:\n");
   
    // Zamena linii //
    for ( i = 0; i < n; i++ ) {
        tmp = ar[0][i];
        ar[0][i] = ar[m - 1][n - i - 1];
        ar[m - 1][n - i -1] = tmp;
    }
   
    // Vivod i naxozdenie min coordinat //
    tmp = 0;
    for ( i = 0; i < m; i++ ) {
   
        for ( j = 0; j < n; j++ ) {
           
            printf("%4d", ar[i][j]);
           
            if (minNumber == ar[i][j]) {
                min[tmp] = i;
                tmp++;
                min[tmp] = j;
                tmp++;
            }
        }
        printf("\n");
    }
   
    // Number 3 //
   
    printf("\nZadanie 3\n");
   
    // Poisk [m] in massive 2 //
    tmp = -1;
    for (i = 0; i < k*2-2; i+= 2 ) {
       
        for (j = 2+i; j < k*2; j+= 2) {
            if (min [i] != tmp){
               
                if (min[i] == min[j]) {
                    countM++;
                    tmp = min[i];
                }
            }
        }
    }
   
    // Poisk [n] in massive 2 //
    tmp =  -1;
    for (i = 1; i < (k*2)-1; i = i + 2) {
       
        for (j = 3+i; j < (k*2); j = j + 2) {
            if (tmp != min[i]) {
               
                if (min[i] == min[j]) {
                    countN++;
                    tmp = min[i];
                }
            }
        }
    }
   
    printf("\nCoordinati min points:\n");
   
    // Vivod coord //
    j = 0;
    i = 1;
    for (j = 0; j < k*2; j++) {
       
        if (j%2 == 0) {
            printf("%d. %d and ", i, min[j]);
        }
        else {
            printf("%d \n", min[j]);
            i++;
        }
    }  
   
    int ar2[m-k+countM][n-k+countN];
   
    printf("\n");
   
    tmp = 0;
    int tmp2 = 0;
    int tmp3 = 0;
    int tmp4 = 0;
    int tmp5 = 0;
   
    // sozdanie massiva array2 //
    for (i = 0; i < m; i++ ) {  
       
        tmp4 = 0;
        tmp3 = 0;
       
        for (tmp = 0; tmp < k*2; tmp+= 2) {
            if ( i == min[tmp] ) {
                tmp4 = 1;
            }
        }
       
        if ( tmp4 == 1 ) {
            continue;
        }
 
 
        for (j = 0; j < n; j++ ) {
           
            tmp5 = 0;
 
            for (tmp = 1; tmp < k*2; tmp+= 2) {
                if ( j == min[tmp]) {
                    tmp5 = 1;
                }
            }
            if ( tmp5 == 1 ) {
                continue;
            }
           
            ar2[tmp2][tmp3] = ar[i][j];
            tmp3++;
        }
        tmp2++;
    }
 
 
    // Vivod massiva 2 //
   
    printf("ARRAY:\n");
    for (i = 0; i < m-k+countM; i++ ) {
        for( j = 0; j < n-k+countN; j++ ) {
            printf("%4d", ar2[i][j]);
        }
        printf("\n");
    }
   
   //Zadanie 5//
   int c[m][n-k+countN];
   int d;
   printf("Peremnozenie massivov\n");     
   

	   if (n==(m-k+countM))

	   {

	   for(i = 0; i < m; i++)

          for(j = 0; j < (n-k+countN); j++)

          {

        c[i][j] = 0;

        for(d = 0; d < (m-k+countM); d++)

            c[i][j] += ar[i][d] * ar2[d][j];

          }

            

           for(i=0;i<m;i++)

           {

		   

              for(j=0;j<(n-k+countN);j++)

              {

			

              printf("C[%d][%d]= %d ",i+1,j+1,c[i][j]);

              }

              printf("\n");

	       }

	   }

	          else 

	              printf("peremnozhit' nel'za");
    system("pause");
    return 0;
}
