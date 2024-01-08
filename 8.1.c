#include <stdio.h>
#include <string.h>
int main() {
    char str1[] = "Hello";
    char str2[] = "World";
    char str3[20];
    strcpy(str3, str1); 
    strcat(str3, " "); 
    strcat(str3, str2);
    printf("Concatenated String: %s\n", str3);
    if (strcmp(str1, str2) == 0) {
        printf("%s is equal to %s\n", str1, str2);
    } else {
        printf("%s is not equal to %s\n", str1, str2);
    }
    printf("Length of %s: %lu\n", str3, strlen(str3));

    char copiedStr[20];
    strcpy(copiedStr, str3);
    printf("Copied String: %s\n", copiedStr);

    int i, j;
    char temp;
    for (i = 0, j = strlen(str3) - 1; i < j; i++, j--) {
        temp = str3[i];
        str3[i] = str3[j];
        str3[j] = temp;
    }
    printf("Reversed String: %s\n", str3);
    return 0;
