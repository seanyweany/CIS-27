/**
 * Program Name: fractionStack.h
 * Discussion:   Specification File
 *                 struct Fraction & Relevance
 * Written By:   Your Name
 * Date:         2024/__/__
 */

#define _CRT_SECURE_NO_WARNINGS

#ifndef FRACTIONSTACK_H
#define FRACTIONSTACK_H

 // Header/include File
#include <stdio.h>
#include <stdlib.h>
#include "fractionYourName.h"
#include "fractionNode.h"

struct FractionStack {
    int size;
    struct FractionNode* frList;
};

// typedef
typedef struct FractionStack TdFrStk;
typedef TdFrStk* TdFrStkPtr;

// Function Prototypes

TdFrStk* createFrStk(void);

void pushFrStk(TdFraction, TdFrStkPtr);

int removeFraction(TdFractionAddr);
void printFraction(const TdFractionAddr);

// Updated and Additional Function Prototypes

#endif
