/**
 * Program Name: cis27Spring2024YourNameHw2Utility.c
 * Discussion:   Implentation File
 *                 HW #2
 * Written By:   Your Name
 * Date:         2024/__/__
 */

#define _CRT_SECURE_NO_WARNINGS

// Header/include File
#include <stdio.h>
#include <stdlib.h>
#include "fractionYourName-3.h"
#include "cis27Spring2024YourNameHw2Utility-3.h"

TdFractionPtrFL* createFractionAryPtrFL(int size) {
    //int size;
    TdFractionPtrFL* frPtrPtr = NULL;

    //printf("\nEnter the array size: ");
    //scanf("%d", &size);

    frPtrPtr = (TdFractionPtrFL*)
        malloc(size * sizeof(TdFractionPtrFL));

    // TODO
    //for (int i = 0; i < size; i++) {
    //    frPtrPtr[i] = createFraction();
    //}

    for (int i = 0; i < size; i++) {
        *(frPtrPtr + i) = createFractionFL();
    }

    return frPtrPtr;
}

void initFractionSubmenuFL(int* sizeAddr, 
    TdFractionPtrAryFL* ptrAryAddr) {
 //   TdFractionFL*** ptrAryAddr) {

    if (*ptrAryAddr) {
        for (int i = 0; i < *sizeAddr; i++) {
            // Freeing ALL CURRENT Fractions
            // printf("\nFreeing Fraction at %p\n", 
            //     (*ptrAryAddr + i));

            printf("\nFreeing Fraction at %p\n",
                *(*ptrAryAddr + i));
            free(*(*ptrAryAddr + i));
        }

        free(*ptrAryAddr);
        *ptrAryAddr = NULL;
    }

    printf("\n  How many Fractions? ");
    scanf("%d", sizeAddr);

    *ptrAryAddr = (TdFractionPtrAryFL)
        malloc((*sizeAddr) * sizeof(TdFractionPtrAryFL));

    for (int i = 0; i < *sizeAddr; i++) {
        printf("\nFraction #%d:\n", i);

        *(*ptrAryAddr + i) = createFractionFL();
    }
}

void runMenuHw2FL() {
    int option;
    int size;
    //TdFractionPtrAryFL* addrToPtrAry = NULL;
    TdFractionPtrAryFL ptrAry = NULL;

    // Reminder!
    // The following 2 tasks will be done inside
    // the submenu function of initFractionSubmenuFL()
    // (i.e., when the submenu is running) 
    //   (1) printf("\nHow many Fractions? ");
    //       scanf("%d", &size);

    //    (2) frPtrPtr = (TdFractionPtrFL*) 
    //          malloc(size * sizeof(TdFractionPtrFL));

    do {
        printf("\n**** MENU"
            "\n* (1) Calling initFractionSubmenuFL()"
            "\n* (2) Quitting"
            "\nEnter 1 or 2: ");
        scanf("%d", &option);

        switch (option) {
        case 1:
            printf("\nCreating Fractions ...");
            initFractionSubmenuFL(&size, &ptrAry);

            break;
        case 2:
            printf("\nCleaning up -- TODO -- ..."
                "\n\nQuitting!");
        default:
            printf("\nThe sky is very clear! But ???\n");
        }
    } while (option != 2);
}