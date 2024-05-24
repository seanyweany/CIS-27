/**
 * Program Name: fractionStack.c
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
#include "fractionStack.h"

TdFrStk* createFrStk() {
    TdFrStkPtr tmpPtr = 
        (TdFrStkPtr)malloc(sizeof(TdFrStk));

    tmpPtr->size = 0;
    tmpPtr->frList = NULL;

    return tmpPtr;
}

void pushFrStk(TdFraction fr, TdFrStkPtr stkPtr) {
    TdFractionNodePtr nodePtr = NULL;

    // Fraction Node
    nodePtr = (TdFractionNodePtr)
        malloc(sizeof(TdFractionNode));

    nodePtr->data = fr;
    nodePtr->next = NULL;

    // push onto the stack
    stkPtr->size++;

    nodePtr->next = stkPtr->frList->next;
    stkPtr->frList = nodePtr;
}