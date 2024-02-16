/**
 * Program Name: cis27Spring2024SeanTalleyHw1.c 
 * Discussion:   HW #1
 * Written By:   Sean Talley
 * Date:         2024/02/13
 */

#include <stdio.h>

void displayCodingStatementST(void);
void displayClassInfoST(void);
void runMenuFinalExamST(void);

void displayDigitDetailST(int);

int main() {
    displayCodingStatementST();
    displayClassInfoST();

    runMenuFinalExamST();

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
		   "Assignment:               HW #1 Exercise #1\n"
		   "Implemented by:           Sean Talley\n"
		   "Required Submission Date: 2024/02/13\n"
		   "Actual Submission Date:   2024/02/13\n\n"
    );
}

void runMenuFinalExamST() {
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

void displayDigitDetailST(int inputST) {
    char parityST[] = "even";
    char signST[] = "positive";
    
    int digitCountST = 0;
    int uniqueCountST = 0;
    int frequency = 0;
    
    int occDigitsST[10] = {0};

    int currentIntST = inputST;

    printf("  While displayDigitDetailST() is running with the actual\n"
           "  argument of %d, the following is obtained:\n\n", inputST);

    if (inputST) {
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
            int currentDigitST;
            
            if ( (currentIntST % 10) < 0) {
                currentDigitST = (currentIntST % 10) * -1;
            } else {
                currentDigitST = currentIntST % 10;
            }

            digitCountST++;

            occDigitsST[currentDigitST]++;

            if (frequency <= occDigitsST[currentDigitST]) {
                frequency = occDigitsST[currentDigitST];
            }

            if (!(currentDigitST % 2) && occDigitsST[currentDigitST] == 1) {
                uniqueCountST++;
            }

            currentIntST /= 10;
        }

        printf("  %d is an %s and %s number.\n"
               "  There is/are %d digit(s).\n"
               "\n"
               "  The digit(s) would be\n",
               inputST, parityST, signST, digitCountST);

        currentIntST = inputST;

        while (currentIntST) {
            if ( (currentIntST % 10) < 0) {
                printf("    %d\n", (currentIntST % 10) * -1);
            } else {
                printf("    %d\n", (currentIntST % 10));
            }

            currentIntST /= 10;
        }

        if (uniqueCountST) {
            printf("\n  There is/are %d unique even digit(s) of\n", uniqueCountST);

            for (int i = 0; i < 5; i++) {
                if (occDigitsST[i * 2] > 0) {
                    printf("    %d\n", i * 2);
                }
            }
        }

        for (int i = 0; i < 10; i++) {
            if (occDigitsST[i] == frequency) {
                printf("\n  With digit %d occurs the most time of %d!", i, frequency);
            }
        }

        printf("\n\n");

    } else {
        printf("  The given value is ZERO!\n\n");
    }
}

/* PROGRAM_OUTPUT
We write code to manipulate data, which are provided by the user(s)
to produce the required outcome in the most efficient way!

CIS 27 - Data Structures and Algorithms
Laney College
Sean Talley

Information --
Assignment:               HW #1 Exercise #1
Implemented by:           Sean Talley
Required Submission Date: 2024/02/13
Actual Submission Date:   2024/02/13

**************************************
*        MENU - Final Exam 0P        *
* (1) Calling displayDigitDetailST() *
* (2) Quit                           *
**************************************
Enter an integer for option + ENTER: 6

Wrong Option!

**************************************
*        MENU - Final Exam 0P        *
* (1) Calling displayDigitDetailST() *
* (2) Quit                           *
**************************************
Enter an integer for option + ENTER: 1

Enter an Integer: 8

Calling displayDigitDetailST() with one argument of
8

  While displayDigitDetailST() is running with the actual
  argument of 8, the following is obtained:

  8 is an even and positive number.
  There is/are 1 digit(s).

  The digit(s) would be
    8

  There is/are 1 unique even digit(s) of
    8

  With digit 8 occurs the most time of 1!

**************************************
*        MENU - Final Exam 0P        *
* (1) Calling displayDigitDetailST() *
* (2) Quit                           *
**************************************
Enter an integer for option + ENTER: 1

Enter an Integer: 16494

Calling displayDigitDetailST() with one argument of
16494

  While displayDigitDetailST() is running with the actual
  argument of 16494, the following is obtained:

  16494 is an even and positive number.
  There is/are 5 digit(s).

  The digit(s) would be
    4
    9
    4
    6
    1

  There is/are 2 unique even digit(s) of
    4
    6

  With digit 4 occurs the most time of 2!

**************************************
*        MENU - Final Exam 0P        *
* (1) Calling displayDigitDetailST() *
* (2) Quit                           *
**************************************
Enter an integer for option + ENTER: 1

Enter an Integer: 42524502

Calling displayDigitDetailST() with one argument of
42524502

  While displayDigitDetailST() is running with the actual
  argument of 42524502, the following is obtained:

  42524502 is an even and positive number.
  There is/are 8 digit(s).

  The digit(s) would be
    2
    0
    5
    4
    2
    5
    2
    4

  There is/are 3 unique even digit(s) of
    0
    2
    4

  With digit 2 occurs the most time of 3!

**************************************
*        MENU - Final Exam 0P        *
* (1) Calling displayDigitDetailST() *
* (2) Quit                           *
**************************************
Enter an integer for option + ENTER: 1

Enter an Integer: 450466260

Calling displayDigitDetailST() with one argument of
450466260

  While displayDigitDetailST() is running with the actual
  argument of 450466260, the following is obtained:

  450466260 is an even and positive number.
  There is/are 9 digit(s).

  The digit(s) would be
    0
    6
    2
    6
    6
    4
    0
    5
    4

  There is/are 4 unique even digit(s) of
    0
    2
    4
    6

  With digit 6 occurs the most time of 3!

**************************************
*        MENU - Final Exam 0P        *
* (1) Calling displayDigitDetailST() *
* (2) Quit                           *
**************************************
Enter an integer for option + ENTER: 1

Enter an Integer: 44504006

Calling displayDigitDetailST() with one argument of
44504006

  While displayDigitDetailST() is running with the actual
  argument of 44504006, the following is obtained:

  44504006 is an even and positive number.
  There is/are 8 digit(s).

  The digit(s) would be
    6
    0
    0
    4
    0
    5
    4
    4

  There is/are 3 unique even digit(s) of
    0
    4
    6

  With digit 0 occurs the most time of 3!
  With digit 4 occurs the most time of 3!

**************************************
*        MENU - Final Exam 0P        *
* (1) Calling displayDigitDetailST() *
* (2) Quit                           *
**************************************
Enter an integer for option + ENTER: 1

Enter an Integer: 345

Calling displayDigitDetailST() with one argument of
345

  While displayDigitDetailST() is running with the actual
  argument of 345, the following is obtained:

  345 is an odd and positive number.
  There is/are 3 digit(s).

  The digit(s) would be
    5
    4
    3

  There is/are 1 unique even digit(s) of
    4

  With digit 3 occurs the most time of 1!
  With digit 4 occurs the most time of 1!
  With digit 5 occurs the most time of 1!

**************************************
*        MENU - Final Exam 0P        *
* (1) Calling displayDigitDetailST() *
* (2) Quit                           *
**************************************
Enter an integer for option + ENTER: 1

Enter an Integer: -3450409

Calling displayDigitDetailST() with one argument of
-3450409

  While displayDigitDetailST() is running with the actual
  argument of -3450409, the following is obtained:

  -3450409 is an odd and negative number.
  There is/are 7 digit(s).

  The digit(s) would be
    9
    0
    4
    0
    5
    4
    3

  There is/are 2 unique even digit(s) of
    0
    4

  With digit 0 occurs the most time of 2!
  With digit 4 occurs the most time of 2!

**************************************
*        MENU - Final Exam 0P        *
* (1) Calling displayDigitDetailST() *
* (2) Quit                           *
**************************************
Enter an integer for option + ENTER: 1

Enter an Integer: 41061

Calling displayDigitDetailST() with one argument of
41061

  While displayDigitDetailST() is running with the actual
  argument of 41061, the following is obtained:

  41061 is an odd and positive number.
  There is/are 5 digit(s).

  The digit(s) would be
    1
    6
    0
    1
    4

  There is/are 3 unique even digit(s) of
    0
    4
    6

  With digit 1 occurs the most time of 2!

**************************************
*        MENU - Final Exam 0P        *
* (1) Calling displayDigitDetailST() *
* (2) Quit                           *
**************************************
Enter an integer for option + ENTER: 1

Enter an Integer: 0

Calling displayDigitDetailST() with one argument of
0

  While displayDigitDetailST() is running with the actual
  argument of 0, the following is obtained:

  The given value is ZERO!

**************************************
*        MENU - Final Exam 0P        *
* (1) Calling displayDigitDetailST() *
* (2) Quit                           *
**************************************
Enter an integer for option + ENTER: 2

Have a great Holiday Season!

*/

/* Logic_Code_Output_Issues
The last couple runs in the sample are missing the
unique even digit and most frequent print sections.
In my output, every run has those sections included
except for zero. I assume this is fine on my end.
*/