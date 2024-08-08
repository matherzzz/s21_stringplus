#ifndef S21_STRING_H
#define S21_STRING_H

#include <math.h>
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

#define s21_NULL (void *)0
#define s21_size_t unsigned long

struct flags {
  char flag_plus;
  char flag_minus;
  char flag_space;
  char flag_length;
  char flag_width;
  char flag_dot;
};

void *s21_memchr(const void *str, int c, s21_size_t n);
int s21_memcmp(const void *str1, const void *str2, s21_size_t n);
void *s21_memcpy(void *dest, const void *src, s21_size_t n);
void *s21_memset(void *str, int c, s21_size_t n);
char *s21_strncat(char *dest, const char *src, s21_size_t n);
char *s21_strchr(const char *str, int c);
int s21_strncmp(const char *str1, const char *str2, s21_size_t n);
char *s21_strcpy(char *dest, const char *src);
char *s21_strncpy(char *dest, const char *src, s21_size_t n);
s21_size_t s21_strcspn(const char *str1, const char *str2);
char *s21_strerror(int errnum);
s21_size_t s21_strlen(const char *str);
char *s21_strpbrk(const char *str1, const char *str2);
char *s21_strrchr(const char *str, int c);
char *s21_strstr(const char *haystack, const char *needle);
char *s21_strtok(char *str, const char *delim);

int s21_sprintf(char *str, const char *format, ...);

void *s21_to_upper(const char *str);
void *s21_to_lower(const char *str);
void *s21_insert(const char *src, const char *str, s21_size_t start_index);
void *s21_trim(const char *src, const char *trim_chars);

s21_size_t s21_itoa(char **number, long long n, int precision,
                    struct flags *flags);
s21_size_t s21_uitoa(char **number, unsigned long long n, int precision);
s21_size_t s21_itoa_reverse(char **number, long long n);
s21_size_t s21_uitoa_reverse(char **number, unsigned long long n);
s21_size_t s21_ftoa(char **number, double n, int precision,
                    struct flags *flags);
void s21_reverse(char *s);
s21_size_t s21_read_number(const char *c, int *number);
s21_size_t s21_read_flags(const char *c, struct flags *flags, int *width,
                          int *precision);
void s21_fill_spaces(char *str, int size);
void s21_write_string(char **str, char *s, int width, char flag_minus,
                      s21_size_t *length);
void s21_flag_du_work(char c, unsigned long *un, long *n, struct flags *flags,
                      va_list *args);

#endif  // S21_STRING_H