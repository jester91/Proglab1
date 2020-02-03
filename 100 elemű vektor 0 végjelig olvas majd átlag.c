#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main(){
    double atlag=0;
    int t[100],osszeg=0,flag=0;
    int i=0,j,a;
    scanf("%d",&a);
    while(a!=0){
        t[i]=a;
        i++;
        scanf("%d",&a);
    }
    for(j=0;j<i;j++){
        osszeg+=t[j];
        flag++;
    }
    atlag=(double)osszeg/(double)flag;
    printf("%lf",atlag);

    return 0;

}
