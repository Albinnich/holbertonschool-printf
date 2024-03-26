C - printf

Description:

This is the first team project which is aimed to work on tasks together as a group of 2. In this project we will learn:

1. The details on C standard library printf function
2. Applying variadic functions to a big project
3. How to use git and github in a team

Prototype:

int _printf(const char *format, ...);

Compilation:

$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c

Repository:

holbertonschool-printf

Tasks:

1. Task 0 (mandatory):
"I'm not going anywhere. You can print that wherever you want to. I'm here and I'm a Spur for life"

Write a function that produces output according to a format.

Returns: the number of characters printed (excluding the null byte used to end output to strings)

Write output to stdout, the standard output stream

format is a character string.
The format string is composed of zero or more directives. See man 3 printf for more detail. You need to handle the following conversion specifiers:
c
s
%
You don't have to reproduce the buffer handling of the C library printf function
You don't have to handle the flag characters
You don't have to handle field width
You don't have to handle precision
You don't have to handle the length modifiers

2. Task 1 (mandatory):
"Education is when you read the fine print. Experience is what you get if you don't"

Handle the following conversion specifiers:

d
i
You don't have to handle the flag characters
You don't have to handle field width
You don't have to handle precision
You don't have to handle the length modifiers

3. Task 2 (mandatory):
"Just because it's in print doesn't mean it's the gospel"

Create a man page (man_3_printf) for your function.

4. Task 3 (advanced):
"With a face like mine, I do better in print"

Handle the following custom conversion specifiers:

b: the unsigned int argument is converted to binary

5. Task 4 (advanced):
"What one has not experienced, one will never understand in print"

Handle the following conversion specifiers:

u
o
x
X
You don't have to handle the flag characters
You don't have to handle field width
You don't have to handle precision
You don't have to handle the length modifiers

6. Task 5 (advanced):
"Nothing in fine print is ever good news"

Use a local buffer of 1024 chars in order to call write as little as possible.

7. Task 6 (advanced):
"My weakness is wearing too much leopard print"

Handle the following custom conversion specifier:

S : prints the string.

Non printable characters (0 < ASCII value < 32 or >= 127) are printed this way: \x, followed by the ASCII code value in hexadecimal (upper case - always 2 characters)

8. Task 7 (advanced):
"How is the world ruled and led to war? Diplomats lie to journalists and believe these lies when they see them in print"

Handle the following conversion specifier: p.

You don't have to handle the flag characters
You don't have to handle field width
You don't have to handle precision
You don't have to handle the length modifiers

9. Task 8 (advanced):
"The big print gives and the small print takes away"

Handle the following flag characters for non-custom conversion specifiers:

+
space
#

10. Task 9 (advanced):
"Sarcasm is lost in print"

Handle the following length modifiers for non-custom conversion specifiers:

l
h
Conversion specifiers to handle: d, i, u, o, x, X

11. Task 10 (advanced):
"Print some money and give it to us for the rain forests"

Handle the field width for non-custom conversion specifiers.

12. Task 11 (advanced):
"The negative is the equivalent of the composer's score, and the print the performance"

Handle the precision for non-custom conversion specifiers.

13. Task 12 (advanced):
"It's depressing when you're still around and your albums are out of print"

Handle the 0 flag character for non-custom conversion specifiers.

14. Task 13 (advanced):
"Every time that I wanted to give up, if I saw an interesting textile, print what ever, suddenly I would see a collection"

Handle the - flag character for non-custom conversion specifiers.

15. Task 14 (advanced):
"Print is the sharpest and the strongest weapon of our party"

Handle the following custom conversion specifier:

r : prints the reversed string

16. Task 15 (advanced):
"The flood of print has turned reading into a process of gulping rather than savoring"

Handle the following custom conversion specifier:

R: prints the rot13'ed string

17. Task 16 (advanced):
"*"

All the above options work well together.
