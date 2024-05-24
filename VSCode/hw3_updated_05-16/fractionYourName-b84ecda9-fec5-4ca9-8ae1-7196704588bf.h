/**
 * Program Name: fractionYourName.h
 * Discussion:   Specification File
 *                 struct Fraction & Relevance
 * Written By:   Your Name
 * Date:         2024/__/__
 */

#define _CRT_SECURE_NO_WARNINGS

#ifndef FRACTION_H
#define FRACTION_H

 // Header/include File
#include <stdio.h>
#include <stdlib.h>

struct FractionFirstLast {
    int num;
    int denom;
};

// typedef
typedef struct FractionFirstLast TdFraction;
typedef TdFraction* TdFractionPtr;
typedef TdFraction* TdFractionAddr;

// Function Prototypes

TdFractionAddr createFraction(void);
int removeFraction(TdFractionAddr);
void printFraction(const TdFractionAddr);

// Updated and Additional Function Prototypes

#endif
