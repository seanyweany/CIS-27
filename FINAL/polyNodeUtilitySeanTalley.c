/**
 * Program Name: polyNodeUtilitySeanTalley.c
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
#include "PolyNodeUtilitySeanTalley.h"
#include "cis27Spring2024UtilitySeanTalley.h"

// Function Definitions

int searchNode(TdPolyNodePtr nodeAddr,
    TdPolyNodePtr* polyAddr) {
    int nodeNumber = 0;
    TdPolyNodePtr* tmpPtrPtr = polyAddr;

    if (*polyAddr) {
        while ((*tmpPtrPtr) && 
            ((*tmpPtrPtr)->termPtr->order > 
            nodeAddr->termPtr->order)) {
            nodeNumber++;
            tmpPtrPtr = &((*tmpPtrPtr)->next);
        }
    } 

    return nodeNumber;
}

void insertAfterNode(int nodeNumber,
    TdPolyNodePtr nodeAddr, TdPolyNodePtr* polyAddr) {
    TdPolyNodePtr* tmpPtrPtr = polyAddr;
    TdPolyNodePtr tmpNodePtr = *polyAddr;

    if (nodeNumber) {
        for (int i = 0; i < nodeNumber; i++) {
            tmpPtrPtr = &((*tmpPtrPtr)->next);
        }

        for (int i = 1; i < nodeNumber; i++) {
            tmpNodePtr = tmpNodePtr->next;
        }

        if (tmpNodePtr->termPtr->order == 
            nodeAddr->termPtr->order) {
            (*tmpPtrPtr)->termPtr->coeff =
                addFraction((*tmpPtrPtr)->termPtr->coeff,
                    nodeAddr->termPtr->coeff);

            free(nodeAddr->termPtr);
            free(nodeAddr);
        } else {
            nodeAddr->next = *tmpPtrPtr;
            *tmpPtrPtr = nodeAddr;
        }

    } else {
        nodeAddr->next = *polyAddr;
        *polyAddr = nodeAddr;
    }
}

void insertPoly(TdPolyNodePtr nodeAddr, 
    TdPolyNodePtr* polyAddr) {
    int nodeNumber;

    nodeNumber = searchNode(nodeAddr, polyAddr);

    insertAfterNode(nodeNumber, nodeAddr, polyAddr);
}

TdPolyNodeAddr createPoly() {
    int option;
    TdPolyNodePtr nodePtr = NULL;
    TdPolyNodePtr polyPtr = NULL;

    do {
        printf(
            "\n    ************************"
            "\n    *  Creating Submenu    *"
            "\n    * 1. Getting Term Info *"
            "\n    * 2. Returning         *"
            "\n    ************************"
            "\n    Enter an integer for option(1 - 2) : ");
        scanf("%d", &option);

        switch (option) {
            case 1:
                printf("\n    Do not enter new term with existing orders!\n"
                       "\n    Adding a new term -");
                nodePtr = createPolyNode();

                insertPoly(nodePtr, &polyPtr);
                break;
            case 2:
                printf("\n    Returning to previous menu ...\n");

                break;
            default:
                printf("\nWrong Option???\n");
        }
    } while (option != 2);

    return polyPtr;
}

void removePoly(TdPolyNodePtr* polyAddr) {
    TdPolyNodePtr currentNodePtr = NULL;
    TdPolyNodePtr nextNodePtr = NULL;

    currentNodePtr = *polyAddr;
    while (currentNodePtr) {
        nextNodePtr = currentNodePtr->next;

        free(currentNodePtr->termPtr);
        free(currentNodePtr);

        currentNodePtr = nextNodePtr;
    }

    *polyAddr = NULL;
}

void removePolyA(TdPolyNodePtr* polyAddr) {
    TdPolyNodePtr currentNodePtr = NULL;
    TdPolyNodePtr nextNodePtr = NULL;

    currentNodePtr = *polyAddr;
    while (currentNodePtr) {
        nextNodePtr = currentNodePtr->next;

        free(currentNodePtr->termPtr);
        free(currentNodePtr);

        currentNodePtr = nextNodePtr;
    }

    *polyAddr = NULL;
}

void createOnePolynomial(TdPolyNodePtr* polyAddr) {

    printf("\n    While running createOnePolynomial() to include"
           "\n      createPoly(), createPolyNode()"
           "\n      insertPoly(), and more\n"
    );
    *polyAddr = createPoly();
}

