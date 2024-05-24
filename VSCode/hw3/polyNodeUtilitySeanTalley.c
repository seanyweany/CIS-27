/**
 * Program Name: polyNodeUtilitySeanTalley.c
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
#include "PolyTermUtilitySeanTalley.h"
#include "PolyNodeSeanTalley.h"
#include "PolyNodeUtilitySeanTalley.h"

// Function Definitions

int searchNode(TdPolyNodePtr nodeAddr,
    TdPolyNodePtr* polyAddr) {
    int nodeNumber = 0;
    TdPolyNodePtr* tmpPtrPtr = polyAddr;

    // TODO

    if (*polyAddr) {
        

        while ( *tmpPtrPtr && (*tmpPtrPtr)->termPtr->order > nodeAddr->termPtr->order) {
            nodeNumber++;
            tmpPtrPtr = &((*tmpPtrPtr)->next);
        }
    }

    return nodeNumber;
}

void insertAfterNode(int nodeNumber,
    TdPolyNodePtr nodeAddr, TdPolyNodePtr* polyAddr) {
    TdPolyNodePtr* tmpPtrPtr = polyAddr;

    // TODO

    if (nodeNumber) { // 1
        for (int i = 0; i < nodeNumber; i++) {
            tmpPtrPtr = &((*tmpPtrPtr)->next); // segmentation fault
        }

        if ((*tmpPtrPtr)->termPtr->order == nodeAddr->termPtr->order) {
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
        printf("\n            Is there a term (1 : yes, 0 : no)? ");

        scanf("%d", &option);

        switch (option) {
            case 1:
                nodePtr = createPolyNode();
    
                insertPoly(nodePtr, &polyPtr);

                break;
            case 0:
                break;    
            default:
                printf("\nWrong Option!\n");
        }
    } while (option != 0);

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

void create(TdPolyNodePtr* polyAddr1,
    TdPolyNodePtr* polyAddr2) {
    int option;    

    do {
        printf("\n        ********************************"
               "\n        *      create() Submenu        *"
               "\n        * (1) Creating 2 Polynomials   *"
               "\n        * (2) Displaying 2 Polynomials *"
               "\n        * (3) Return                   *"
               "\n        ********************************"
               "\n        Enter an integer for option + ENTER: ");

        scanf("%d", &option);  

        switch (option) {
            case 1:
                printf("\n        Removing existing 2 Poly if existing!\n");

                removePolyNode(*polyAddr1);
                removePolyNode(*polyAddr2);

                printf("\n        Creating 2 new Poly"
                    "\n          Creating Poly #1 -\n");
                *polyAddr1 = createPoly();

                printf("\n          Creating Poly #2 -\n");
                *polyAddr2 = createPoly();

                break;
            case 2:
                printf("\n        Displaying 2 Polynomials -\n"
                    "\n        Poly #1 -\n"
                );

                displayPoly(polyAddr1);

                printf("\n        Poly #2 -");

                displayPoly(polyAddr2);

                break;
            case 3:
                printf("\n        Return to previous menu!\n");

                break;
            default:
                break;
        }
    } while (option != 3);
}

void displayPoly(TdPolyNodeAddr* polyNodeAddr) {
    TdPolyNodePtr* tmpPtrPtrST = polyNodeAddr;
    int numTerm = 1;

    while (*tmpPtrPtrST) {
        numTerm++;

        tmpPtrPtrST = &((*tmpPtrPtrST)->next);
    }

    printf("\n          Address: %p"
        "\n          Degree: %d"
        "\n          Number of Terms: %d",
        *polyNodeAddr, (*polyNodeAddr)->termPtr->order, numTerm
    );

    while (numTerm) {
        printf("\n          Term #%d -\n");

        displayPolyNode(*polyNodeAddr);

        polyNodeAddr = &((*polyNodeAddr)->next);
        numTerm--;
    }
}