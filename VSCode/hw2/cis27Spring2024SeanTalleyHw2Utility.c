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
		   "Required Submission Date: 2024/03/13\n"
		   "Actual Submission Date:   2024/03/13\n\n"
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
                    displayFractionInfoST(arySize, fracAryST);
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

                *sizeAddr = *sizeAddr < 0 ? -(*sizeAddr) : *sizeAddr;

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

void displayFractionInfoST(int sizeST, TdFractionPtrST* frAryST) {
    int uniqueEvenCount = 0;
    int uniqueOddCount = 0;

    int uniqueEvenAryST[5] = {0};
    int uniqueOddAryST[5] = {0};

    int* test[10] = {0};

    printf("  There is/are %d Fraction(s).\n\n"
           "  The unique digit(s) is/are detailed as follows,\n\n"
        , sizeST
    );


    for (int i = 0; i < sizeST; i++) {
        int tmpST = (*(frAryST + i))->num;
        int itST = 0;

        tmpST = tmpST < 0 ? -tmpST : tmpST;

        while (tmpST) {
            int currentDigit = (tmpST % 10);

            if (currentDigit % 2) {
                if (!uniqueOddAryST[currentDigit - 1 / 2]) {
                    printf("unique odd spotted! %d\n", currentDigit);
                    uniqueOddAryST[currentDigit - 1 / 2]++;
                    uniqueOddCount++;

                    test[currentDigit - 1][itST] = malloc(sizeST * sizeof(TdFractionST));
                    *(test[currentDigit - 1] + itST) = test[currentDigit - 1][itST] + *(frAryST + i);

                    printf("****\n"
                           "test[currentDigit - 1]:    %d\n"
                           "test[currentDigit - 1][0]: %d\n"
                           "\n"
                    , test[currentDigit - 1], test[currentDigit - 1][0]);
                }
            } else {
                if (!uniqueEvenAryST[currentDigit / 2]) {

                    printf("unique even spotted! %d\n", currentDigit);
                    uniqueEvenAryST[currentDigit / 2]++;
                    uniqueEvenCount++;
                }
            }

            tmpST /= 10;
        }

        tmpST = (*(frAryST + i))->denom;

        tmpST = tmpST < 0 ? -tmpST : tmpST;

        while (tmpST) {
            int currentDigit = (tmpST % 10);

            if (currentDigit % 2) {
                if (!uniqueOddAryST[(currentDigit - 1) / 2]) {
                    printf("unique odd spotted! %d\n", currentDigit);
                    uniqueOddAryST[(currentDigit - 1) / 2]++;
                    uniqueOddCount++;
                }
            } else {
                if (!uniqueEvenAryST[currentDigit / 2]) {
                    printf("unique even spotted! %d\n", currentDigit);
                    uniqueEvenAryST[currentDigit / 2]++;
                    uniqueEvenCount++;
                }
            }

            tmpST /= 10;
        }
    }

    printf("    There is/are %d unique even digit(s) of\n", uniqueEvenCount);

    for (int i = 0; i < 5; i++) {
        if (!uniqueEvenAryST[i]) {
            printf("      %d seen %d time(s)\n", i * 2, uniqueEvenAryST[i]);
        }
    }

    printf("\n    There is/are %d unique odd digit(s) of\n", uniqueOddCount);

    for (int i = 0; i < 5; i++) {
        if (!uniqueOddAryST[i]) {
            printf("      %d seen %d time(s)\n", (i * 2) + 1, uniqueEvenAryST[i]);
        }
    }

    printf("\n");
}