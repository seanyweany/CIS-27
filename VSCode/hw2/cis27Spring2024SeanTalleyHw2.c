/**
 * Program Name: cis27Spring2024SeanTalleyHw2.c
 * Discussion:   HW #2
 * Written By:   Sean Talley
 * Date:         2024/02/24
 */

#include <stdio.h>

void displayCodingStatementST(void);
void displayClassInfoST(void);
void runMenuHW2ST(void);

//void displayDigitDetailST(int);

int main() {
    displayCodingStatementST();
    displayClassInfoST();

    runMenuHW2ST();

    return 0;
}

void displayCodingStatementST() {
    printf("We write code to manipulate data, which are provided by the user(s)\n"
           "to produce the required outcome in the most efficient way!\n\n"
    );
}

void displayClassInfoST() {
    printf("CIS 27 - Data Structures and Algorithms\n"
		   "Laney College\n"
		   "Sean Talley\n"
		   "\n"
		   "Information --\n"
		   "Assignment:               HW #2\n"
		   "Implemented by:           Sean Talley\n"
		   "Required Submission Date: 2024/02/25\n"
		   "Actual Submission Date:   2024/02/22\n\n"
    );
}

void runMenuHW2ST() {
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
                printf("Enter an Integer: ");
                scanf("%d", &optionST);

                printf("\nCalling displayDigitDetailST() with one argument of\n%d\n\n", optionST);

                displayDigitDetailST(optionST);

                optionST = 0;

                break;
            case 2:
                printf("Have a great Holiday Season!\n\n");

                break;
            default: 
                printf("Wrong Option!\n\n");
        }

    } while (optionST != 2);
}