#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main(){
    int a,b,lkkt;
    scanf("%d %d",&a,&b);
    lkkt=a>b?a:b;
    while(!(lkkt%a==0 && lkkt%b==0)){
        lkkt++;
    }
    printf("%d",lkkt);
    return 0;
}
