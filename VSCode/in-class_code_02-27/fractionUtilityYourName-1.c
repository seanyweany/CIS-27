/**
 * Program Name: fractionUtilityYourName.c
 * Discussion:   Specification File
 *                 Support Functions for Fraction
 * Written By:   YourName - First + Space + Last
 * Date:         2024/__/__
 */

#define _CRT_SECURE_NO_WARNINGS

// Header/include File
#include <stdio.h>
#include <stdlib.h>
#include "fractionYourName-2.h"

// Function Definitions

int gcdBF(int arg1, int arg2) {
    int gcd = 1;

    for (int i = 2; i <= arg1 && i <= arg2; i++)
        if (arg1 % i == 0 && arg2 % i == 0)
            gcd = i;

    return gcd;
}

int gcdRecur(int arg1, int arg2) {
    if (arg1 % arg2 == 0)
        return arg2;
    else
        return gcdRecur(arg2, arg1 % arg2);
}

int gcdFL(int arg1, int arg2) {
    int nUpdate = (arg1 < 0) ? -arg1 : arg1;
    int dUpdate = (arg2 < 0) ? -arg2 : arg2;
    int gcd;

    gcd = gcdBF(nUpdate, dUpdate);

    // TODO

    if (arg2 < 0) {
        gcd = -gcd;
    }

    // TODO!
    //   To Be Updated

    return gcd;
}
