#include<stdio.h>
int main()
{

    int n,i;
    printf("Enter any positive number= ");
    scanf("%d",&n);
    for(i=2;i<n;i++)
    {
        if(n%i==0)
            printf("not prime number\n");

        else
            printf("prime number\n");
            break;
    }





}
