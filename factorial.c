#include<stdio.h>
int main()
{
    int i,n;
    unsigned long long factorial =1;

    printf("enter a positive integer :");
    scanf("%d",&n);

    if(n<0)
    printf("error! factorial of negative number don't exist");
    else 
    {
        for(int i=1; i<=n; i++)
        {
            factorial*=i;
        }
        printf("\n factorial of given number is %d",factorial);
    }
    return 0;
}