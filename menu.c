#include <stdio.h>

void main() {
    int ch;
    float r, s, l, b, area, pr;

    printf("Menu:\n");
    printf("1. Circle\n");
    printf("2. Square\n");
    printf("3. Rectangle\n");
    printf("Enter your choice: ");
    scanf("%d", &ch);

    if (ch == 1) {
        printf("Enter the radius of the circle: ");
        scanf("%f", &r);
        area = 3.14 * r * r;
        pr = 2 * 3.14 * r;
        printf("Area of the circle = %.2f\n", area);
        printf("Perimeter of the circle = %.2f\n", pr);
    }
    else if (ch == 2) {
        printf("Enter the side of the square: ");
        scanf("%f", &s);
        area = s * s;
        pr = 4 * s;
        printf("Area of the square = %.2f\n", area);
        printf("Perimeter of the square = %.2f\n", pr);
    }
    else if (ch == 3) {
        printf("Enter the length of the rectangle: ");
        scanf("%f", &l);
        printf("Enter the width of the rectangle: ");
        scanf("%f", &b);
        area = l * b;
        pr = 2 * (l + b);
        printf("Area of the rectangle = %.2f\n", area);
        printf("Perimeter of the rectangle = %.2f\n", pr);
    }
    else {
        printf("Invalid choice\n");
    }
}