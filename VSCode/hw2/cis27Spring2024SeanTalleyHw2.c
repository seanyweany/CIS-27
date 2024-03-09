/**
 * Program Name: cis27Spring2024SeanTalleyHw2.c
 * Discussion:   HW #2
 * Written By:   Sean Talley
 * Date:         2024/03/03
 */

// Header/include File
#include <stdio.h>
#include "cis27Spring2024SeanTalleyHw2Utility.h"

// Application Driver
int main() {
    displayCodingStatementST();
    displayClassInfoST();

    runMenuHw2ST();

    return 0;
}

/* PROGRAM_OUTPUT

*/

/* Logic_Code_Output_Issues
I could still not get the program to work correctly.
In your code setup, displayFractionInfoST() has a
single argument of TdFractionPtrFL and I tried to
no avail to get the program to work with that setup.
I resorted to changing the argument into a pointer
(TdFractionPtrFL*) and decided to work with that.
Even then, I was not able to complete what was needed
and what does exist doesn't print the desired output.
*/