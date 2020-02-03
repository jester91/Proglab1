#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <conio.h>

int main(){
//    int i,osszeg=0,t[10];
//    for(i=0;i<10;i++){
//        scanf("%d",&t[i]);
//        osszeg+=t[i];
//    }
//    for(i=0;i<9;i++){
//        printf("%d+",t[i]);
//    }
//    printf("%d=%d",t[9],osszeg);
//    return 0;
    /*tömbösen*/
    int i,osszeg=0,n;
    scanf("%d",&n);
    int t[n];
    for(i=0;i<n;i++){
        scanf("%d",&t[i]);
        osszeg+=t[i];
    }
    for(i=0;i<n-1;i++){
        printf("%d+",t[i]);
    }
    printf("%d=%d",t[n-1],osszeg);
    return 0;
}

