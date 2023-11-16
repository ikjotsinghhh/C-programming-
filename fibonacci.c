#include<stdio.h>
int main()
{
    int f=0,s=1,i,n;
    printf("enter the value of n:");
    scanf("%d",&n);
    for(i=0;i<10;i++)
    {
     printf("%d\n",f);
     int next=f+s;
     f=s;
     s=next;
    }
    return 0;
}