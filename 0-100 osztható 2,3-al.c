#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main(){
    int i,osszeg=0;
    for(i=0;i<=100;i++){
        if(i%2==0 && i%3==0){
            osszeg+=i;
        }
        }

 printf("%d",osszeg);

    return 0;
}
