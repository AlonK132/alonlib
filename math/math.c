//
// Created by Alon Kamenetsky on 10/07/2025.
//
#include "math.h"

#include <stddef.h>
#define M_E 2.718281828459045
double al_fabs(double x){
    if(x <= 0)
        return -x;
    return x;
}
long double al_exp(double x){
    if(x > 0) {
        double e = M_E;
        long double result = e;
        for (int i = 0; i < x - 1; i++)
            result = result * e;
        return result;
    }
    else if(x == 0)
        return 1;
    else{
        double  e = 1/M_E;
        long double result = e;
        for (int i = 0; i < x; i++)
            result = result * e;
        return result;
    }
}
double al_pow(double x, int n) {
    if (x == 0)
        return 0;
    if (n < 0) {
        x = 1 / x;
        n = -n;
    }
    if (n == 0)
        return 1;
    if (x == 1)
        return x;
    if (x == -1) {
        if (n % 2 == 0)
            return 1;
        return -1;
    }
    double result = 1;
    for(int i = 1; i <= n; i++) {
        result = result * x;
    }
    return result;
}
long long al_factorial(int n) {
    if(n == 0)
        return 1;
    if(n < 0)
        return 0;
    long long result = 1;
    for(int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}
double al_cos(double x) {
    int n = 10;
    double result = 0;
    for (int i = 0; i < n; i++){
        double temp = 0;
        temp = al_pow(-1, i) * al_pow(x, 2*i) / al_factorial(2*i);
        result = result + temp;
    }
    return result;
}