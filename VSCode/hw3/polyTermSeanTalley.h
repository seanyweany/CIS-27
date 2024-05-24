/**
 * Program Name:   polyTermSeanTalley.h
 * Discussion:     Specification File
 *                   struct Fraction & PolyTerm Relevance
 * Written By:     Sean Talley
 * Submitted Date: 2024/05/16
 */

#ifndef POLYTERMSEANTALLEY_H
#define POLYTERMSEANTALLEY_H

// Header/include File
#include <stdio.h>
#include <stdlib.h>
#include "fractionSeanTalley.h"
#include "fractionUtilitySeanTalley.h"

struct PolyTermSeanTalley {
    int order;
    struct FractionSeanTalley coeff;
};

// typedef

typedef struct PolyTermSeanTalley TdPolyTerm;
typedef TdPolyTerm* TdPolyTermPtr;
typedef TdPolyTerm* TdPolyTermAddr;

// Function Prototypes

TdPolyTermAddr createPolyTerm(void);

// will be updated

#endif
