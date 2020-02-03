#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main(){
    int a;
    int i,sum;
    scanf("%d",&a);
    sum=1;
    if(a>0 && a<=12){
        for(i=1;i<=a;i++){
            sum*=i;
        }
    }
    else{
        puts("nem jo a szam");
    }
    return sum;
}
