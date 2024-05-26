/**
 * Program Name:   polyNodeYourName.h
 * Discussion:     Specification File
 *                   struct Fraction & PolyTerm Relevance
 * Written By:     YourName - First + Space + Last
 * Submitted Date: 2024/__/__
 */

#ifndef POLYNODEYOURNAME_H
#define POLYNODEYOURNAME_H

 // Header/include File
#include <stdio.h>
#include <stdlib.h>
#include "fractionYourName.h"
#include "fractionUtilityYourName.h"
#include "polyTermYourName.h"
#include "polyTermUtilityYourName.h"

struct PolyNodeFirstLast {
    struct PolyTermFirstLast* termPtr;
    struct PolyNodeFirstLast* next;
};

// typedef

typedef struct PolyNodeFirstLast TdPolyNode;
typedef TdPolyNode* TdPolyNodePtr;
typedef TdPolyNode* TdPolyNodeAddr;

// Function Prototypes

TdPolyNodeAddr createPolyNode(void);
void removePolyNode(TdPolyNodeAddr);

void removeStandAlonePolyNode(TdPolyNodeAddr);

void removeNodeFromPoly(TdPolyNodePtr*, 
    TdPolyNodeAddr);

void testRemovePolyNode2(void);

void displayPolyNode(TdPolyNodeAddr);

// Will be updated

#endif
