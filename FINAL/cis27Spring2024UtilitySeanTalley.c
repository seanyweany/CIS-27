/**
 * Program Name: cis27Spring2024UtilitySeanTalley.c
 * Discussion:   Implentation File
 *                 Final Exam Setup
 * Written By:   Sean Talley
 * Date:         2024/05/23
 */

#define _CRT_SECURE_NO_WARNINGS

// Header/include File
#include <stdio.h>
#include <stdlib.h>
#include "fractionSeanTalley.h"
#include "fractionUtilitySeanTalley.h"
#include "polyTermSeanTalley.h"
#include "polyNodeSeanTalley.h"
#include "polyNodeUtilitySeanTalley.h"
#include "cis27Spring2024UtilitySeanTalley.h"

// Function Definitions

void displayCodingStatement() {
    printf("\n++++++++++\n"
           "\nWhile displayCodingStatementST() is running!"
           "\nWe write code to manipulate data (which are"
           "\nprovided by the user) to produce the"
           "\nrequired outcome in the most efficient way!\n"
    );
}

void displayClassInfo() {
    printf("\n++++++++++\n"
           "\nWhile displayClassInfoST() is running!"
           "\nCIS 27 - data Structures and Algorithms in C"
		   "\nLaney College"
		   "\nSean Talley"
		   "\n"
		   "\nInformation --"
		   "\nAssignment:               Final Exam"
		   "\nImplemented by:           Sean Talley"
		   "\nRequired Submission Date: 2024/05/23\n"
    );
}

void displayPoly(TdPolyNodePtr* polyAddr) {
    TdPolyNodePtr tmpNodePtr = NULL;

    printf("\n  While running displayPoly()!\n");

    printf("\n  Poly Address: %p\n", polyAddr);

    tmpNodePtr = *polyAddr;
    while (tmpNodePtr) {
        printf(
            "\n    Node Address: %p"
            "\n      Term Address: %p"
            "\n        Exponent/Order: %d"
            "\n        Coefficient - "
            "\n          num: %d"
            "\n          denom: %d"
            "\n      next: %p\n",
            tmpNodePtr, tmpNodePtr->termPtr,
            tmpNodePtr->termPtr->order,
            tmpNodePtr->termPtr->coeff.num,
            tmpNodePtr->termPtr->coeff.denom,
            tmpNodePtr->next);

        tmpNodePtr = tmpNodePtr->next;
    }
} 

void displayPalindrome(TdPolyNodePtr poly) {
    TdPolyNodePtr tmpNodePtrST = poly;

    int smallestOrderST = 0;
    int countUniqueOddST = 0;
    int tmpNumST = 0;
    int tmpDenomST = 0;
    int largestDigitST = 0;
    int countDigitFoundST = 0;

    int digitAlreadyFoundST;

    int aryUniqueOddST[5] = {0};
    int locationST[5] = {0};


    printf("\n  While running displayPalindrome()!\n");

    if (isPalindromeST(poly)) {
        while (tmpNodePtrST->next) {
            tmpNodePtrST = tmpNodePtrST->next;
        }

        smallestOrderST = tmpNodePtrST->termPtr->order;

        tmpNumST = tmpNodePtrST->termPtr->coeff.num < 0 ?
            -tmpNodePtrST->termPtr->coeff.num :
            tmpNodePtrST->termPtr->coeff.num;

        tmpDenomST = tmpNodePtrST->termPtr->coeff.denom < 0 ?
            -tmpNodePtrST->termPtr->coeff.denom :
            tmpNodePtrST->termPtr->coeff.denom;

        while (tmpNumST) {
            if ((tmpNumST % 10) % 2) {
                if (!aryUniqueOddST[(tmpNumST % 10) / 2]) {
                    countUniqueOddST++;
                    locationST[((tmpNumST % 10) / 2)]++;
                }

                aryUniqueOddST[(tmpNumST % 10) / 2]++;
            }

            tmpNumST /= 10;
        }

        while (tmpDenomST) {
            if ((tmpDenomST % 10) % 2) {
                if (!aryUniqueOddST[(tmpDenomST % 10) / 2]) {
                    countUniqueOddST++;
                }

                if (locationST[(tmpDenomST % 10) / 2] == 1) {
                    locationST[(tmpDenomST % 10) / 2]++;
                } else if (!locationST[(tmpDenomST % 10) / 2]) {
                    locationST[(tmpDenomST % 10) / 2] = 3;
                }

                 aryUniqueOddST[(tmpDenomST % 10) / 2]++;
             }

             tmpDenomST /= 10;
         }

        printf("\n  The polynomial is a Palindrome!\n"
               "\n  The smallest order term has the exponent of %d.\n"
               "\n  For the smallest order term -"
               "\n    There is/are %d unique odd digit(s) of\n",
               smallestOrderST, countUniqueOddST
        );

        for (int i = 0; i < 5; i++) {
            if (aryUniqueOddST[i]) {
                printf("      %d\n",
                    (i * 2 + 1)
                );

                if ((i * 2 + 1) > largestDigitST) {
                    largestDigitST = (i * 2 + 1);
                }
            }
        }

        for (int i = 0; i < 5; i++) {
            switch (locationST[i]) {
                case 1:
                    printf("\n    Digit %d is found only in num.",
                        (i * 2 + 1)
                    );

                    break;
                case 2:
                    printf("\n    Digit %d is found in both num and denom.",
                        (i * 2 + 1)
                    );

                    break;
                case 3:
                    printf("\n    Digit %d is found only in denom.",
                        (i * 2 + 1)
                    );    

                    break;
                default:
                    break;
            }
        }

        tmpNodePtrST = poly;

        while (tmpNodePtrST->next) {
            digitAlreadyFoundST = 0;

            tmpNumST = tmpNodePtrST->termPtr->coeff.num < 0 ?
                -tmpNodePtrST->termPtr->coeff.num :
                tmpNodePtrST->termPtr->coeff.num; 

            tmpDenomST = tmpNodePtrST->termPtr->coeff.denom < 0 ?
                -tmpNodePtrST->termPtr->coeff.denom :
                tmpNodePtrST->termPtr->coeff.denom;

            while (tmpNumST) {
                if (tmpNumST % 10 == largestDigitST) {
                    countDigitFoundST++;
                    digitAlreadyFoundST = 1;

                    break;
                }

                tmpNumST /= 10;
            }

            if (!digitAlreadyFoundST) {
                while (tmpDenomST) {
                    if (tmpDenomST % 10 == largestDigitST) {
                        countDigitFoundST++;
    
                        break;
                    }
    
                    tmpDenomST /= 10;
                }
            }

            tmpNodePtrST = tmpNodePtrST->next;
        }

        if (countDigitFoundST) {
            printf("\n\n    Digit %d above is found in"
                "\n      %d other term(s)!\n",
                largestDigitST, countDigitFoundST
            );
        } else {
            printf("\n\n    Digit %d above is not found "
                "in any other term(s)!\n",
                largestDigitST
            );
        }
    } else {
        printf("\n  The polynomial is NOT a Palindrome!\n");
    }
}

int isPalindromeST(TdPolyNodePtr poly) {
    TdPolyNodePtr tmpNodePtrST = poly;

    int tmpNumST;
    int reverseNumST;

    int tmpDenomST;
    int reverseDenomST;

    while (tmpNodePtrST) {
        tmpNumST = tmpNodePtrST->termPtr->coeff.num;
        tmpDenomST = tmpNodePtrST->termPtr->coeff.denom;

        reverseNumST = 0;
        reverseDenomST = 0;

        while (tmpNumST) {
            reverseNumST = (reverseNumST * 10) + (tmpNumST % 10);
            tmpNumST /= 10;
        }

        while (tmpDenomST) {
            reverseDenomST = (reverseDenomST * 10) + (tmpDenomST % 10);
            tmpDenomST /= 10;
        }

        if (reverseNumST != tmpNodePtrST->termPtr->coeff.num ||
            reverseDenomST != tmpNodePtrST->termPtr->coeff.denom) {

            return 0;
        }

        tmpNodePtrST = tmpNodePtrST->next;
    }

    return 1;
}

void runInitSubmenu(TdPolyNodePtr* polyAddr) {
    int option;

    printf("\n  While runInitSubmenuST() is running -\n");
    do {
        printf(
            "\n  ****************************"
            "\n  *    runInitSubmenuST()    *"
            "\n  * 1. Creating ONE NEW Poly *"
            "\n  * 2. Returning             *"
            "\n  ****************************"
            "\n  Enter an integer for option (1-2): ");
        scanf("%d", &option);

        switch (option) {
        case 1:
            
            printf("\n  (i)   New polynomial will be created!"
                   "\n  (ii)  Do not enter new term with existing orders!\n"
                   "\n  Calling createOnePolynomial()!\n"
            );
                   
            if (polyAddr) {
                removePoly(polyAddr);
            }

            createOnePolynomial(polyAddr);

            break;
        case 2:
            printf("\n  Returning to previous menu ...\n");

            break;
        default:
            printf("\nrunInitSubmenu() - Wrong Option!\n");
        }
    } while (option != 2);
}

void runMenuFinalExam() {
    int option;
    TdPolyNodePtr poly = NULL;

    do {
        printf(
            "\n***********************************************"
            "\n*            MENU - Final Exam 95             *"
            "\n* 1. Creating ONE NEW Poly                    *"
            "\n* 2. Calling displayPalindromeST() for 1 Poly *"
            "\n* 3. Calling printPolyST() to display 1 Poly  *"
            "\n* 4. Quit                                     *"
            "\n***********************************************"
            "\nEnter an integer for option + ENTER: ");
        scanf("%d", &option);

        switch (option) {
        case 1:
            printf("\nCreating ONE NEW Poly!\n"
                   "\nCalling runInitSubMenuST()!\n"
            );

            runInitSubmenu(&poly);

            break;
        case 2:
            if (poly) {
                printf("\nCalling displayPalindromeST()!\n");

                displayPalindrome(poly);
            } else {
                printf("\nMENU - No Polynomial!\n");
            }

            break;
        case 3:
            if (poly) {
                printf("\nMENU: displayPoly()\n");

                displayPoly(&poly); 
            } else {
                printf("\nMENU - No Polynomial!\n");
            }

            break;
        case 4:
            printf("\nFree ALL DYNAMIC MEMORY BLOCKS!\n");

            removePolyA(&poly);

            printf("\nHave a great SUMMER!\n");

            break; 
        default:
            printf("\nMenu - Wrong Option!\n");
        }
    } while (option != 4);
}
