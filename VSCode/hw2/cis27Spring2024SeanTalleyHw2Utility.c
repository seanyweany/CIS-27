/**
 * Program Name: cis27Spring2024SeanTalleyHw2Utility.c
 * Discussion:   Implementation File
 * Written By:   Sean Talley
 * Date:         2024/03/08
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
		   "Required Submission Date: 2024/03/08\n"
		   "Actual Submission Date:   2024/03/08\n\n"
    );
}

void runMenuHw2ST() {
    int optionST;

    int arySize;
    TdFractionPtrAryST fracAryST = NULL;

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
                    printf("*(fracAryST + 0): %d (%p)\n", *(fracAryST + 0), *(fracAryST + 0));
                    displayFractionInfoST(arySize, *(fracAryST + 0));
                } else {
                    printf("  No Fractions ..\n\n");
                }

                break;
            case 3:
                printf("Displaying Fractions!\n\n");

                if (fracAryST) {
                    for (int i = 0; i < arySize; i++) {
                        printf("addr: %d (%p)\n", fracAryST + i, fracAryST + i);
                        printFractionST(*(fracAryST + i));
                    }
                } else {
                    printf("  No Fractions ..\n\n");
                }
                
                break;
            case 4:
                if (fracAryST) {
                    free(fracAryST);
                    fracAryST = NULL;
                    printf("All dynamic allocations removed through calls to free()!\n\n");
                }

                printf("Have fun!");

                break;
            default: 
                printf("Wrong Option!\n\n");
        }
    } while (optionST != 4);
}

void initFractionSubmenuST(int* sizeAddr, TdFractionPtrAryST* fracAryPtrST) {
    int optionSubST;

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
                printf("  Creating Fractions -\n\n"
                       "    (1) If existing, all existing Fractions are removed.\n"
                       "    (2) New Fractions may be created!\n\n"
                       "    How many Fractions? "
                );

                if (*fracAryPtrST) {
                    for (int i = 0; i < *sizeAddr; i++) {
                        // Freeing ALL CURRENT Fractions
                        // printf("\nFreeing Fraction at %p\n", 
                        //     (*ptrAryAddr + i));

                        printf("\nFreeing Fraction at %p\n",
                            *(*fracAryPtrST + i)
                        );
                        free(*(*fracAryPtrST + i));
                    }

                    free(*fracAryPtrST);
                    *fracAryPtrST = NULL;
                }

                scanf("%d", sizeAddr);

                if (*sizeAddr < 0) {
                    *sizeAddr = -(*sizeAddr);
                }

                *fracAryPtrST = malloc(sizeof(TdFractionST) * *sizeAddr);

                for (int i = 0; i < *sizeAddr; i++) {
                    printf("    For Fraction #%d:\n", i + 1);

                    *(*fracAryPtrST + i) = createFractionST();
                }

                break;
            case 2:
                printf("  Displaying Fractions -\n\n");

                if (fracAryPtrST) {
                    for (int i = 0; i < *sizeAddr; i++) {
                        printFractionST(*(*fracAryPtrST + i));
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

void displayFractionInfoST(int sizeST, TdFractionPtrST frPtrST) {
    int digitsST[] = {0};
    int uniqueEvenST[] = {0};
    int uniqueOddST[] = {0};

    printf("  There is/are %d Fraction(s).\n\n"
           "The unique digit(s) is/are detailed as follows,\n\n"
        , sizeST
    );

    for (int i = 0; i < sizeST * 4; i++) {
        printf("#%d:\nfrPtrST + i: %d (%p)\nnum: %d\ndenom: %d\n*(frPtrST + i): %d (%p)\n\n",
        i + 1, frPtrST + i, frPtrST + i, (*(frPtrST + i)).num, (*(frPtrST + i)).denom, *(frPtrST + i), *(frPtrST + i));
    }

    /* TO DO */
}