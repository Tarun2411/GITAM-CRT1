/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int n, sum = 0, rem = 0, cube = 0, temp;
 
    printf("enter a number");
    scanf("%d", &n);
    temp = n;
    while (n != 0)
    {
        rem = n% 10;
        cube = pow(rem, 3);
        sum = sum + cube;
        n= n/ 10;
    }
    if (sum == temp)
        printf ("The given no is armstrong no");
    else
        printf ("The given no is not a armstrong no");
}

