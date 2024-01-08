#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int i,j,len,flag=0;
    printf("enter a string:");
    scanf("%s",str);
    len = strlen(str);
    for(i=0,j=len-1;i<j;i++,j--){
        if(str[i]!=str[j]){
            flag = 1;
            break;
        }
    }
    if(flag==0){
        printf("%s is a palindrome",str);
    }else{
        printf("%s is not palindrome",str);
    }
    return 0;
}
