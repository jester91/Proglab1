#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <conio.h>

int main()
{
    double a,b,c,s;
    scanf("%lf %lf %lf",&a,&b,&c);
    if(a>0 && b>0 && c>0 && a+b>c && a+c>b && b+c>a){
        s=(a+b+c)/2;
        printf("szerkesztheto a haromszog, melynek terulet:%lf",sqrt(s*(s-a)*(s-b)*(s-c)));
    }
    else
        puts("nem szerkesztheto");
    return;
}
