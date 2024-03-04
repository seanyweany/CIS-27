/**
 * Program Name: cis27Lecture0227.c
 * Discussion:   Implentation File
 *                 struct Fraction & Relevance
 * Written By:   Your Name
 * Date:         2024/__/__
 */

#define _CRT_SECURE_NO_WARNINGS

// Header/include File
#include <stdio.h>
#include <stdlib.h>
#include "fractionYourName-2.h"
#include "cis27Lecture0222.h"
#include "cis27Lecture0227.h"

// Function Definitions

void testGcd() {
    int gcd;

    gcd = gcdBF(55, 95);

    printf("\ngcd of (55 and 95) : %d\n", gcd);

    gcd = gcdBF(-55, 95);

    printf("\ngcd of (-55 and 95) : %d\n", gcd);

    return;
}

void testCreateFraction() {
    TdFractionPtrFL frPtr = NULL;

    frPtr = createFractionFL();

    // TODO: freeing stuff
}