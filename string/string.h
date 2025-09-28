//
// Created by Alon Kamenetsky on 10/07/2025.
//

#ifndef ALONLIB_STRING_H
#define ALONLIB_STRING_H
#include <stddef.h>

// Searches the first n bytes of str for the first occurrence of byte c
void *al_memchr(const void *str, int c, size_t n);

// Returns the length of the null-terminated string s
size_t al_strlen(const char *s);

#endif //ALONLIB_STRING_H
