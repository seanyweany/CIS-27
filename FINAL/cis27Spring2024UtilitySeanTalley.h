/**
 * Program Name: cis27Spring2024UtilitySeanTalley.h
 * Discussion:   Specification File
 *                 Support Functions for Final Exam
 * Written By:   Sean Talley
 * Date:         2024/05/23
 */

#ifndef CIS27SPRING2024UTILITYSEANTALLEY_H
#define CIS27SPRING2024UTILITYSEANTALLEY_H

 // Header/include File
#include <stdio.h>
#include <stdlib.h>
#include "fractionSeanTalley.h"
#include "fractionUtilitySeanTalley.h"
#include "polyTermSeanTalley.h"
#include "polyNodeSeanTalley.h"

// Function Prototypes

void displayCodingStatement(void);
void displayClassInfo(void);

void displayPoly(TdPolyNodePtr*);

void displayPalindrome(TdPolyNodePtr);

void runInitSubmenu(TdPolyNodePtr*);
void runMenuFinalExam(void);

int isPalindromeST(TdPolyNodePtr);

#endif
