/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int no, sum = 0, r= 0, cube = 0, temp,n;
 
    printf("enter a number");
    scanf("%d", &no);
    scanf("%d",&n);
    temp = no;
    while (no!= 0)
    {
        r = no% 10;
        cube = pow(r, n);
        sum = sum + cube;
        no= no/ 10;
    }
    if (sum == temp)
        printf ("The given no is armstrong no");
    else
        printf ("The given no is not a armstrong no");
}

