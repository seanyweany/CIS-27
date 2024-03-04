/**
 * Program Name: cis27Lecture0222.c
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
#include "cis27Lecture0222.h"

// Function Definitions

void testFractionNode() {
    int n;
    int d;
    TdFractionNodePtr aPtr = NULL;

    printf("\nEnter an int for num: ");
    scanf("%d", &n);

    printf("\nEnter a non-zero int for denom: ");
    scanf("%d", &d);

    aPtr = (TdFractionNodePtr)
        malloc(sizeof(TdFractionNode));

    //aPtr = NULL;
    //aPtr = 1000000;

    printf("\nSize of FractionNode: %d\n",
        sizeof(TdFractionNode));

    aPtr->data.num = n;
    aPtr->data.denom = d;
    aPtr->next = aPtr;

    // TODO

    free(aPtr);
    aPtr = NULL;

    /*
    for (int i = 0; i < 1000000; i++) {
        int tmp = 0;
        (aPtr + i)->data.num = n;
        aPtr->data.denom = d;
        aPtr->next = aPtr;
    }
    */

    return;
}