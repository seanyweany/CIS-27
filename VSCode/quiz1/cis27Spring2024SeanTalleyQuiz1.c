/**
 * Program Name: cis27Spring2024SeanTalleyQuiz1.c
 * Discussion:   Quiz 1
 * Written by:   Sean Talley
 * Date:         2024/02/01
 */

#define _CRT_SECURE_NO_WARNINGS

// Include and Header Files
#include <stdio.h>

// Function Prototypes
void useArraySyntax01(void);
void useArraySyntax02(void);

// Application Driver
int main() {

    return 0;
}

// Function Definitions

void useArraySyntax01() {
    int arySize1;

    printf("\nEnter an int for array size: ");
    scanf("%d", &arySize1);

    int ary2[arySize1];

    printf("\narySize1 : %d\n", arySize1);

    return;
}

void useArraySyntax02() {
    int arySize2 = 5;
    int ary2[arySize2];

    printf("\narySize2 : %d\n", arySize2);

    return;
}

/** PROGRAM_OUTPUT

*/

/* LOGIC_CODE_OUTPUT Issues
None!
 */