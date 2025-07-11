//
// Created by Alon Kamenetsky on 10/07/2025.
//
#include "math.h"
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
        for (int i = 0; i < x; i++)
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