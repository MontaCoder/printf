#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

int printf_int(va_list args);
int printf_dec(va_list args);
int _strlenc(const char *s);
int _strlen(char *s);
int printf_string(va_list val);
int printf_37(void);
int _printf(const char *format, ...);
int printf_char(va_list val);
int printf_bin(va_list val);
int printf_unsigned(va_list args);
int printf_oct(va_list list);
int printf_hex(va_list val);
int printf_HEX(va_list val);

#endif
