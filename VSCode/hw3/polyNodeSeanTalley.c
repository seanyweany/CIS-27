/**
 * Program Name: polyNodeSeanTalley.c
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
#include "PolyTermSeanTalley.h"
#include "PolyNodeSeanTalley.h"

TdPolyNodeAddr createPolyNode() {
    TdPolyNodePtr polyNodePtr = NULL;

    polyNodePtr = (TdPolyNodePtr)malloc(sizeof(TdPolyNode));

    polyNodePtr->next = NULL;

    polyNodePtr->termPtr = createPolyTerm();
        
    return polyNodePtr;
}

void removePolyNode(TdPolyNodeAddr polyNodeAddr) {

    // TODO
}

void removeStandAlonePolyNode(TdPolyNodeAddr polyNodeAddr) {
    free(polyNodeAddr->termPtr);
    free(polyNodeAddr);
}

void removeNodeFromPoly(TdPolyNodePtr* polyAddr,
    TdPolyNodeAddr nodeAddr) {
    TdPolyNodePtr* tmpPtrPtr = NULL;
    TdPolyNodePtr tmpPtr = NULL;

    if (*polyAddr) {
        tmpPtrPtr = polyAddr;
        while (*tmpPtrPtr != nodeAddr) {
            tmpPtrPtr = &((*tmpPtrPtr)->next);
        }

        if (*tmpPtrPtr) {
            tmpPtr = *tmpPtrPtr;
            *tmpPtrPtr = (*tmpPtrPtr)->next;

            free(tmpPtr->termPtr);
            free(tmpPtr);
        }
    }
}

// void testRemovePolyNode2() {
//     //int option;
//     TdPolyNodePtr poly1 = NULL;
//     TdPolyNodeAddr polyNodeAddr = NULL;

//     TdPolyNodePtr tmpNodePtr = NULL;

//     //poly1 = (TdPolyNodePtr)malloc(sizeof(TdPolyNode));

//     // Creating node and inserting first
//     tmpNodePtr = (TdPolyNodePtr)malloc(sizeof(TdPolyNode));
//     tmpNodePtr->next = NULL;
//     tmpNodePtr->termPtr = createPolyTerm();

//     poly1 = tmpNodePtr;

//     // Crating node and append
//     tmpNodePtr = (TdPolyNodePtr)malloc(sizeof(TdPolyNode));
//     tmpNodePtr->next = NULL;
//     tmpNodePtr->termPtr = createPolyTerm();

//     poly1->next = tmpNodePtr;
//     polyNodeAddr = tmpNodePtr;

//     // Crating node and append
//     tmpNodePtr = (TdPolyNodePtr)malloc(sizeof(TdPolyNode));
//     tmpNodePtr->next = NULL;
//     tmpNodePtr->termPtr = createPolyTerm();

//     poly1->next->next = tmpNodePtr;

//     // Removing poly
//     removeNodeFromPoly(&poly1, polyNodeAddr);

//     poly1 = NULL;
//     tmpNodePtr = NULL;
// }

void displayPolyNode(TdPolyNodeAddr polyNodeAddr) {
    printf("\n            Address: %p"
        "\n            Expo: %d"
        "\n            Coefficient - "
        "\n              Address: %p"
        "\n              num: %d"
        "\n              denom: %d\n", polyNodeAddr->termPtr,
        polyNodeAddr->termPtr->order,
        polyNodeAddr->termPtr->coeff,
        polyNodeAddr->termPtr->coeff.num,
        polyNodeAddr->termPtr->coeff.denom);
}