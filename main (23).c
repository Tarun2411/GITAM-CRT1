/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{

int a=1,i,n;
printf("%d\n",a);
for(i=1;i<=9;i++)
{
    i=i+2;
    printf("%d%d%d\n",a,i,a);
    printf("%d%d%d%d%d\n",a,i,i+2,i,a);
    printf("%d%d%d%d%d%d%d\n",a,i,i+2,i+4,i+2,i,a);
    printf("%d%d%d%d%d%d%d%d%d\n",a,i,i+2,i+4,i+6,i+4,i+2,i,a);
    break;
}    
    return 0;
    }


