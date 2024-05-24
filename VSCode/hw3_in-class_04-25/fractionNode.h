/**
 * Program Name: fractionNode.h
 * Discussion:   Specification File
 *                 struct Fraction & Relevance
 * Written By:   Your Name
 * Date:         2024/__/__
 */

#define _CRT_SECURE_NO_WARNINGS

#ifndef FRACTIONNODE_H
#define FRACTIONNODE_H

 // Header/include File
#include <stdio.h>
#include <stdlib.h>
#include "fractionYourName.h"

struct FractionNode {
    TdFraction data;
    struct FractionNode* next;
};

// typedef

typedef struct FractionNode TdFractionNode;
typedef TdFractionNode* TdFractionNodePtr;
typedef TdFractionNode* TdFractionNodeAddr;

// Function Prototypes

TdFractionNodeAddr createFractionNode(void);
int removeFractionNode(TdFractionNodeAddr);
void printFractionNode(const TdFractionNodeAddr);

// Updated and Additional Function Prototypes

#endif
