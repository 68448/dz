#include <stdio.h>
#include <math.h>
#include <conio.h>

int kvadr(float a,float b, float c)
{
	float d,x1,x2;
	d = b*b - 4*a*c;
    if (d>0) {
        x1 =(-b + sqrt(d))/(2*a);
        x2 =(-b - sqrt(d))/(2*a);
        printf("x1=%.2f; x2=%.2f", x1, x2);
    }
    else
        if (d = 0) {
            x1 = -b / (2*a);
            printf("x1=%.2f; x2=%.2f", x1, x2);
        }
        else printf("ne suchesvuet");
    printf("\n");
}


 
int main() {
    float a,b,c,d,x1,x2,otvet;
    printf("a="); scanf("%f",&a);
    printf("b="); scanf("%f",&b);
    printf("c="); scanf("%f",&c);
    otvet=kvadr(a,b,c);
    getch();
    return 0;
}
