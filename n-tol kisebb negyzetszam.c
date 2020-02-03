#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main(){
    int n,i=0,sz;
    scanf("%d",&n);
    while(sz<=n){
        ++i;
        sz=0;
        sz=i*i;
        }
        if(sz>n){
            --i;
            sz=i*i;
    }
    printf("%d",sz);

    return 0;
}
