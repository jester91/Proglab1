#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <conio.h>

int main()
{
    int ev;
    scanf("%d",&ev);
     if(ev%400==0 || (ev%4==0 && ev%100!=0)){
        puts("ez szokoev");
     }
     else
        puts("ez nem szokoev");

     return;
}
