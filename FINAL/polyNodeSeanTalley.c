/**
 * Program Name: polyNodeSeanTalley.c
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
#include "PolyNodeSeanTalley.h"

TdPolyNodeAddr createPolyNode() {
    TdPolyNodePtr polyNodePtr = NULL;

    polyNodePtr = (TdPolyNodePtr)malloc(sizeof(TdPolyNode));

    polyNodePtr->next = NULL;

    polyNodePtr->termPtr = createPolyTerm();
        
    return polyNodePtr;
}

void displayPolyNode(TdPolyNodeAddr polyNodeAddr) {
    printf("\nNode Address: %p"
        "\n  Term Address: %p"
        "\n    order: %d"
        "\n    Fraction - "
        "\n      num: %d"
        "\n      denom: %d"
        "\n  next: %p\n", polyNodeAddr, polyNodeAddr->termPtr,
        polyNodeAddr->termPtr->order,
        polyNodeAddr->termPtr->coeff.num,
        polyNodeAddr->termPtr->coeff.denom,
        polyNodeAddr->next);
}