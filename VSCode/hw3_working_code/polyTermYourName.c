/**
 * Program Name: polyTermYourName.c
 * Discussion:   Implentation File
 *                 struct Fraction & Relevance
 * Written By:   Your Name
 * Date:         2024/__/__
 */

#define _CRT_SECURE_NO_WARNINGS

// Header/include File
#include <stdio.h>
#include <stdlib.h>
#include "fractionYourName.h"
#include "fractionUtilityYourName.h"
#include "PolyTermYourName.h"

TdPolyTermAddr createPolyTerm() {
    int n;
    int d;
    TdPolyTermPtr polyTermPtr = NULL;

    polyTermPtr = (TdPolyTermPtr)malloc(sizeof(TdPolyTerm));

    printf("\nEnter a non-negative order for term: ");
    scanf("%d", &(polyTermPtr->order));
    
    printf("\nEnter an int for num: ");
    scanf("%d", &n);

    printf("\nEnter a non-zero int for denom: ");
    scanf("%d", &d);

    polyTermPtr->coeff.num = n / gcdFL(n, d);
    polyTermPtr->coeff.denom = d / gcdFL(n, d);
    
    return polyTermPtr;
}

