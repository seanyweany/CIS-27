/**
 * Program Name: cis27Lecture0222.h
 * Discussion:   Specification File
 *                 Support Functions for Fraction
 * Written By:   YourName - First + Space + Last
 * Date:         2024/__/__
 */

#ifndef CIS27LECTURE0222_H
#define CIS27LECTURE0222_H

 // Header/include File
#include <stdio.h>
#include <stdlib.h>
#include "fractionYourName.h"

struct FractionNode {
    TdFractionFL data;
    struct FractionNode* next;
};

typedef struct FractionNode TdFractionNode;
typedef TdFractionNode* TdFractionNodePtr;

// Function Prototypes

void testFractionNode(void);

#endif
