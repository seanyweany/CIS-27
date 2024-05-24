/**
 * Program Name: fractionUtilitySeanTalley.h
 * Discussion:   Specification File
 *                 Support Functions for Fraction
 * Written By:   Sean Talley
 * Date:         2024/05/16
 */

#ifndef FRACTIONUTILITYSEANTALLEY_H
#define FRACTIONUTILITYSEANTALLEY_H

// Header/include File
#include <stdio.h>
#include <stdlib.h>
#include "fractionSeanTalley.h"

// Function Prototypes

int gcdBF(int, int);
int gcdFL(int, int);

// Updated and Additional Function Prototypes

TdFractionST addFraction(TdFractionST, TdFractionST);

#endif