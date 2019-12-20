

#include <stdio.h>

int main()
{            
  int a,b,sum=0;
    scanf("%d\t%d",&a,&b);
    while(a>0){
     if(a%2!=0){
         sum+=b;}
         a=a/2;
         b=b+2;
         
     }
    
        printf("the product of the no.s is %d",sum);
        return 0;
    }
      
      
  

    
