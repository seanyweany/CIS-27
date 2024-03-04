/**
 * Program Name: fractionYourName.c
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

TdFractionAddrFL createFractionFL() {
    TdFractionPtrFL frPtr = NULL;
    int n;
    int d;

    printf("\nEnter an int for num: ");
    scanf("%d", &n);

    printf("\nEnter a non-zero int for denom: ");
    scanf("%d", &d);

    frPtr = (TdFractionPtrFL)
        malloc(sizeof(TdFractionFL));

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

//void printFractionFL(struct FractionFirstLast* frPtr) {
void printFractionFL(TdFractionAddrFL frAddr) {
    //int tmp;

    //tmp = (*frPtr).num;
    //printf("\n    Address: %p"
    //   "\n      num: %d\n", frPtr, tmp);

    //tmp = frPtr->denom;

    if (frAddr) {
        printf("\n    Address: %p"
            "\n      num: %d"
            "\n      denom: %d\n",
            frAddr, frAddr->num, frAddr->denom);

        frAddr->denom = 0;
        printf("\n  Ha Ha Ha --> denom : %d\n",
            frAddr->denom);
    } else {
        printf("\nNo Fraction!\n");
    }
}
