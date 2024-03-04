/**
 * Program Name: fractionYourName.h
 * Discussion:   Specification File
 *                 struct Fraction & Relevance
 * Written By:   Your Name
 * Date:         2024/__/__
 */

#define _CRT_SECURE_NO_WARNINGS

#ifndef FRACTIONYOURNAME_H
#define FRACTIONYOURNAME_H

// Header/include File
#include<stdio.h>
#include <stdlib.h>

struct FractionFirstLast {
    int num;
    int denom;
};

// typedef
typedef struct FractionFirstLast TdFractionFL;
typedef TdFractionFL* TdFractionPtrFL;
typedef TdFractionFL* TdFractionAddrFL;

typedef TdFractionPtrFL* TdFractionPtrPtrFL;
typedef TdFractionPtrFL* TdFractionPtrAryFL;

// Function Prototypes

TdFractionAddrFL createFractionFL(void);
int removeFractionFL(TdFractionAddrFL);
void printFraction(TdFractionAddrFL);

#endif
