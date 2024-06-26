week 4 of holberton: C - Pointers, arrays and strings

General
Allowed editors: vi, vim, emacs
All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
All your files should end with a new line
A README.md file, at the root of the folder of the project is mandatory
Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
You are not allowed to use global variables
No more than 5 functions per file
You are not allowed to use the standard library. Any use of functions like printf, puts, etc… is forbidden
You are allowed to use _putchar
You don’t have to push _putchar.c, we will use our file. If you do it won’t be taken into account
In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples
The prototypes of all your functions and the prototype of the function _putchar should be included in your header file called main.h
Don’t forget to push your header file

0. 98 Battery st.
Write a function that takes a pointer to an int as parameter and updates the value it points to to 98.

Prototype: void reset_to_98(int *n);

1. Don't swap horses in crossing a stream
Write a function that swaps the values of two integers.

Prototype: void swap_int(int *a, int *b);

2. This report, by its very length, defends itself against the risk of being read
Write a function that returns the length of a string.

Prototype: int _strlen(char *s);
FYI: The standard library provides a similar function: strlen. Run man strlen to learn more.

3. I do not fear computers. I fear the lack of them
Write a function that prints a string, followed by a new line, to stdout.

Prototype: void _puts(char *str);
FYI: The standard library provides a similar function: puts. Run man puts to learn more.

4. I can only go one way. I've not got a reverse gear
Write a function that prints a string, in reverse, followed by a new line.

Prototype: void print_rev(char *s);

5. A good engineer thinks in reverse and asks himself about the stylistic consequences of the components and systems he proposes
Write a function that reverses a string.

Prototype: void rev_string(char *s);

6. Half the lies they tell about me aren't true
Write a function that prints every other character of a string, starting with the first character, followed by a new line.

Prototype: void puts2(char *str);
7. Winning is only half of it. Having fun is the other half
Write a function that prints half of a string, followed by a new line.

Prototype: void puts_half(char *str);
The function should print the second half of the string
If the number of characters is odd, the function should print the last n characters of the string, where n = (length_of_the_string - 1) / 2

8. Arrays are not pointers

Write a function that prints n elements of an array of integers, followed by a new line.

Prototype: void print_array(int *a, int n);
where n is the number of elements of the array to be printed
Numbers must be separated by comma, followed by a space
The numbers should be displayed in the same order as they are stored in the array
You are allowed to use printf

9. strcpy

Prototype: char *_strcpy(char *dest, char *src);
Write a function that copies the string pointed to by src, including the terminating null byte (\0), to the buffer pointed to by dest.

Return value: the pointer to dest
FYI: The standard library provides a similar function: strcpy. Run man strcpy to learn more.
10. Great leaders are willing to sacrifice the numbers to save the people. Poor leaders sacrifice the people to save the numbers

Write a function that convert a string to an integer.

Prototype: int _atoi(char *s);
The number in the string can be preceded by an infinite number of characters
You need to take into account all the - and + signs before the number
If there are no numbers in the string, the function must return 0
You are not allowed to use long
You are not allowed to declare new variables of “type” array
You are not allowed to hard-code special values
We will use the -fsanitize=signed-integer-overflow gcc flag to compile your code.
FYI: The standard library provides a similar function: atoi. Run man atoi to learn more.

3rd project
C - More pointers, arrays and strings

In this project, I continued to practice using pointers, arrays and strings in C.

Tests ✔️

tests: Folder of test files. Provided by Holberton School.
Helper File 🙌

_putchar.c: C function that writes a character to stdout.
Header File 📁

holberton.h: Header file containing prototypes for all functions written in the project.
File	Prototype
0-strcat.c	char *_strcat(char *dest, char *src);
1-strncat.c	char *_strncat(char *dest, char *src, int n);
2-strncpy.c	char *_strncpy(char *dest, char *src, int n);
3-strcmp.c	int _strcmp(char *s1, char *s2);
4-rev_array.c	void reverse_array(int *a, int n);
5-string_toupper.c	char *string_toupper(char *);
6-cap_string.c	char *cap_string(char *);
7-leet.c	char *leet(char *);
8-rot13.c	char *rot13(char *);
100-print_number.c	void print_number(int n);
102-infinite_add.c	char *infinite_add(char *n1, char *n2, char *r, int size_r);
103-print_buffer.c	void print_buffer(char *b, int size);
Tasks 📃

0. strcat

0-strcat.c: C function that concatenates two strings.
Adds a terminating null byte at end.
1. strncat

1-strncat.c: C function that concatenates two strings using at most an inputted number of bytes.
Adds a terminating null byte at end, unless source string is longer than maximum byte number.
2. strncpy

2-strncpy.c: C function that copies a string, including the terminating null byte, using at most an inputted number of bytes.
If the length of the source string is less than the maximum byte number, the remainder of the destination string is filled with null bytes.
Works identically to the standard library function strncpy.
3. strcmp

3-strcmp.c: C function that compares two strings.
Returns the difference in bytes at point of difference.
Works identically to the standard library function strcmp.
4. I am a kind of paranoid in reverse. I suspect people of plotting to make me happy

4-rev_array.c: C function that reverses the content of an array of integers.
5. Always look up

5-string_toupper.c: C function that changes all lowercase letters of a string to uppercase.
6. Expect the best. Prepare for the worst. Capitalize on what comes

6-cap_string.c: C function that capitalizes all words of a string.
7. Mozart composed his music not for the elite, but for everybody

7-leet.c: C function that encodes a string into 1337, without switch or ternary operations and using only one if and two loops.
Letters a and A are replaced by 4.
Leters e and E are replaced by 3.
Letters o and O are replaced by 0.
Letters t and T are replaced by 7.
Letters l and L are replaced by 1.
8. rot13

8-rot13.c: C function that encodes a string to rot13, without switch or ternary operations and using only one if and two loops.
9. Numbers have life; they're not just symbols on paper

100-print_number.c: C function that prints an integer without using long, arrays, pointers, or hard-coded special values.
10. A dream doesn't become reality through magic; it takes sweat, determination and hard work

101-magic.c: C program that prints a[2] = 98 using pointer magic.
Completion of this source code.
11. It is the addition of strangeness to beauty that constitutes the romantic character in art

102-infinite_add.c: C function that adds two numbers stored in strings to a buffer.
Assumes that strings are never empty and that numbers will always be positive, or 0.
Assumes there are only digits stored in the number strings.
If result can be stored in the buffer, returns a pointer to the result.
If result cannot be stored in the buffer, returns 0.
12. Noise is a buffer, more effective than cubicles or booth walls

103-print_buffer.c: C function that prints the content of an inputted number of bytes from a buffer.
Prints 10 bytes per line.
Starts with the position of the first byte in hexadecimal (8 chars), starting with 0.
Each line shows the hexadecimal content (2 chars) of the buffer, 2 bytes at a time, separated by a space.
Each line shows the content of the buffer. Prints the byte if it is printable; if not, prints ..
Each line ends with a new line \n.
If the inputted byte size is 0 or less, the function only prints a new line.
