#include <stdio.h>
#include <stdlib.h>

int main(){
int n,i=1;
scanf("%d",&n);
for(i=1;i*i<=n;++i)
    ;
--i;
return i*i;
}
