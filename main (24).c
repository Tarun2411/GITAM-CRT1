/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{

int N,i,j;
    scanf("%d ",&N);
   
    if(N>=5 && N<=10){
        for(i=N;i>=1;i--)
        {
        for(j=i;j<=N;j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }
}

}