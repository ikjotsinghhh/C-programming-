#include <stdio.h>

int main() {
    int n, num, max;
    
    printf("Enter the value of n: ");
    scanf("%d", &n);
    
    printf("Enter number 1: ");
    scanf("%d", &max);
    
    for(int i = 2; i <= n; i++) {
        printf("Enter number %d: ", i);
        scanf("%d", &num);
        
        if(num > max) {
            max = num;
        }
    }
    
    printf("The maximum number is: %d", max);
    
    return 0;
}