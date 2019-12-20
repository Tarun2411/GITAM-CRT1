#include <stdio.h>

#define start main 
void start(){
    int a,b;
    printf("enter 2 numbers");
    scanf("%d %d",&a,&b);
    printf("difference=%d",a+~b+1);
}
