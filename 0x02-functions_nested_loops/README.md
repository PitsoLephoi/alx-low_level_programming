# 0x02. C - Functions, Nested Loops

## Description
This project focuses on understanding and utilizing functions and nested loops in C programming. By completing the tasks in this project, you will gain a solid understanding of these fundamental concepts, which are crucial for efficient programming in C.

## Learning Objectives
By the end of this project, you should be able to:
- Understand and use nested loops.
- Understand and use functions.
- Differentiate between the declaration and definition of a function.
- Understand function prototypes.
- Understand variable scope.
- Use GCC flags `-Wall`, `-Werror`, `-pedantic`, `-Wextra`, and `-std=gnu89`.
- Understand and use header files with `#include`.

## Resources
### Read or Watch:
- [Nested while loops](#)
- [C - Functions](#)
- [Learning to Program in C (Part 06) (stop at 14:00)](#)
- [What is the purpose of a function prototype?](#)
- [C - Header Files (stop before the “Once-Only Headers” paragraph)](#)

### Additional Resources:
- [C Programming Loops & Functions](#)
- [Functions in C programming](#)

## Requirements
### General
- Allowed editors: `vi`, `vim`, `emacs`
- All files will be compiled on Ubuntu 20.04 LTS using `gcc` with options `-Wall -Werror -Wextra -pedantic -std=gnu89`
- All files should end with a new line
- A `README.md` file at the root of the project folder is mandatory
- Code should follow the Betty style, checked using `betty-style.pl` and `betty-doc.pl`
- No global variables allowed
- No more than 5 functions per file
- Standard library functions like `printf`, `puts`, etc., are forbidden; `_putchar` can be used
- Prototypes of all functions and `_putchar` should be included in a header file called `main.h`
- Push the header file to the repository

### Copyright - Plagiarism
- Solve tasks independently to meet learning objectives.
- Do not copy someone else’s work.
- Do not publish project content.
- Plagiarism will result in removal from the program.

## Project Tasks

### Mandatory Tasks
1. **_putchar**
   - Write a program that prints `_putchar`, followed by a new line.
   - **File:** `0-putchar.c`

2. **I sometimes suffer from insomnia. And when I can't fall asleep, I play what I call the alphabet game**
   - Write a function that prints the alphabet in lowercase, followed by a new line.
   - Prototype: `void print_alphabet(void);`
   - **File:** `1-alphabet.c`

3. **10 x alphabet**
   - Write a function that prints 10 times the alphabet in lowercase, followed by a new line.
   - Prototype: `void print_alphabet_x10(void);`
   - **File:** `2-print_alphabet_x10.c`

4. **islower**
   - Write a function that checks for lowercase character.
   - Prototype: `int _islower(int c);`
   - **File:** `3-islower.c`

5. **isalpha**
   - Write a function that checks for alphabetic character.
   - Prototype: `int _isalpha(int c);`
   - **File:** `4-isalpha.c`

6. **Sign**
   - Write a function that prints the sign of a number.
   - Prototype: `int print_sign(int n);`
   - **File:** `5-sign.c`

7. **There is no such thing as absolute value in this world. You can only estimate what a thing is worth to you**
   - Write a function that computes the absolute value of an integer.
   - Prototype: `int _abs(int);`
   - **File:** `6-abs.c`

8. **There are only 3 colors, 10 digits, and 7 notes; it's what we do with them that's important**
   - Write a function that prints the last digit of a number.
   - Prototype: `int print_last_digit(int);`
   - **File:** `7-print_last_digit.c`

9. **I'm federal agent Jack Bauer, and today is the longest day of my life**
   - Write a function that prints every minute of the day of Jack Bauer, from 00:00 to 23:59.
   - Prototype: `void jack_bauer(void);`
   - **File:** `8-24_hours.c`

10. **Learn your times table**
    - Write a function that prints the 9 times table, starting with 0.
    - Prototype: `void times_table(void);`
    - **File:** `9-times_table.c`

11. **a + b**
    - Write a function that adds two integers and returns the result.
    - Prototype: `int add(int, int);`
    - **File:** `10-add.c`

12. **98 Battery Street, the OG**
    - Write a function that prints all natural numbers from `n` to 98, followed by a new line.
    - Prototype: `void print_to_98(int n);`
    - **File:** `11-print_to_98.c`

### Advanced Tasks
1. **The World looks like a multiplication-table, or a mathematical equation, which, turn it how you will, balances itself**
   - Write a function that prints the `n` times table, starting with 0.
   - Prototype: `void print_times_table(int n);`
   - **File:** `100-times_table.c`

## Repository Structure
```
alx-low_level_programming/
├── 0x02-functions_nested_loops/
│   ├── 0-putchar.c
│   ├── 1-alphabet.c
│   ├── 2-print_alphabet_x10.c
│   ├── 3-islower.c
│   ├── 4-isalpha.c
│   ├── 5-sign.c
│   ├── 6-abs.c
│   ├── 7-print_last_digit.c
│   ├── 8-24_hours.c
│   ├── 9-times_table.c
│   ├── 10-add.c
│   ├── 11-print_to_98.c
│   ├── 100-times_table.c
│   ├── main.h
│   └── README.md
```

## Compilation
All files will be compiled using:
```
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 <file_name> -o <output_name>
```

## Author
- [Pitso Lephoi]

Feel free to reach out for any questions or clarifications regarding this project. Happy coding!
