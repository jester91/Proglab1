#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main(){
    int n,i=1,sum=0,osszeg=0;
    scanf("%d",&n);
    while(sum<n){
        sum+=i;
        i++;
        osszeg++;
    }
    printf("%d",osszeg);
    return 0;
}
