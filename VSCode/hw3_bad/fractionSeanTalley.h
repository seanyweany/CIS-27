/**
 * Program Name: fractionSeanTalley.h
 * Discussion:   Specification File
 *                 struct Fraction & Relevance
 * Written By:   Sean Talley
 * Date:         2024/05/16
 */

#define _CRT_SECURE_NO_WARNINGS

#ifndef FRACTIONSEANTALLEY_H
#define FRACTIONSEANTALLEY_H

// Header/include File
#include <stdio.h>
#include <stdlib.h>

struct FractionSeanTalley {
    int num;
    int denom;
};

// typedef
typedef struct FractionSeanTalley TdFractionST;
typedef TdFractionST* TdFractionPtrST;
typedef TdFractionST* TdFractionAddrST;

// Function Prototypes

TdFractionAddrST createFractionST(void);
int removeFractionST(TdFractionAddrST);
void printFraction(const TdFractionAddrST);

// Updated and Additional Function Prototypes

#endif