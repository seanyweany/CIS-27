/**
 * Program Name: fractionSeanTalley.c
 * Discussion:   Implentation File
 *                 struct Fraction & Relevance
 * Written By:   Sean Talley
 * Date:         2024/05/23
 */

#define _CRT_SECURE_NO_WARNINGS

// Header/include File
#include <stdio.h>
#include <stdlib.h>
#include "fractionSeanTalley.h"
#include "fractionUtilitySeanTalley.h"

TdFractionAddr createFraction() {
    TdFractionPtr frPtr = NULL;
    int n;
    int d;

    printf("\nEnter an int for num: ");
    scanf("%d", &n);

    printf("\nEnter a non-zero int for denom: ");
    scanf("%d", &d);

    frPtr = (TdFractionPtr)
        malloc(sizeof(TdFraction));

    // Working n and d into the final values
    // that can be set to the num and denom

    frPtr->num = n / gcdST(n, d);
    frPtr->denom = d / gcdST(n, d);

    printf("\nFraction Address: %p"
    "\n  num: %d"
    "\n  denom: %d\n", frPtr, frPtr->num,
        frPtr->denom);

    return frPtr;
}

void printFraction(TdFractionAddr frAddr) {
    if (frAddr) {
        printf("\n    Address: %p"
            "\n      num: %d"
            "\n      denom: %d\n",
            frAddr, frAddr->num, frAddr->denom);
    } else {
        printf("\nNo Fraction!\n");
    }
}
