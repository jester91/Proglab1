#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main(){
    int a,b,i;
    scanf("%d %d",&a,&b);
    if(a<b){
        for(i=a;i<=b;i++){
            if(i%2==0){
                printf("%d\n",i);
            }
        }
    }
    else {
        for(i=a;i>b;i--){
            if(i%2==0){
                printf("%d\n",i);
            }
        }
    }
    return 0;
}
