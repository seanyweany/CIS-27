/**
 * Program Name: cis27Spring2024SeanTalleyPlayground.c
 * Discussion:   Mess 'round!
 * Written by:   Sean Talley
 * Date:         2024/02/01
 */

//#define TEST_1
//#define TEST_2
#define TEST_RECURSION

// Include and Header Files
#include <stdio.h>
#include <stdlib.h>
#include "node.h"

// Function Prototypes
int* dang(void);
void A(void);
void B(void (*ptr)());
void appendNodeToList(TdIntNodeAddr, TdIntNodePtr*);

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

#ifdef TEST_RECURSION
    void appendNodeToList();
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

void appendNodeToList(TdIntNodeAddr node, TdIntNodePtr* list) {
    if ((*list)->next) {
        TdIntNodePtr currentNode = (*list)->next;
        
        while (currentNode->next) {
            currentNode = currentNode->next;
        }
    }
    
    (*list)->next = node;
}

/** PROGRAM_OUTPUT

*/

/* LOGIC_CODE_OUTPUT Issues
None!
 */