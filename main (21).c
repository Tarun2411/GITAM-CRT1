/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{

int i,n,j,res,s=8;
scanf("%d",&n);
printf("%d ",s);
for(i=1;i<=n;i++){
    res=i*(((s)*i)-(i+1));
    printf("%d ",res);
    s=res;
}
    
    return 0;
    }


