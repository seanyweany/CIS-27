/**
 * Program Name: fractionUtilitySeanTalley.c
 * Discussion:   Specification File
 *                 Support Functions for Fraction
 * Written By:   Sean Talley
 * Date:         2024/05/23
 */

#define _CRT_SECURE_NO_WARNINGS

// Header/include File
#include <stdio.h>
#include <stdlib.h>
#include "fractionSeanTalley.h"

// Function Definitions

int gcdBF(int arg1, int arg2) {
    int gcd = 1;

    for (int i = 2; i <= arg1 && i <= arg2; i++)
        if (arg1 % i == 0 && arg2 % i == 0)
            gcd = i;

    return gcd;
}

int gcdST(int arg1, int arg2) {
    int nUpdate = (arg1 < 0) ? -arg1 : arg1;
    int dUpdate = (arg2 < 0) ? -arg2 : arg2;
    int gcd;

    gcd = gcdBF(nUpdate, dUpdate);

    if (arg2 < 0) {
        gcd = -gcd;
    }

    return gcd;
}

TdFraction addFraction(TdFraction fr1, TdFraction fr2) {
    int n;
    int d;
    int tmp;
    TdFraction tmpFr;

    n = fr1.num * fr2.denom + fr1.denom * fr2.num;
    d = fr1.denom * fr2.denom;

    tmp = gcdST(n, d);

    tmpFr.num = n / tmp;
    tmpFr.denom = d / tmp;

    return tmpFr;
}
