#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main(){
    int t1[2][3]={1,2,3,
                  4,5,6};
    int t2[3][2]={7,6,
                  5,4,
                  3,2};
    int i,j,k,sum,t3[2][2];
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            sum=0;
            for(k=0;k<3;k++){
                sum+=t1[i][k]*t2[k][j];
            }
        t3[i][j]=sum;
        }

    }
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            printf("%d ",t3[i][j]);
        }
        printf("\n");
    }
return 0;
}
