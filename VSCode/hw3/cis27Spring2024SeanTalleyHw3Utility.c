/**
 * Program Name: cis27Spring2024SeanTalleyHw3Utility.c
 * Discussion:   Implementation File
 * Written By:   Sean Talley
 * Date:         2024/05/16
 */

// Header/include File
#include <stdio.h>
#include <stdlib.h>
#include "fractionSeanTalley.h"
#include "fractionUtilitySeanTalley.h"
#include "polyTermSeanTalley.h"
#include "polyTermUtilitySeanTalley.h"
#include "polyNodeSeanTalley.h"
#include "polyNodeUtilitySeanTalley.h"
#include "cis27Spring2024SeanTalleyHw3Utility.h"

// Function Definitions

void displayCodingStatementST() {
    printf("We write code to manipulate data (which are\n"
           "provided by the user) to produce the required\n"
           "outcome in the most efficient way!\n\n"
    );
}

void displayClassInfoST() {
    printf("CIS 27 - Data Structures and Algorithms\n"
		   "Laney College\n"
		   "Sean Talley\n"
		   "\n"
		   "Information --\n"
		   "Assignment:               HW #3 Exercise #1\n"
		   "Implemented by:           Sean Talley\n"
		   "Required Submission Date: 2024/05/16\n"
		   "Actual Submission Date:   2024/05/16\n\n"
    );
}

void runMenuHw3ST() {
    int option;
    TdPolyNodePtr poly1 = NULL;
    TdPolyNodePtr poly2 = NULL;

    TdPolyNodePtr tmpNodePtr = NULL;

    /*
    //poly1 = (TdPolyNodePtr*)malloc(sizeof(TdPolyNodePtr));

    tmpNodePtr = (TdPolyNodePtr)malloc(sizeof(TdPolyNode));
    tmpNodePtr->next = NULL;
    tmpNodePtr->termPtr = createFraction();

    poly1 = tmpNodePtr;

    tmpNodePtr = (TdPolyNodePtr)malloc(sizeof(TdPolyNode));
    tmpNodePtr->next = NULL;
    tmpNodePtr->termPtr = createFraction();

    poly1->next = tmpNodePtr;
    */

    do {
        printf("\n***************************************"
               "\n*             MENU - HW #3            *"
               "\n* (1) Creating/Updating 2 Polynomials *"
               "\n* (2) Evaluating 2 Polynomials        *"
               "\n* (3) Adding 2 Polynomials            *"
               "\n* (4) Multiplying 2 Polynomials       *"
               "\n* (5) Displaying 2 Polynomials        *"
               "\n* (6) Display Resulting Polynomial    *"
               "\n* (7) Quit                            *"
               "\n***************************************"
               "\nEnter an integer for option + ENTER: ");

        scanf("%d", &option);

        switch (option) {
        case 1:
            printf("\n  Initializing 2 Polynomials -\n"
                "\n    Calling init() -\n"
            );

            initSubmenu(&poly1, &poly2);

            break;
        case 2:
        
            break;
        case 3:
        
            break;
        case 4:
            
            break;
        case 5:

            break;
        case 6:
            if (poly1) {

            } else {
                printf("\n  Not appropriate as there are no Polynomials!\n");
            }

            break;
        case 7:
            printf("\nCleaning up -- TODO -- ..."
                "\n\nQuitting!");
            
            break;
        default:
            printf("\nWrong Option!\n");
        }
    } while (option != 7);
}

void initSubmenu(TdPolyNodePtr* poly1Addr,
    TdPolyNodePtr* poly2Addr) {
    int option;

    do {
        /*
        printf("\n**** MENU"
            "\n* (1) Creating 2 Polynomials"
            "\n* (2) Updating Polynomials  1"
            "\n* (3) Updating Polynomials  2"
            "\n* (4) Displaying 2 Polynomials"
            "\n* (5) Returning to previous menu ..."
            "\nEnter 1 - 5: ");
        */

        printf("\n    ********************************"
               "\n    *        init() Submenu        *"
               "\n    * (1) Creating 2 Polynomials   *"
               "\n    * (2) Updating Polynomial 1    *"
               "\n    * (3) Updating Polynomial 2    *"
               "\n    * (4) Displaying 2 Polynomials *"
               "\n    * (5) Return                   *"
               "\n    ********************************"
               "\n    Enter an integer for option + ENTER: ");

        scanf("%d", &option);

        switch (option) {
            case 1:
                printf("\n      Creating 2 Polynomials -\n"
                    "\n        Calling create() -\n"
                );

                if (*poly1Addr) {

                    // Removing the existing poly's
                }

                create(poly1Addr, poly2Addr);

                break;
            case 2:
                if (*poly1Addr) {
                    printf("\nupdate 1\n");
                } else {
                    printf("\n    Not appropriate as there are no Polynomials!\n");
                }

                break;
            case 3:
                if (*poly1Addr) {
                    printf("\nupdate 2\n");
                } else {
                    printf("\n    Not appropriate as there are no Polynomials!\n");
                }

                break;
            case 4:
                if (*poly1Addr) {
                    printf("\ndisplay\n");
                } else {
                    printf("\n    Wrong Option!\n");
                }

                break;
            case 5:
                printf("\n    Return to previous menu!\n");

                break;
            default:
                printf("\n    Wrong Option!\n");
        }

    } while (option != 5);
}