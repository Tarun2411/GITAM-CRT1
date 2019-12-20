/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{

int i,n,j,res,s1=80,s=10;
scanf("%d",&n);
printf("%d ",s1);
printf("%d ",s);
for(i=1;i<=n;i++)
{
    if(i%2==0){
    s=s+5;
    printf("%d ",s);
}
else{
    s1=s1-10;
    printf("%d ",s1);
}
}

    
    return 0;
    }


