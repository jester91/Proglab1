#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

main(){
    int a,b,c;
    do{
        printf("Kerek ket szamot!: ");
        if (scanf("%d,%d",&a,&b)!=2)
        {
        printf("Hibas adatbevitel!\n");
        continue;
        }
        c=a+b;
        printf("A k�t sz�m �sszege: %d+%d=%d\n",a,b,c);
    } while (getch()!=' ');
}
