#include <math.h>
#include <stdio.h>

long double s21_fabs(double x) {
    if (x < 0) x *= -1;
    unsigned long n = x;
    long double rest = x - n;
    long double result = n + rest;
    return result;
}

int main() {
    double num[] = {345657654.23345345, 345456456.4564564564, 543565467.3456545765, 345464563.34563456456, 6435634563456.34563456, 99999999.9999999, 0.0};


    for(int i = 0; i < 7; i++) {
        long double s21 = s21_fabs(num[i]);
        long double fab = fabs(num[i]);
        printf("%Le and %le ", s21_fabs(num[i]), fabs(num[i]));
        if (((s21 - fab) < 0.00000001) && ((s21 - fab) > -0.00000001)) {
            printf("Равны \n");
        } else {
            printf("Не равны\n");
        }

    }

    return 0;
}
