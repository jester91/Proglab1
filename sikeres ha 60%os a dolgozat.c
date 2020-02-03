#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <conio.h>

int main(){
    double pont;
    double max;
    scanf("%lf %lf",&pont,&max);
    if(max*0.6<=pont)
        puts("sikeres");
    else
        puts("sikertelen");
    return;
}
