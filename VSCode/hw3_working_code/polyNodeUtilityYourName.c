/**
 * Program Name: polyNodeUtilityYourName.c
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
#include "PolyTermUtilityYourName.h"
#include "PolyNodeYourName.h"
#include "PolyNodeUtilityYourName.h"

// Function Definitions

int searchNode(TdPolyNodePtr nodeAddr,
    TdPolyNodePtr* polyAddr) {
    int nodeNumber = 0;
    TdPolyNodePtr* tmpPtrPtr = polyAddr;

    // TODO

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

    // TODO

    if (nodeNumber) {
        for (int i = 0; i < nodeNumber; i++) {
            tmpPtrPtr = &((*tmpPtrPtr)->next);
        }

        for (int i = 1; i < nodeNumber; i++) {
            tmpNodePtr = tmpNodePtr->next;
        }

        if (tmpNodePtr->termPtr->order == 
            nodeAddr->termPtr->order) {
            (*tmpPtrPt9n ppu r)->termPtr->coeff =
                addFraction((*tmpPtrPtr)->termPtr->coeff,
                    nodeAddr->termPtr->coeff);

            free(nodeAddr->termPtr);
            free(nodeAddr);
        } else {
            nodeAddr->next = *tmpPtrPtr;
            *tmpPtrPtr = nodeAddr;
        }

    } else {
        //nodeAddr->next = *tmpPtrPtr;
        nodeAddr->next = *polyAddr;

        //*tmpPtrPtr = nodeAddr;
        *polyAddr = nodeAddr;
    }
}

void insertPoly(TdPolyNodePtr nodeAddr, 
    TdPolyNodePtr* polyAddr) {
    int nodeNumber;

    nodeNumber = searchNode(nodeAddr, polyAddr);

    insertAfterNode(nodeNumber, nodeAddr, polyAddr);
}

void appendPoly(TdPolyNodePtr nodeAddr,
    TdPolyNodePtr* polyAddr) {
    TdPolyNodePtr* tmpPtrPtr = NULL;

    tmpPtrPtr = polyAddr;

    if (tmpPtrPtr) {
        while (*tmpPtrPtr) {
            tmpPtrPtr = &((*tmpPtrPtr)->next);
        }

        *tmpPtrPtr = nodeAddr;
    } else {
        //*tmpPtrPtr = nodeAddr;
        *polyAddr = nodeAddr;
    }

    //tmpPtrPtr = &((*tmpPtrPtr)->next);

    //tmpPtrPtr = &((*tmpPtrPtr)->next);

    //tmpPtrPtr = &((*tmpPtrPtr)->next);

    //*tmpPtrPtr = nodeAddr;
}

TdPolyNodeAddr createPoly() {
    int option;
    TdPolyNodePtr nodePtr = NULL;
    TdPolyNodePtr polyPtr = NULL;

    do {
        printf("\n**** SubMenu - Creating A Polynomial"
            "\n* (1) Adding a term to Polynomial"
            "\n* (2) Returning to previous menu ..."
            "\nEnter 1 or 2: ");
        scanf("%d", &option);

        switch (option) {
        case 1:
            printf("\nAdding a new term -");
            nodePtr = createPolyNode();

            insertPoly(nodePtr, &polyPtr);
            break;
        case 2:
            printf("\nReturning to previous mene!");
            break;
        default:
            printf("\nWrong Option???\n");
        }
    } while (option != 2);

    return polyPtr;
}

void removePoly(TdPolyNodePtr* polyAddr) {
    TdPolyNodePtr* memberNextPtr = NULL;
    TdPolyNodePtr tmpNodePtr = NULL;

    memberNextPtr = polyAddr;
    while (memberNextPtr) {
        tmpNodePtr = *memberNextPtr;
        memberNextPtr = &((*memberNextPtr)->next);

        free(tmpNodePtr->termPtr);
        free(tmpNodePtr);
    }

    *polyAddr = NULL;
}

void create2Polynomial(TdPolyNodePtr* polyAddr1,
    TdPolyNodePtr* polyAddr2) {

    printf("\nCreating Poly #1 --");
    *polyAddr1 = createPoly();

    printf("\nCreating Poly #2 --");
    *polyAddr2 = createPoly();
}

void displayPoly(TdPolyNodeAddr polyNodeAddr) {
    while (polyNodeAddr) {
        displayPolyNode(polyNodeAddr);

        polyNodeAddr = polyNodeAddr->next;
    }
}


void testAppendPoly() {
    //int option;
    //TdPolyNodePtr poly1 = NULL;

    //TdPolyNodePtr* poly1 = NULL;

    TdPolyNodePtr poly1 = NULL;
    TdPolyNodeAddr polyNodeAddr = NULL;

    TdPolyNodePtr tmpNodePtr = NULL;

    //poly1 = (TdPolyNodePtr)malloc(sizeof(TdPolyNode));

    // Creating node and inserting first
    tmpNodePtr = (TdPolyNodePtr)malloc(sizeof(TdPolyNode));
    tmpNodePtr->next = NULL;
    tmpNodePtr->termPtr = createPolyTerm();

    //poly1 = tmpNodePtr;

    appendPoly(tmpNodePtr, &poly1);

    // Creating node and append
    tmpNodePtr = (TdPolyNodePtr)malloc(sizeof(TdPolyNode));
    tmpNodePtr->next = NULL;
    tmpNodePtr->termPtr = createPolyTerm();

    appendPoly(tmpNodePtr, &poly1);

    //poly1->next = tmpNodePtr;
    //polyNodeAddr = tmpNodePtr;

    // Crating node and append
    tmpNodePtr = (TdPolyNodePtr)malloc(sizeof(TdPolyNode));
    tmpNodePtr->next = NULL;
    tmpNodePtr->termPtr = createPolyTerm();

    appendPoly(tmpNodePtr, &poly1);
    //poly1->next->next = tmpNodePtr;


    // Creating node and inserting
    tmpNodePtr = (TdPolyNodePtr)malloc(sizeof(TdPolyNode));
    tmpNodePtr->next = NULL;
    tmpNodePtr->termPtr = createPolyTerm();

    insertPoly(tmpNodePtr, &poly1);

    // free() the resources!
}