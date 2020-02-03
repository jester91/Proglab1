#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <conio.h>

int main(){
    double pont;
    scanf("%lf",&pont);

    if (0>pont || pont>100)
            puts("ervenytelen");
    else if (0<=pont && pont<=42)
            puts("egyes");
    else if (42<=pont && pont<=60)
            puts("kettes");
    else if(72<=pont && pont<=88)
            puts("negyes");
    else
        puts("otos");

    return;

}
