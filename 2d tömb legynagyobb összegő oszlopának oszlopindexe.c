#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main(){
    int t[4][4]={2,1,4,3,2,1,4,3,2,1,4,3,2,1,4,3};
    int t1[50];
    int i,j,k,osszeg,max=0;
    for(i=0;i<4;i++){
        osszeg=0;
        for(j=0;j<4;j++){
            osszeg+=t[j][i];
        }
        if(osszeg>max){
            max=osszeg;
            k=i;
        }
    }
    printf("%d.",k+1);
return 0;
}
