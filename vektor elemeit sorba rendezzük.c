#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main(){
    int t[10]={3,2,1,4,6,5,9,10,7,8};
    int res[10];
    int i,j,max,ind;
    for(i=9;i>=0;i--){
        max=-1;
        ind=-1;
        for(j=9;j>=0;j--){
            if(t[j]>max){
                max=t[j];
                ind=j;
            }
        }
        res[i]=max;
        t[ind]=-1;
    }
    for(i=0;i<10;i++){
        printf("%d\n",res[i]);
    }
return 0;
}
