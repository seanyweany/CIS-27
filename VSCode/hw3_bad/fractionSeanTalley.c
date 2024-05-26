/**
 * Program Name: fractionSeanTalley.h
 * Discussion:   Specification File
 *                 struct Fraction & Relevance
 * Written By:   Sean Talley
 * Date:         2024/05/16
 */

#define _CRT_SECURE_NO_WARNINGS

// Header/include File
#include <stdio.h>
#include <stdlib.h>
#include "fractionSeanTalley.h"
#include "fractionUtilitySeanTalley.h"

TdFractionAddrST createFraction() {
    TdFractionPtrST frPtr = NULL;
    int n;
    int d;

    printf("\nEnter an int for num: ");
    scanf("%d", &n);

    printf("\nEnter a non-zero int for denom: ");
    scanf("%d", &d);

    frPtr = (TdFractionPtrST)
        malloc(sizeof(TdFractionST));

    // To be Updated

    // Working n and d into the final values
    // that can be set to the num and denom

    frPtr->num = n / gcdFL(n, d);
    frPtr->denom = d / gcdFL(n, d);

    printf("\nFraction Address: %p"
    "\n  num: %d"
    "\n  denom: %d\n", frPtr, frPtr->num,
        frPtr->denom);

    return frPtr;
}

void printFraction(TdFractionAddrST frAddr) {
    if (frAddr) {
        printf("\n    Address: %p"
            "\n      num: %d"
            "\n      denom: %d\n",
            frAddr, frAddr->num, frAddr->denom);

        //frAddr->denom = 0;
        //printf("\n  Ha Ha Ha --> denom : %d\n",
        //    frAddr->denom);
    } else {
        printf("\nNo Fraction!\n");
    }
}
