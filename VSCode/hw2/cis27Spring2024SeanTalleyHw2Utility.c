/**
 * Program Name: cis27Spring2024SeanTalleyHw2Utility.c
 * Discussion:   Implementation File
 * Written By:   Sean Talley
 * Date:         2024/03/03
 */

// Header/include File
#include <stdio.h>
#include <stdlib.h>
#include "cis27Spring2024SeanTalleyHw2Utility.h"
#include "fractionSeanTalley.h"

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
		   "Assignment:               HW #2 Exercise #1\n"
		   "Implemented by:           Sean Talley\n"
		   "Required Submission Date: 2024/03/03\n"
		   "Actual Submission Date:   2024/03/03\n\n"
    );
}

void runMenuHw2ST() {
    int optionST;

    TdFractionPtrST fracAryST = NULL;
    int arySize;

    do {
        printf("***************************************\n"
               "*            MENU - HW #2             *\n"
               "* (1) Creating Fractions              *\n"
               "* (2) Calling displayFractionInfoST() *\n"
               "* (3) Displaying Fractions            *\n"
               "* (4) Quit                            *\n"
               "***************************************\n"
               "Enter an integer for option + ENTER: ");

        scanf("%d", &optionST);

        printf("\n");

        switch (optionST) {
            case 1:
                printf("Creating Fractions!\n\n"
                       "Calling initFractionSubmenuST() -\n\n"
                );

                initFractionSubmenuST(&arySize, &fracAryST);

                break;
            case 2:
                printf("Calling displayFractionInfoST()!\n\n");

                if (fracAryST) {
                    displayFractionInfoST(fracAryST);
                } else {
                    printf("  No Fractions ..\n\n");
                }

                break;
            case 3:
                printf("Displaying Fractions!\n\n");

                if (fracAryST) {
                    for (int i = 0; i < arySize; i++) {
                        printFractionST(fracAryST + i);
                    }
                } else {
                    printf("  No Fractions ..\n\n");
                }
                
                break;
            case 4:
                if (fracAryST) {
                    free(fracAryST);
                    fracAryST = NULL;
                }

                printf("All dynamic allocations removed through calls to free()!\n\n"
                        "Have fun!");

                break;
            default: 
                printf("Wrong Option!\n\n");
        }
    } while (optionST != 4);
}

void initFractionSubmenuST(int* arySize, TdFractionPtrST* fracPtrAryST) {
    int optionSubST;
    // int numFrST;


    do {
        printf("  ****************************\n"
               "  *  initFractionSubmenu()   *\n"
               "  * (1) Creating Fractions   *\n"
               "  * (2) Displaying Fractions *\n"
               "  * (3) Return               *\n"
               "  ****************************\n"
               "  Enter an integer for option + ENTER: "
        );

        scanf("%d", &optionSubST);

        printf("\n");

        switch (optionSubST) {
            case 1:
                printf("  Calling Fractions -\n\n"
                       "    (1) If existing, all existing Fractions are removed.\n"
                       "    (2) New Fractions may be created!\n\n"
                       "    How many Fractions? "
                );

                scanf("%d", arySize);

                if (*arySize < 0) {
                    *arySize = -(*arySize);
                }

                *fracPtrAryST = malloc(sizeof(TdFractionST) * *arySize);

                for (int i = 0; i < *arySize; i++) {
                    printf("    For Fraction #%d:\n", i + 1);

                    *(fracPtrAryST + i) = createFractionST();
                }

                printf("\n");

                break;
            case 2:
                printf("  Displaying Fractions -\n\n");

                if (fracPtrAryST) {
                    for (int i = 0; i < *arySize; i++) {
                        printFractionST(*(fracPtrAryST + i));
                    }
                } else {
                    printf("    No Fractions!\n\n");
                }

                break;
            case 3:
                printf("  Returning to previous menu!\n\n");

                break;
            default:
                printf("  Wrong Option!\n\n");
        }
                 
    } while (optionSubST != 3);
}

void displayFractionInfoST(TdFractionPtrST frAryST) {
    printf("  There is/are %d Fraction(s).\n\n"
           "The unique digit(s) is/are detailed as follows,\n\n"
        , sizeof(frAryST) // doesn't work
    );

    /* TO DO */
}