/**
 * Program Name:   polyNodeUtilitySeanTalley.h
 * Discussion:     Specification File
 *                   struct Fraction & PolyTerm Relevance
 * Written By:     Sean Talley
 * Submitted Date: 2024/05/16
 */

#ifndef POLYNODEUTILITYSEANTALLEY_H
#define POLYNODEUTILITYSEANTALLEY_H

 // Header/include File
#include <stdio.h>
#include <stdlib.h>
#include "fractionSeanTalley.h"
#include "fractionUtilitySeanTalley.h"
#include "polyTermSeanTalley.h"
#include "polyTermUtilitySeanTalley.h"
#include "polyNodeSeanTalley.h"

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

void create(TdPolyNodePtr*,
    TdPolyNodePtr*);

void updatePoly(TdPolyNodePtr* polyAddr);

void displayPoly(TdPolyNodeAddr* poly);

// will be updated

#endif
