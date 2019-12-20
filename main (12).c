

#include <stdio.h>

int main()
{
    int a;
    printf("enter a number");
    scanf("%d",&a);
    if(a%3==0){
        if(a%5==0)
        printf("FIZZBIZZ");
    
    else 
        printf("FIZZ");
    }
    else if(a%5==0){
        printf("BIZZ");
    }
    else 
        printf("no");
    return 0;
}

    
