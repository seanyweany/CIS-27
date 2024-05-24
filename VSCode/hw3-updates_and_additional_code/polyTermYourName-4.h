/**
 * Program Name:   polyTermYourName.h
 * Discussion:     Specification File
 *                   struct Fraction & PolyTerm Relevance
 * Written By:     YourName - First + Space + Last
 * Submitted Date: 2024/__/__
 */

#ifndef POLYTERMYOURNAME_H
#define POLYTERMYOURNAME_H

 // Header/include File
#include <stdio.h>
#include <stdlib.h>
#include "fractionYourName.h"
#include "fractionUtilityYourName.h"


struct PolyTermFirstLast {
    int order;
    struct FractionFirstLast coeff;
};

// typedef

typedef struct PolyTermFirstLast TdPolyTerm;
typedef TdPolyTerm* TdPolyTermPtr;
typedef TdPolyTerm* TdPolyTermAddr;

// Function Prototypes

TdPolyTermAddr createPolyTerm(void);

// will be updated

#endif
