// 1. Arithmetic Operators:

#include <iostream>

using namespace std;

int main() {
    int a = 10, b = 3;

    cout << "Addition: " << (a + b) << endl;
    cout << "Subtraction: " << (a - b) << endl;
    cout << "Multiplication: " << (a * b) << endl;
    cout << "Division: " << (a / b) << endl;  // Integer division
    cout << "Modulus: " << (a % b) << endl;

    return 0;
}


// 2. Relational Operators:

#include <iostream>

using namespace std;

int main() {
    int x = 5, y = 8;

    cout << "Equal to: " << (x == y) << endl;
    cout << "Not equal to: " << (x != y) << endl;
    cout << "Greater than: " << (x > y) << endl;
    cout << "Less than: " << (x < y) << endl;
    cout << "Greater than or equal to: " << (x >= y) << endl;
    cout << "Less than or equal to: " << (x <= y) << endl;

    return 0;
}


// 3. Logical Operators:

#include <iostream>

using namespace std;

int main() {
    bool p = true, q = false;

    cout << "Logical AND: " << (p && q) << endl;
    cout << "Logical OR: " << (p || q) << endl;
    cout << "Logical NOT: " << !p << endl;

    return 0;
}


// 4. Increment and Decrement Operators:

#include <iostream>

using namespace std;

int main() {
    int num = 5;

    cout << "Original value: " << num << endl;

    // Increment
    num++;
    cout << "After increment: " << num << endl;

    // Decrement
    num--;
    cout << "After decrement: " << num << endl;

    return 0;
}


// 5. Assignment Operators:

#include <iostream>

using namespace std;

int main() {
    int a = 10, b = 5;

    cout << "Original values: a = " << a << ", b = " << b << endl;

    // Assignment
    a = b;
    cout << "After assignment: a = " << a << ", b = " << b << endl;

    // Compound assignment
    a += 3;
    cout << "After compound assignment (a += 3): a = " << a << endl;

    return 0;
}


// 6. Ternary Operator (Conditional Operator):

#include <iostream>

using namespace std;

int main() {
    int x = 5, y = 8;

    // Ternary operator
    int max = (x > y) ? x : y;

    cout << "Maximum value: " << max << endl;

    return 0;
}


// 7. Bitwise Operators:

#include <iostream>

using namespace std;

int main() {
    int a = 5, b = 3;

    cout << "Bitwise AND: " << (a & b) << endl;
    cout << "Bitwise OR: " << (a | b) << endl;
    cout << "Bitwise XOR: " << (a ^ b) << endl;
    cout << "Bitwise NOT: " << (~a) << endl;
    cout << "Left shift: " << (a << 1) << endl;
    cout << "Right shift: " << (a >> 1) << endl;

    return 0;
}