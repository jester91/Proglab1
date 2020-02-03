#include <stdio.h>
#include <stdlib.h>

int main(){
int n,i,osszeg=0;
scanf("%d",&n);
for(i=0;i<=n;i++){
    osszeg+=i;
}
printf("%d",osszeg);

return 0;
}
