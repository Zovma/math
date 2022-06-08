#include <stdio.h>
#include <math.h>

long double s21_fabs(double x) {
    unsigned long n = x;
    float disp = x - n;
    float result = n + x;
    printf("%f", result);
    return 0;
}




int main() {
    long double n = fabs(-3.3);
    // printf("%Lf", n); 
    s21_fabs(n);


    return 0;
}


