/**
 * Program Name: fractionSeanTalley.h
 * Discussion:   Specification File
 *                 struct Fraction & Relevance
 * Written By:   Sean Talley
 * Date:         2024/05/23
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
typedef struct FractionSeanTalley TdFraction;
typedef TdFraction* TdFractionPtr;
typedef TdFraction* TdFractionAddr;

// Function Prototypes

TdFractionAddr createFraction(void);
int removeFraction(TdFractionAddr);
void printFraction(const TdFractionAddr);

// No additional functions are allowed!

#endif
