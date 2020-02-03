#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main(){
    int n,i=2,sum=1,osszeg=0;
    scanf("%d",&n);
    while(sum<=n){
        sum+=i;
        i++;
        osszeg++;
    }
    printf("%d",osszeg);
    return 0;
}
