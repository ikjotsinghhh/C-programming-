#include <stdio.h>
int main() {
    char c;
    int lv, uv;
    printf("Enter an alphabet: ");
    scanf("%c", &c);
    lv = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
    uv = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
    (lv || uv)?printf("%c is a vowel.", c):printf("%c is a consonant.", c);
    return 0;
}