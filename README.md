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
