#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main(){
    int a,i,szamlalo=0;
    scanf("%d",&a);
    for(i=1;i<=a;i++){
        if(a%i==0){
            szamlalo++;
        }
    }
    if(szamlalo>2){
        puts("ez nem prim");
    }
    else{
        puts("ez prim");
    }
    return 0;
}
