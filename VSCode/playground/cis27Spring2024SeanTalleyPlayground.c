/**
 * Program Name: cis27Spring2024SeanTalleyPlayground.c
 * Discussion:   Mess 'round!
 * Written by:   Sean Talley
 * Date:         2024/02/01
 */

#define TEST_1
//#define TEST_2

// Include and Header Files
#include <stdio.h>
#include <stdlib.h>

// Function Prototypes
int* dang(void);
void A(void);
void B(void (*ptr)());

// Application Driver
int main() {
#ifdef TEST_1
    int* iPtr = NULL;

    iPtr = dang();

    for (int i = 0; i < sizeof(iPtr); i++) {
        printf("%d\n", *(iPtr + i));
    }

    free(iPtr);
#endif

#ifdef TEST_2
    void (*ptr)() = &A;
 
    // calling function B and passing
    // address of the function A as argument
    B(ptr);
#endif

    return 0;
}

// Function Definitions

int* dang() {
    int* iPtr = (int*)malloc(4 * sizeof(int));

    for (int i = 0; i < sizeof(iPtr); i++) {
        *(iPtr + i) = (i + 1) * (i + 1);
    }

    return iPtr;
}

void A() { 
  printf("I am function A\n");
}
 
void B(void (*ptr)()) {
    (*ptr)(); // callback to A
}

/** PROGRAM_OUTPUT

*/

/* LOGIC_CODE_OUTPUT Issues
None!
 */