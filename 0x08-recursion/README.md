0x08. C - Recursion
Description
This project involves solving various programming problems using recursion in C. Recursion is a method where a function calls itself to break down a problem into smaller sub-problems. Each task demonstrates a different application of recursion, such as string manipulation, mathematical computations, and checking properties like palindromes or prime numbers.

Resources
Recursion Introduction

What is Recursion?

C Recursion Tutorial

Recursive Functions in C

Learning Objectives
Understand the concept of recursion and its implementation in C.

Identify scenarios where recursion is appropriate versus iterative solutions.

Write recursive functions to solve problems without using loops.

Recognize the base case and recursive case in function design.

Copyright - Plagiarism
All solutions must be original work. Copying code from any source is strictly prohibited.

Any form of plagiarism will result in removal from the program.

Requirements
Environment: Ubuntu 20.04 LTS, compiled with gcc using -Wall -Werror -Wextra -pedantic -std=gnu89.

Style: Adhere to Betty coding style. Check with betty-style.pl and betty-doc.pl.

Restrictions: No global variables, maximum 5 functions per file, no standard library functions (use _putchar provided).

No Loops: All solutions must use recursion; loops (for, while, etc.) are not allowed.

Tasks
0. _puts_recursion
File: 0-puts_recursion.c
Prototype: void _puts_recursion(char *s);
Description: Prints a string followed by a newline using recursion. Mimics the behavior of the standard puts function.

1. _print_rev_recursion
File: 1-print_rev_recursion.c
Prototype: void _print_rev_recursion(char *s);
Description: Prints a string in reverse order by recursively calling the function before printing each character.

2. _strlen_recursion
File: 2-strlen_recursion.c
Prototype: int _strlen_recursion(char *s);
Description: Returns the length of a string by recursively counting each character until the null terminator.

3. Factorial
File: 3-factorial.c
Prototype: int factorial(int n);
Description: Computes the factorial of n. Returns -1 for negative input. Factorial of 0 is 1.

4. _pow_recursion
File: 4-pow_recursion.c
Prototype: int _pow_recursion(int x, int y);
Description: Returns x raised to the power y. Handles negative exponents by returning -1.

5. _sqrt_recursion
File: 5-sqrt_recursion.c
Prototype: int _sqrt_recursion(int n);
Description: Finds the natural square root of n. Returns -1 if n has no natural square root. Uses a helper function for recursive calculation.

6. Prime Number
File: 6-is_prime_number.c
Prototype: int is_prime_number(int n);
Description: Checks if n is a prime number. Returns 1 if prime, 0 otherwise. Uses recursive divisibility checks.

7. Palindrome Check
File: 100-is_palindrome.c
Prototype: int is_palindrome(char *s);
Description: Determines if a string is a palindrome. Returns 1 if true, 0 otherwise. Recursively compares characters from both ends.

8. Wildcard Comparison
File: 101-wildcmp.c
Prototype: int wildcmp(char *s1, char *s2);
Description: Compares two strings where s2 can contain the wildcard *. Returns 1 if they match, 0 otherwise. Handles wildcards recursively to match any sequence.

Compilation
Compile each task with _putchar.c and a main file (e.g., 0-main.c):

Author
Pitso Lephoi
Holberton School Student