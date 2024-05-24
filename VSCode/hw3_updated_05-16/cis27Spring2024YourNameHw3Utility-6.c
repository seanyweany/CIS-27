/**
 * Program Name: cis27Spring2024YourNameHw3Utility.c
 * Discussion:   Implentation File
 *                 HW #3 — Sample Menu
 * Written By:   Your Name
 * Date:         2024/__/__
 */

#define _CRT_SECURE_NO_WARNINGS

// Header/include File
#include <stdio.h>
#include <stdlib.h>
#include "fractionYourName.h"
#include "fractionUtilityYourName.h"
#include "polyTermYourName.h"
#include "polyTermUtilityYourName.h"
#include "polyNodeYourName.h"
#include "polyNodeUtilityYourName.h"
#include "cis27Spring2024YourNameHw3Utility.h"

// Function Definitions

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

        printf("\n**** initSubmenu() - MENU"
            "\n* (1) Creating 2 Polynomials"
            "\n* (2) Returning to previous menu ..."
            "\nEnter 1 - 2: ");
        scanf("%d", &option);

        switch (option) {
        case 1:
            printf("\nCreating 2 Fraction Step ...");

            if (*poly1Addr) { // Assuming 2 poly's created

                // Removing the existing poly's
            }

            create2Polynomial(poly1Addr, poly2Addr);

            break;
        case 2:
            printf("\nCleaning up -- TODO -- ..."
                "\n\nFrom initSubmenu() - "
                "Returning to previous menu ...");

            break;
        default:
            printf("\nSubmenu - Wrong Option!\n");
        }
    } while (option != 2);
}

void runMenuHw3Sample() {
    int option;
    TdPolyNodePtr poly1 = NULL;
    TdPolyNodePtr poly2 = NULL;

    TdPolyNodePtr tmpNodePtr = NULL;

    do {
        printf("\n**** MENU"
            "\n* (1) Creating/Updating 2 Polynomials"
            "\n* (2) Quitting"
            "\nEnter 1 or 2: ");
        scanf("%d", &option);

        switch (option) {
        case 1:
            printf("\nCreating 2 Fractions through a Submenu ...");
            initSubmenu(&poly1, &poly2);

            break;
        case 2:
            printf("\nCleaning up -- TODO -- ..."
                "\n\nHave Fun!");

            break;
        default:
            printf("\nMenu - Wrong Option\n");
        }
    } while (option != 2);
}