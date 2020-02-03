#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <conio.h>

//int main()
//{
//    int a;
//    int b;
//    int c;
//    scanf("%d %d",&a,&b);
//    if(b>a){
//        c=a;
//        a=b;
//        b=c;
//
//    printf("%d %d",a,b);}
//    else
//        printf("az 'a' nagyobb!");
//
//    return;
//}
 /*változó nélkül*/
 int main()
 {
     int a,b;
     scanf("%d %d",&a,&b);
     if(b>a){
        a=a-b;
        b=b+a;
        a=b-a;
        printf("%d %d",a,b);
     }
     else
        puts("hiba");

     return;
 }
