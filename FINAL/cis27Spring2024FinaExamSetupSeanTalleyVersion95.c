/**
 * Program Name: cis27Spring2024FinaExamSetupSeanTalleyVersion95.c
 * Discussion:   Implentation File
 *                 Menu Execution
 * Written By:   Sean Talley
 * Date:         2024/05/23
 */

#define _CRT_SECURE_NO_WARNINGS

// Header/include File
#include <stdio.h>
#include <stdlib.h>
#include "cis27Spring2024UtilitySeanTalley.h"

// Application Driver
int main() {
    int lastTwoDigit;

    printf("\nEnter the last 2 digits of your student ID: ");
    scanf("%d", &lastTwoDigit); 

    displayCodingStatement();
    displayClassInfo();

    runMenuFinalExam();

    return 0;  
}

/** PROGRAM OUTPUT
Enter the last 2 digits of your student ID: 95

++++++++++

While displayCodingStatementST() is running!
We write code to manipulate data (which are
provided by the user) to produce the
required outcome in the most efficient way!

++++++++++

While displayClassInfoST() is running!
CIS 27 - data Structures and Algorithms in C
Laney College
Sean Talley

Information --
Assignment:               Final Exam
Implemented by:           Sean Talley
Required Submission Date: 2024/05/23

***********************************************
*            MENU - Final Exam 95             *
* 1. Creating ONE NEW Poly                    *
* 2. Calling displayPalindromeST() for 1 Poly *
* 3. Calling printPolyST() to display 1 Poly  *
* 4. Quit                                     *
***********************************************
Enter an integer for option + ENTER: 6

Menu - Wrong Option!

***********************************************
*            MENU - Final Exam 95             *
* 1. Creating ONE NEW Poly                    *
* 2. Calling displayPalindromeST() for 1 Poly *
* 3. Calling printPolyST() to display 1 Poly  *
* 4. Quit                                     *
***********************************************
Enter an integer for option + ENTER: 2

MENU - No Polynomial!

***********************************************
*            MENU - Final Exam 95             *
* 1. Creating ONE NEW Poly                    *
* 2. Calling displayPalindromeST() for 1 Poly *
* 3. Calling printPolyST() to display 1 Poly  *
* 4. Quit                                     *
***********************************************
Enter an integer for option + ENTER: 3

MENU - No Polynomial!

***********************************************
*            MENU - Final Exam 95             *
* 1. Creating ONE NEW Poly                    *
* 2. Calling displayPalindromeST() for 1 Poly *
* 3. Calling printPolyST() to display 1 Poly  *
* 4. Quit                                     *
***********************************************
Enter an integer for option + ENTER: 1

Creating ONE NEW Poly!

Calling runInitSubMenuST()!

  While runInitSubmenuST() is running -

  ****************************
  *    runInitSubmenuST()    *
  * 1. Creating ONE NEW Poly *
  * 2. Returning             *
  ****************************
  Enter an integer for option (1-2): 1

  (i)   New polynomial will be created!
  (ii)  Do not enter new term with existing orders!

  Calling createOnePolynomial()!

    While running createOnePolynomial() to include
      createPoly(), createPolyNode()
      insertPoly(), and more

    ************************
    *  Creating Submenu    *
    * 1. Getting Term Info *
    * 2. Returning         *
    ************************
    Enter an integer for option(1 - 2) : 1

    Do not enter new term with existing orders!

    Adding a new term -
      Enter a non-negative order for term: 3

      Enter an int for num: 1

      Enter a non-zero int for denom: 0
      Enter a non-zero int for denom: 0
      Enter a non-zero int for denom: -1

    ************************
    *  Creating Submenu    *
    * 1. Getting Term Info *
    * 2. Returning         *
    ************************
    Enter an integer for option(1 - 2) : 1

    Do not enter new term with existing orders!

    Adding a new term -
      Enter a non-negative order for term: 5

      Enter an int for num: 1

      Enter a non-zero int for denom: 1

    ************************
    *  Creating Submenu    *
    * 1. Getting Term Info *
    * 2. Returning         *
    ************************
    Enter an integer for option(1 - 2) : 1

    Do not enter new term with existing orders!

    Adding a new term -
      Enter a non-negative order for term: 1

      Enter an int for num: 1

      Enter a non-zero int for denom: 1

    ************************
    *  Creating Submenu    *
    * 1. Getting Term Info *
    * 2. Returning         *
    ************************
    Enter an integer for option(1 - 2) : 2

    Returning to previous menu ...

  ****************************
  *    runInitSubmenuST()    *
  * 1. Creating ONE NEW Poly *
  * 2. Returning             *
  ****************************
  Enter an integer for option (1-2): 2

  Returning to previous menu ...

***********************************************
*            MENU - Final Exam 95             *
* 1. Creating ONE NEW Poly                    *
* 2. Calling displayPalindromeST() for 1 Poly *
* 3. Calling printPolyST() to display 1 Poly  *
* 4. Quit                                     *
***********************************************
Enter an integer for option + ENTER: 3

MENU: displayPoly()

  While running displayPoly()!

  Poly Address: 007FF8A8

    Node Address: 008A9F08
      Term Address: 008A4478
        Exponent/Order: 5
        Coefficient -
          num: 1
          denom: 1
      next: 008A9EF8

    Node Address: 008A9EF8
      Term Address: 008A4460
        Exponent/Order: 3
        Coefficient -
          num: -1
          denom: 1
      next: 008A4558

    Node Address: 008A4558
      Term Address: 008A4568
        Exponent/Order: 1
        Coefficient -
          num: 1
          denom: 1
      next: 00000000

***********************************************
*            MENU - Final Exam 95             *
* 1. Creating ONE NEW Poly                    *
* 2. Calling displayPalindromeST() for 1 Poly *
* 3. Calling printPolyST() to display 1 Poly  *
* 4. Quit                                     *
***********************************************
Enter an integer for option + ENTER: 2

Calling displayPalindromeST()!

  While running displayPalindrome()!

  The polynomial is a Palindrome!

  The smallest order term has the exponent of 1.

  For the smallest order term -
    There is/are 1 unique odd digit(s) of
      1

    Digit 1 is found in both num and denom.

    Digit 1 above is found in
      2 other term(s)!

***********************************************
*            MENU - Final Exam 95             *
* 1. Creating ONE NEW Poly                    *
* 2. Calling displayPalindromeST() for 1 Poly *
* 3. Calling printPolyST() to display 1 Poly  *
* 4. Quit                                     *
***********************************************
Enter an integer for option + ENTER: 1

Creating ONE NEW Poly!

Calling runInitSubMenuST()!

  While runInitSubmenuST() is running -

  ****************************
  *    runInitSubmenuST()    *
  * 1. Creating ONE NEW Poly *
  * 2. Returning             *
  ****************************
  Enter an integer for option (1-2): 1

  (i)   New polynomial will be created!
  (ii)  Do not enter new term with existing orders!

  Calling createOnePolynomial()!

    While running createOnePolynomial() to include
      createPoly(), createPolyNode()
      insertPoly(), and more

    ************************
    *  Creating Submenu    *
    * 1. Getting Term Info *
    * 2. Returning         *
    ************************
    Enter an integer for option(1 - 2) : 1

    Do not enter new term with existing orders!

    Adding a new term -
      Enter a non-negative order for term: 4

      Enter an int for num: 1

      Enter a non-zero int for denom: -1

    ************************
    *  Creating Submenu    *
    * 1. Getting Term Info *
    * 2. Returning         *
    ************************
    Enter an integer for option(1 - 2) : 1

    Do not enter new term with existing orders!

    Adding a new term -
      Enter a non-negative order for term: 6

      Enter an int for num: -1

      Enter a non-zero int for denom: -1

    ************************
    *  Creating Submenu    *
    * 1. Getting Term Info *
    * 2. Returning         *
    ************************
    Enter an integer for option(1 - 2) : 1

    Do not enter new term with existing orders!

    Adding a new term -
      Enter a non-negative order for term: 1

      Enter an int for num: -12344321

      Enter a non-zero int for denom: 52625

    ************************
    *  Creating Submenu    *
    * 1. Getting Term Info *
    * 2. Returning         *
    ************************
    Enter an integer for option(1 - 2) : 2

    Returning to previous menu ...

  ****************************
  *    runInitSubmenuST()    *
  * 1. Creating ONE NEW Poly *
  * 2. Returning             *
  ****************************
  Enter an integer for option (1-2): 2

  Returning to previous menu ...

***********************************************
*            MENU - Final Exam 95             *
* 1. Creating ONE NEW Poly                    *
* 2. Calling displayPalindromeST() for 1 Poly *
* 3. Calling printPolyST() to display 1 Poly  *
* 4. Quit                                     *
***********************************************
Enter an integer for option + ENTER: 3

MENU: displayPoly()

  While running displayPoly()!

  Poly Address: 007FF8A8

    Node Address: 008A9F08
      Term Address: 008A4658
        Exponent/Order: 6
        Coefficient -
          num: 1
          denom: 1
      next: 008A9EF8

    Node Address: 008A9EF8
      Term Address: 008A45B0
        Exponent/Order: 4
        Coefficient -
          num: -1
          denom: 1
      next: 008A4460

    Node Address: 008A4460
      Term Address: 008A4580
        Exponent/Order: 1
        Coefficient -
          num: -12344321
          denom: 52625
      next: 00000000

***********************************************
*            MENU - Final Exam 95             *
* 1. Creating ONE NEW Poly                    *
* 2. Calling displayPalindromeST() for 1 Poly *
* 3. Calling printPolyST() to display 1 Poly  *
* 4. Quit                                     *
***********************************************
Enter an integer for option + ENTER: 2

Calling displayPalindromeST()!

  While running displayPalindrome()!

  The polynomial is a Palindrome!

  The smallest order term has the exponent of 1.

  For the smallest order term -
    There is/are 3 unique odd digit(s) of
      1
      3
      5

    Digit 1 is found only in num.
    Digit 3 is found only in num.
    Digit 5 is found only in denom.

    Digit 5 above is not found in any other term(s)!

***********************************************
*            MENU - Final Exam 95             *
* 1. Creating ONE NEW Poly                    *
* 2. Calling displayPalindromeST() for 1 Poly *
* 3. Calling printPolyST() to display 1 Poly  *
* 4. Quit                                     *
***********************************************
Enter an integer for option + ENTER: 1

Creating ONE NEW Poly!

Calling runInitSubMenuST()!

  While runInitSubmenuST() is running -

  ****************************
  *    runInitSubmenuST()    *
  * 1. Creating ONE NEW Poly *
  * 2. Returning             *
  ****************************
  Enter an integer for option (1-2): 1

  (i)   New polynomial will be created!
  (ii)  Do not enter new term with existing orders!

  Calling createOnePolynomial()!

    While running createOnePolynomial() to include
      createPoly(), createPolyNode()
      insertPoly(), and more

    ************************
    *  Creating Submenu    *
    * 1. Getting Term Info *
    * 2. Returning         *
    ************************
    Enter an integer for option(1 - 2) : 1

    Do not enter new term with existing orders!

    Adding a new term -
      Enter a non-negative order for term: 4

      Enter an int for num: 6

      Enter a non-zero int for denom: -7

    ************************
    *  Creating Submenu    *
    * 1. Getting Term Info *
    * 2. Returning         *
    ************************
    Enter an integer for option(1 - 2) : 1

    Do not enter new term with existing orders!

    Adding a new term -
      Enter a non-negative order for term: 6

      Enter an int for num: -1

      Enter a non-zero int for denom: -1

    ************************
    *  Creating Submenu    *
    * 1. Getting Term Info *
    * 2. Returning         *
    ************************
    Enter an integer for option(1 - 2) : 1

    Do not enter new term with existing orders!

    Adding a new term -
      Enter a non-negative order for term: 1

      Enter an int for num: -123474321

      Enter a non-zero int for denom: 56765

    ************************
    *  Creating Submenu    *
    * 1. Getting Term Info *
    * 2. Returning         *
    ************************
    Enter an integer for option(1 - 2) : 2

    Returning to previous menu ...

  ****************************
  *    runInitSubmenuST()    *
  * 1. Creating ONE NEW Poly *
  * 2. Returning             *
  ****************************
  Enter an integer for option (1-2): 2

  Returning to previous menu ...

***********************************************
*            MENU - Final Exam 95             *
* 1. Creating ONE NEW Poly                    *
* 2. Calling displayPalindromeST() for 1 Poly *
* 3. Calling printPolyST() to display 1 Poly  *
* 4. Quit                                     *
***********************************************
Enter an integer for option + ENTER: 3

MENU: displayPoly()

  While running displayPoly()!

  Poly Address: 007FF8A8

    Node Address: 008A9F08
      Term Address: 008A46B8
        Exponent/Order: 6
        Coefficient -
          num: 1
          denom: 1
      next: 008A9EF8

    Node Address: 008A9EF8
      Term Address: 008A46A0
        Exponent/Order: 4
        Coefficient -
          num: -6
          denom: 7
      next: 008A4460

    Node Address: 008A4460
      Term Address: 008A4598
        Exponent/Order: 1
        Coefficient -
          num: -123474321
          denom: 56765
      next: 00000000

***********************************************
*            MENU - Final Exam 95             *
* 1. Creating ONE NEW Poly                    *
* 2. Calling displayPalindromeST() for 1 Poly *
* 3. Calling printPolyST() to display 1 Poly  *
* 4. Quit                                     *
***********************************************
Enter an integer for option + ENTER: 2

Calling displayPalindromeST()!

  While running displayPalindrome()!

  The polynomial is a Palindrome!

  The smallest order term has the exponent of 1.

  For the smallest order term -
    There is/are 4 unique odd digit(s) of
      1
      3
      5
      7

    Digit 1 is found only in num.
    Digit 3 is found only in num.
    Digit 5 is found only in denom.
    Digit 7 is found in both num and denom.

    Digit 7 above is found in
      1 other term(s)!

***********************************************
*            MENU - Final Exam 95             *
* 1. Creating ONE NEW Poly                    *
* 2. Calling displayPalindromeST() for 1 Poly *
* 3. Calling printPolyST() to display 1 Poly  *
* 4. Quit                                     *
***********************************************
Enter an integer for option + ENTER: 1

Creating ONE NEW Poly!

Calling runInitSubMenuST()!

  While runInitSubmenuST() is running -

  ****************************
  *    runInitSubmenuST()    *
  * 1. Creating ONE NEW Poly *
  * 2. Returning             *
  ****************************
  Enter an integer for option (1-2): 1

  (i)   New polynomial will be created!
  (ii)  Do not enter new term with existing orders!

  Calling createOnePolynomial()!

    While running createOnePolynomial() to include
      createPoly(), createPolyNode()
      insertPoly(), and more

    ************************
    *  Creating Submenu    *
    * 1. Getting Term Info *
    * 2. Returning         *
    ************************
    Enter an integer for option(1 - 2) : 1

    Do not enter new term with existing orders!

    Adding a new term -
      Enter a non-negative order for term: 4

      Enter an int for num: 6

      Enter a non-zero int for denom: -1

    ************************
    *  Creating Submenu    *
    * 1. Getting Term Info *
    * 2. Returning         *
    ************************
    Enter an integer for option(1 - 2) : 1

    Do not enter new term with existing orders!

    Adding a new term -
      Enter a non-negative order for term: 6

      Enter an int for num: -1

      Enter a non-zero int for denom: -6

    ************************
    *  Creating Submenu    *
    * 1. Getting Term Info *
    * 2. Returning         *
    ************************
    Enter an integer for option(1 - 2) : 1

    Do not enter new term with existing orders!

    Adding a new term -
      Enter a non-negative order for term: 1

      Enter an int for num: -123464321

      Enter a non-zero int for denom: 525

    ************************
    *  Creating Submenu    *
    * 1. Getting Term Info *
    * 2. Returning         *
    ************************
    Enter an integer for option(1 - 2) : 2

    Returning to previous menu ...

  ****************************
  *    runInitSubmenuST()    *
  * 1. Creating ONE NEW Poly *
  * 2. Returning             *
  ****************************
  Enter an integer for option (1-2): 2

  Returning to previous menu ...

***********************************************
*            MENU - Final Exam 95             *
* 1. Creating ONE NEW Poly                    *
* 2. Calling displayPalindromeST() for 1 Poly *
* 3. Calling printPolyST() to display 1 Poly  *
* 4. Quit                                     *
***********************************************
Enter an integer for option + ENTER: 3

MENU: displayPoly()

  While running displayPoly()!

  Poly Address: 007FF8A8

    Node Address: 008A9F08
      Term Address: 008A4688
        Exponent/Order: 6
        Coefficient -
          num: 1
          denom: 6
      next: 008A9EF8

    Node Address: 008A9EF8
      Term Address: 008A4640
        Exponent/Order: 4
        Coefficient -
          num: -6
          denom: 1
      next: 008A4460

    Node Address: 008A4460
      Term Address: 008A46E8
        Exponent/Order: 1
        Coefficient -
          num: -123464321
          denom: 525
      next: 00000000

***********************************************
*            MENU - Final Exam 95             *
* 1. Creating ONE NEW Poly                    *
* 2. Calling displayPalindromeST() for 1 Poly *
* 3. Calling printPolyST() to display 1 Poly  *
* 4. Quit                                     *
***********************************************
Enter an integer for option + ENTER: 2

Calling displayPalindromeST()!

  While running displayPalindrome()!

  The polynomial is a Palindrome!

  The smallest order term has the exponent of 1.

  For the smallest order term -
    There is/are 3 unique odd digit(s) of
      1
      3
      5

    Digit 1 is found only in num.
    Digit 3 is found only in num.
    Digit 5 is found only in denom.

    Digit 5 above is not found in any other term(s)!

***********************************************
*            MENU - Final Exam 95             *
* 1. Creating ONE NEW Poly                    *
* 2. Calling displayPalindromeST() for 1 Poly *
* 3. Calling printPolyST() to display 1 Poly  *
* 4. Quit                                     *
***********************************************
Enter an integer for option + ENTER: 4

Free ALL DYNAMIC MEMORY BLOCKS!

Have a great SUMMER!

*/

/** Logic_Code_Output Issues
I don't believe there are any issues
with the output. The word "ENTER"
appears blue for me though but I don't
believe that's of any concern.
*/

