#include <stdio.h>

double average(double x, double y, double z);

int main(void) {
    double x, y, z;
    printf("Enter the 3 number to summarize: ");
    scanf("%lf %lf %lf", &x, &y, &z);
    printf("The average is %0.2f\n", average(x, y, z));
    return 0;
}

double average(double x, double y, double z) { return (x + y + z) / 3.0; }