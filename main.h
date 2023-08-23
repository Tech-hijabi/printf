#ifndef MAIN_H
#define MAIN_H
#include <stdlib.h>
#include <stddef.h>
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <limits.h>
#define BUFF_SIZE 1024

int _printf(const char *format, ...);

int rep_format(char specifier, va_list list);

int _putchar(char c);

int print_string(char *str);

int hex(int n, int isUppercase);

int _putint(int n);

int _putbin(unsigned int n);

int _puthex(unsigned int n);

int _putHex(unsigned int n);

int _putoct(unsigned int n);

int _unint(unsigned int n);

int _putmem(unsigned long int n);

int print_custom_string(char *str);

char *_itoa(int value, char *buffer, int radix);

#endif
