#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <conio.h>

int main(){
    int a[]={1,2,3,4,5};
    int b[]={1,2,3,4,5};
    int c[5];
    int i,sz;
    for(i=0;i<5;i++){
        c[i]=a[i]*b[i];
        printf("%d\t",c[i]);
    }
    return 0;

}
