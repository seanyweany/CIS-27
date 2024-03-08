/**
 * Program Name: cis27Spring2024YourNameHw2Utility.h
 * Discussion:   Specification File
 * Support       Functions for HW #2
 * Written By:   Your Name
 * Date:         2024/__/__
 */

#ifndef CIS27SPRING2024YOURNAMEHW2UTILITY_H
#define CIS27SPRING2024YOURNAMEHW2UTILITY_H

// Header/include File
#include <stdio.h>
#include <stdlib.h>
#include "fractionYourName-3.h"
#include "fractionUtilityYourName-3.h"

void displayCodingStatementFL(void);
void displayClassInfoFL(void);
void runMenuHw2FL(void);
void displayFractionInfoFL(TdFractionPtrFL);
void initFractionSubmenuFL(int*, TdFractionPtrAryFL*);

TdFractionPtrFL* createFractionAryPtrFL(int);
#endif
