0x05. C - Pointers, Arrays, and Strings

Overview

This project focuses on understanding pointers, arrays, and strings in the C programming language. By the end of the project, you should be able to explain and implement these concepts without external resources.

Learning Objectives

At the end of this project, you will be able to:

Understand and use pointers in C.

Differentiate between pointers and arrays.

Manipulate strings effectively.

Understand the scope of variables in C.

Resources

Read or watch:

C - Arrays

C - Pointers

C - Strings

Memory Layout

Additional Resource: Arrays & Pointers in C Programming Explained

Requirements

Allowed editors: vi, vim, emacs

Compilation: Ubuntu 20.04 LTS using gcc -Wall -Werror -Wextra -pedantic -std=gnu89

Code must follow the Betty style (checked using betty-style.pl and betty-doc.pl)

No global variables allowed

No more than 5 functions per file

Standard library functions (e.g., printf, puts) are forbidden

_putchar is allowed but should not be pushed

Function prototypes should be declared in main.h

Files & Tasks

Mandatory Tasks

98 Battery st.

void reset_to_98(int *n);

Don't swap horses in crossing a stream

void swap_int(int *a, int *b);

This report, by its very length, defends itself against the risk of being read

int _strlen(char *s);

I do not fear computers. I fear the lack of them

void _puts(char *str);

I can only go one way. I've not got a reverse gear

void print_rev(char *s);

A good engineer thinks in reverse

void rev_string(char *s);

Half the lies they tell about me aren't true

void puts2(char *str);

Winning is only half of it. Having fun is the other half

void puts_half(char *str);

Arrays are not pointers

void print_array(int *a, int n);

strcpy

char *_strcpy(char *dest, char *src);

Advanced Tasks

Great leaders sacrifice numbers to save people

int _atoi(char *s);

Plagiarism Policy

You must implement all solutions independently. Copying and pasting code from others will result in removal from the program.

Directory Structure

alx-low_level_programming/
    ├── 0x05-pointers_arrays_strings/
        ├── 0-reset_to_98.c
        ├── 1-swap.c
        ├── 2-strlen.c
        ├── 3-puts.c
        ├── 4-print_rev.c
        ├── 5-rev_string.c
        ├── 6-puts2.c
        ├── 7-puts_half.c
        ├── 8-print_array.c
        ├── 9-strcpy.c
        ├── main.h
        ├── README.md

Compilation Example

To compile a file, use the following command:

gcc -Wall -pedantic -Werror -Wextra -std=gnu89 filename.c -o output_file

Author

Pitso Lephoi