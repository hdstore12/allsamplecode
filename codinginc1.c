#include <stdio.h>
int main()
 {
    double a, b, prod;
    printf("\n Enter two numbers: ");
    scanf("%lf %lf", &a, &b);  
 
    // Calculating product
    prod = a * b;

    // Result up to 2 decimal point is displayed using %.2lf
    printf("\n Product = %.2lf", prod);
    return 0;
}
