// * 1. Conditional Statements (if, else if, else):

// #include <iostream>

// using namespace std;

// int main() {
//     int num = 10;

//     if (num > 0) {
//         cout << "Number is positive." << endl;
//     } else if (num == 0) {
//         cout << "Number is zero." << endl;
//     } else {
//         cout << "Number is negative." << endl;
//     }

//     return 0;
// }

// ---------------------------------------------------------------
// * 2. Switch Statement:

// #include <iostream>

// using namespace std;

// int main() {
//     char grade = 'B';

//     switch (grade) {
//         case 'A':
//             cout << "Excellent!" << endl;
//             break;
//         case 'B':
//             cout << "Good job!" << endl;
//             break;
//         case 'C':
//             cout << "Satisfactory." << endl;
//             break;
//         default:
//             cout << "Need improvement." << endl;
//     }

//     return 0;
// }

// ---------------------------------------------------------------
// * 3. Looping Constructs (for, while, do-while):

#include <iostream>

using namespace std;

int main() {
    // For loop
    for (int i = 1; i <= 5; ++i) {
        cout << "Iteration: " << i << endl;
    }

    // While loop
    int count = 0;
    while (count < 3) {
        cout << "While loop iteration: " << count << endl;
        ++count;
    }

    // * ( while ) is used for looping and repetitive execution, while ( if/else ) is used for making conditional decisions in the program flow

    // Do-while loop
    int n = 0;
    do {
        cout << "Do-while loop iteration: " << n << endl;
        ++n;
    } while (n < 3);

    // Nested Loops
    for (int i = 1; i <= 3; ++i) {
        for (int j = 1; j <= 2; ++j) {
            cout << "Nested loop: (" << i << ", " << j << ")" << endl;
        }
    }

    return 0;
}


// * Key Differences Between if/else and while:

// ! Purpose:

// ? while: Used for repeated execution of a block of code as long as a condition is true.

// ? if/else: Used for conditional execution of different blocks of code based on a true or false condition.

// ! Structure:

// ? while: Consists of a loop structure that repeatedly executes the code block while the condition is true.

// ? if/else: Consists of a branching structure where one of the two code blocks is executed based on the condition.

// ! Number of Executions:

// ? while: Can execute the code block multiple times (zero or more) depending on the condition.

// ? if/else: Executes either the if block or the else block, but not both. It is a one-time decision.

// ! Example Use Cases:

// ? while: Used for tasks like iterating through elements in an array, reading data from a file until a specific condition is met, etc.

// ? if/else: Used for making decisions in the program flow, such as checking if a number is positive or negative and taking different actions accordingly.

// ---------------------------------------------------------------
// * 4. Break and Continue Statements:

// #include <iostream>

// using namespace std;

// int main() {
//     // Break statement
//     for (int i = 1; i <= 5; ++i) {
//         if (i == 3) {
//             break;
//         }
//         cout << "Iteration " << i << endl;
//     }

//     // Continue statement
//     for (int j = 1; j <= 5; ++j) {
//         if (j == 3) {
//             continue;
//         }
//         cout << "Iteration " << j << endl;
//     }

//     return 0;
// }


// ---------------------------------------------------------------



