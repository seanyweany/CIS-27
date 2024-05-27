/**
 * Program Name: polyTermSeanTalley.c
 * Discussion:   Implentation File
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
#include "polyTermSeanTalley.h"

TdPolyTermAddr createPolyTerm() {
    int n;
    int d;
    TdPolyTermPtr polyTermPtr = NULL;

    polyTermPtr = (TdPolyTermPtr)malloc(sizeof(TdPolyTerm));

    printf("              Enter expo: ");
    scanf("%d", &(polyTermPtr->order));
    
    printf("              Creating coeff Fraction:"
        "\n                Enter num: "
    );
    scanf("%d", &n);

    printf("                Enter denom: ");
    scanf("%d", &d);

    polyTermPtr->coeff.num = n / gcdFL(n, d);
    polyTermPtr->coeff.denom = d / gcdFL(n, d);
    
    return polyTermPtr;
}

