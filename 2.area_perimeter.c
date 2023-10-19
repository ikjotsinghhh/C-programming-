#include <stdio.h>
#define PI 3.14159
void main() {
    float r, s, l, w;
    float ca, cp, sa, sp, ra, rp;
    // Calculate area and perimeter of circle
    printf("Enter the radius of the circle: ");
    scanf("%f", &r);
    ca = PI * r * r;
    cp = 2 * PI * r;
    // Calculate area and perimeter of square
    printf("Enter the side of the square: ");
    scanf("%f", &s);
    sa = s * s;
    sp = 4 * s;
    // Calculate area and perimeter of rectangle
    printf("Enter the length and width of the rectangle: ");
    scanf("%f %f", &l, &w);
    ra = l * w;
    rp = 2 * (l + w);
    // Print the results
    printf("\nCircle:\nArea = %.2f\nPerimeter = %.2f\n", ca, cp);
    printf("\nSquare:\nArea = %.2f\nPerimeter = %.2f\n", sa, sp);
    printf("\nRectangle:\nArea = %.2f\nPerimeter = %.2f\n", ra, rp);
}