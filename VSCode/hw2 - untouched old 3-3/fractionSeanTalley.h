/**
 * Program Name: fractionSeanTalley.h
 * Discussion:   Specification File
 *                 struct Fraction & Relevance
 * Written By:   Sean Talley
 * Date:         2024/03/03
 */

#define _CRT_SECURE_NO_WARNINGS

#ifndef FRACTIONSEANTALLEY_H
#define FRACTIONSEANTALLEY_H

// Header/include File
#include <stdio.h>

struct FractionSeanTalley {
 int num;
 int denom;
};

// typedef
typedef struct FractionSeanTalley TdFractionST;
typedef TdFractionST* TdFractionPtrST;
typedef TdFractionST* TdFractionAddrST;

typedef TdFractionPtrST* TdFractionPtrPtrST;
typedef TdFractionPtrST* TdFractionPtrAryST;

// Function Prototypes
TdFractionAddrST createFractionST(void);
int removeFractionST(TdFractionAddrST);
void printFractionST(TdFractionAddrST);

#endif