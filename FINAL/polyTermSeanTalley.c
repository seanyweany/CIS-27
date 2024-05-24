/**
 * Program Name: polyTermSeanTalley.c
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
#include "PolyTermSeanTalley.h"

TdPolyTermAddr createPolyTerm() {
    int n;
    int d;
    TdPolyTermPtr polyTermPtr = NULL;

    polyTermPtr = (TdPolyTermPtr)malloc(sizeof(TdPolyTerm));

    printf("\n      Enter a non-negative order for term: ");
    scanf("%d", &(polyTermPtr->order));
    
    printf("\n      Enter an int for num: ");
    scanf("%d", &n);

    printf("\n");

    do {
        printf("      Enter a non-zero int for denom: ");
        scanf("%d", &d);
    } while (!d);

    polyTermPtr->coeff.num = n / gcdST(n, d);
    polyTermPtr->coeff.denom = d / gcdST(n, d);
    
    return polyTermPtr;
}

