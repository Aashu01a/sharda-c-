#include <math.h>
#include <stdio.h>

int main() 
{
    double a, b, c, d, root1, root2, realPart, imaginaryPart;
    printf("Enter coefficients a, b and c: ");

    scanf("%lf %lf %lf", &a, &b, &c);

    d = b * b - 4 * a * c;

    if (d > 0) 
    {
        root1 = (-b + sqrt(d)) / (2 * a);
        root2 = (-b - sqrt(d)) / (2 * a);
        printf("root1 = %.2f and root2 = %.2f\n", root1, root2); 
    }
    else if (d == 0) 
    {
        root1 = root2 = -b / (2 * a);
        printf("root1 = root2 = %.2f\n", root1);
    }
    else 
    {
        realPart = -b / (2 * a);
        imaginaryPart = sqrt(-d) / (2 * a);
        printf("roots are imaginary: %.2f + %.2fi and %.2f - %.2fi\n", realPart, imaginaryPart, realPart, imaginaryPart);
    }

    return 0;
}