/**
 * Program Name:   polyNodeUtilityYourName.h
 * Discussion:     Specification File
 *                   struct Fraction & PolyTerm Relevance
 * Written By:     YourName - First + Space + Last
 * Submitted Date: 2024/__/__
 */

#ifndef POLYNODEUTILITYYOURNAME_H
#define POLYNODEUTILITYYOURNAME_H

 // Header/include File
#include <stdio.h>
#include <stdlib.h>
#include "fractionYourName.h"
#include "fractionUtilityYourName.h"
#include "polyTermYourName.h"
#include "polyTermUtilityYourName.h"
#include "polyNodeYourName.h"

// Function Prototypes

int searchNode(TdPolyNodePtr nodeAddr,
    TdPolyNodePtr* polyAddr);

void insertAfterNode(int nodeNumber,
    TdPolyNodePtr nodeAddr, 
    TdPolyNodePtr* polyAddr);

void insertPoly(TdPolyNodePtr nodeAddr,
    TdPolyNodePtr* polyAddr);

void appendPoly(TdPolyNodePtr nodeAddr,
    TdPolyNodePtr* polyAddr);

void testAppendPoly(void);

TdPolyNodeAddr createPoly(void);
void removePoly(TdPolyNodePtr*);

void create2Polynomial(TdPolyNodePtr*,
    TdPolyNodePtr*);

void updatePoly(TdPolyNodePtr* polyAddr);

void displayPoly(TdPolyNodeAddr poly);

// will be updated

#endif
