// First and second derivation using Central Difference Formula
#include <stdio.h>
#include <math.h>

float f(float x)
{
    return exp(x) * sqrt(sin(x) + log(x));
}

int main()
{
    float a, h, fd1, fd2;
    char choice;
    do
    {

        printf("Central Difference ");
        printf("\nEnter the point at which derivatives are required: ");
        scanf("%f", &a);
        printf("\nEnter the value of h: ");
        scanf("%f", &h);
        fd1 = (f(a + h) - f(a - h)) / (2 * h);
        fd2 = (f(a + h) - 2 * f(a) + f(a - h)) / (h * h);
        printf("\nTHe first and second derivative at x=%f are %f and %f respectively", a, fd1, fd2);
        printf("\nDo you want to input another value? (y/n):");
        fflush(stdin);
        scanf("%c", &choice);
    } while (choice == 'y' || choice == 'Y');
    getch();
    return 0;
}
