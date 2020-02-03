#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main(){
    int a,i;
    int t[9]={1,2,3,4,5,6,7,8,9};
    scanf("%d",&a);
    for(i=0;i<9;i++){
        if(a==t[i]){
            printf("%d",i+1);
        }
    }
return 0;
}
