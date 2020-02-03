#include <stdio.h>
#include <stdlib.h>

int main()
{
    int b,c;
    char a;
    a=getchar();
    scanf("%d %d",&b,&c);
    switch(a){
        case '+': printf("%d",b+c);
            break;
        case '-': printf("%d",b-c);
            break;
        default: puts("nem muveleti jel");
    }
    return 0;
}
