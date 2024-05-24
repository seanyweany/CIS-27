/**
 * Program Name:   polyNodeSeanTalley.h
 * Discussion:     Specification File
 *                   struct Fraction & PolyTerm Relevance
 * Written By:     Sean Talley
 * Submitted Date: 2024/05/23
 */

#ifndef POLYNODESEANTALLEY_H
#define POLYNODESEANTALLEY_H

 // Header/include File
#include <stdio.h>
#include <stdlib.h>
#include "fractionSeanTalley.h"
#include "fractionUtilitySeanTalley.h"
#include "polyTermSeanTalley.h"

struct PolyNodeSeanTalley {
    struct PolyTermSeanTalley* termPtr;
    struct PolyNodeSeanTalley* next;
};

// typedef

typedef struct PolyNodeSeanTalley TdPolyNode;
typedef TdPolyNode* TdPolyNodePtr;
typedef TdPolyNode* TdPolyNodeAddr;

// Function Prototypes

TdPolyNodeAddr createPolyNode(void);
void displayPolyNode(TdPolyNodeAddr);

#endif
