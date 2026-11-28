#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>
int main(){
    // CIRCLE CALCULATOR
    double radius = 0.0;
    double area = 0.0;
    double surfacearea = 0.0;
    double volume = 0.0;
    const double PI = 3.14159;
    printf("Enter your radius: ");
    scanf("%lf", &radius);

    area = PI * pow(radius, 2);
    printf("Area: %.2lf\n", area);
    surfacearea = 4 * PI * pow(radius, 2);
    printf("Surface area: %.2lf\n", surfacearea);
    volume = (4.0 / 3.0) * PI * pow(radius, 3);
    printf("Volume: %.2lf", volume);

    return 0;
}