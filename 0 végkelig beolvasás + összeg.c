#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main(){
    int n,osszeg=0;
    scanf("%d",&n);
    osszeg+=n;
    while(n != 0){
        scanf("%d",&n);
        osszeg+=n;
    }
    return osszeg;
}
