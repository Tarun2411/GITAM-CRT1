

#include <stdio.h>

int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(a>b&&a>c){
        printf("a is greatest:%d",a);
        }
    else if(b>c&&b>a){
        printf("b is greatest:%d",b);
    }
    else{
        printf("c is greatest:%d",c);
    }

    return 0;
}

    
