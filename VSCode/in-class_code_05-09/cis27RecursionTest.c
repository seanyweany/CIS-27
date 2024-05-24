/**
 * Program Name: cis27RecursionTest.c
 * Discussion:   Implentation File
 *                 Submenu Testing
 * Written By:   Your Name
 * Date:         2024/__/__
 */

#define _CRT_SECURE_NO_WARNINGS

// Header/include File
#include <stdio.h>
#include <stdlib.h>

// Function Prototypes

void display(int);
void displayA(int);

// Application Driver
int main() {
    
    display(3);

    displayA(4);

    return 0;  
}

// Function Definitions

void displayA(int n) {
    if (n > 0) {
        //printf("\n  Hello!\n");
        displayA(n - 1);
        
        printf("\n  Hello after!\n");
    }
}

void display(int n) {
    if (n > 0) {
        printf("\n  Hello!\n");
        display(n - 1);
    }
}

/** PROGRAM OUTPUT

*/

/** Logic_Code_Output Issues

*/

