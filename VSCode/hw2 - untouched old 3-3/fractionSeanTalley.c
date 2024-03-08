/**
 * Program Name: fractionSeanTalley.c
 * Discussion:   Implementation File
 * Written By:   Sean Talley
 * Date:         2024/03/03
 */

// Header/include File
#include <stdio.h>
#include <stdlib.h>
#include "fractionSeanTalley.h"
#include "fractionUtilitySeanTalley.h"

TdFractionAddrST createFractionST() {
    TdFractionPtrST frPtr = NULL;
    int n;
    int d;

    printf("\n    Enter an int for num: ");
    scanf("%d", &n);

    printf("\n    Enter a non-zero int for denom: ");
    scanf("%d", &d);

    frPtr = (TdFractionPtrST)
        malloc(sizeof(TdFractionST));

    // To be Updated

    // Working n and d into the final values
    // that can be set to the num and denom

    frPtr->num = n / gcdST(n, d);
    frPtr->denom = d / gcdST(n, d);

    printFractionST(frPtr);

    return frPtr;
}

void printFractionST(TdFractionAddrST frAddr) {
    printf("      Address: %p\n"
           "        num: %d\n"
           "        denom: %d\n\n",
    frAddr, frAddr->num, frAddr->denom);
}