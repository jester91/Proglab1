#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main(){
    int a,b,i=2,j,t[1000];
    scanf("%d",&a);
    t[0]=a;
    scanf("%d",&b);
    t[1]=a;
    while(a!=0){
        scanf("%d",&a);
        t[i]=a;
        i++;
    }
    for(j=0;j<i;j++){
        if(t[j]==t[j-1]+t[j-2]){
            printf("\n%d\n",t[j]);
    }
    }
    return 0;
}
