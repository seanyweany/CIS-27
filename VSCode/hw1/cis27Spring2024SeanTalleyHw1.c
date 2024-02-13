/**
 * Program Name: cis27Spring2024SeanTalleyHw1.c 
 * Discussion:   
 * Written By:   Sean Talley
 * Date:         2024/02/08
 */

#include <stdio.h>

void displayCodingStatementST(void);
void displayClassInfoHw4ST(void);
void runMenuHw4ST(void);

void displayDigitDetailST(int);

int main() {
    displayCodingStatementST();
    displayClassInfoHw4ST();

    runMenuHw4ST();

    return 0;
}

void displayCodingStatementST() {
    printf("We write code to manipulate data, which are provided by the user(s),\n"
           "to produce the required outcome in the most efficient way!\n\n"
    );
}

void displayClassInfoHw4ST() {
    printf("CIS 27 - Data Structures and Algorithms\n"
		   "Laney College\n"
		   "Sean Talley\n"
		   "\n"
		   "Information --\n"
		   "Assignment:               HW #1 Exercise #1\n"
		   "Implemented by:           Sean Talley\n"
		   "Required Submission Date: 2024/02/08\n"
		   "Actual Submission Date:   2024/02/08\n\n"
    );
}

void runMenuHw4ST() {
    int optionST;

    do {
        printf("**************************************\n"
               "*        MENU - Final Exam 0P        *\n"
               "* (1) Calling displayDigitDetailST() *\n"
               "* (2) Quit                           *\n"
               "**************************************\n"
               "Enter an integer for option + ENTER: ");

        scanf("%d", &optionST);

        printf("\n");

        switch (optionST) {
            case 1:
                int inputST;

                printf("Enter an Integer: ");
                scanf("%d", &inputST);

                printf("\nCalling displayDigitDetailST() with one argument of %d\n\n", inputST);

                displayDigitDetailST(inputST);

                break;
            case 2:
                printf("Have a great Holiday Season!\n");

                break;
            default: 
                printf("Wrong Option!");
        }

    } while (optionST != 2);
}

void displayDigitDetailST(int inputST) {
    char parityST[] = "even";
    char signST[] = "positive";
    
    int digitCountST = 0;
    int uniqueCountST = 0;
    int frequency = 0;
    
    int occDigitsST[10] = {0};
    int freqDigits[10] = {0};

    int currentIntST = inputST;

    printf("  While displayDigitDetailST() is running with the actual\n"
           "  argument of %d, the following is obtained:\n\n", inputST);

    if (inputST % 2) {
        for (int i = 0; i < 4; i++) {
            parityST[i] = "odd"[i];
        }
    }
    if (inputST < 0) {
        for (int i = 0; i < 9; i++) {
            signST[i] = "negative"[i];
        }
    }

    while (currentIntST) {
        int currentDigitST = currentIntST % 10;
        digitCountST++;

        occDigitsST[currentDigitST]++;

        if (frequency <= occDigitsST[currentDigitST]) {
            frequency = occDigitsST[currentDigitST];
            freqDigits[currentDigitST]++;
        }

        if ((currentIntST % 10) % 2) {
            uniqueCountST++;
        }
        
        currentIntST /= 10;
    }

    for (int i, j = 0; i < 10; i++) {
        if (occDigitsST[i] > frequency) {
            frequency = occDigitsST[i];
            freqDigits[j++]++;
        }
    }

    printf("  %d is an %s and %s number.\n"
           "  There is/are %d digit(s).\n"
           "\n"
           "  The digit(s) would be\n",
           inputST, parityST, signST, digitCountST);

    while (currentIntST) {
        printf("    %d\n", (currentIntST % 10));
        currentIntST /= 10;
    }

    printf("\n  There is/are %d unique even digit(s) of\n", uniqueCountST);

    for (int i = 0; i < 5; i++) {
        if (occDigitsST[i * 2] > 0) {
            printf("    %d", occDigitsST[i * 2]);
        }
    }

    for (int i = 0; i < 10; i++) {
        if (freqDigits[i] == frequency) {
            printf("With digit %d occurs the most time of %d!\n", i, frequency);
        }
    }
}

/* PROGRAM_OUTPUT

*/

/* Logic_Code_Output_Issues

*/
