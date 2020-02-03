#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main(){
    int n;
    scanf("%d",&n);
    switch(n){
        case 1 :puts("egyes");
        break;
        case 2 :puts("kettes");
        break;
        default :puts("nincs");
    }
    return 0;
}
