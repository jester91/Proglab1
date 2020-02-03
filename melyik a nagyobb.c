#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main(){
    int a,b,nagyobb;
    scanf("%d %d",&a,&b);
    if(a>b){
        nagyobb=a;
    }
    else{
        nagyobb=b;
    }
    printf("nagyobb:%d",nagyobb);
    return 0;
}
