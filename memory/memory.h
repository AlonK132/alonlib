//
// Created by Alon Kamenetsky on 10/07/2025.
//

#ifndef ALONLIB_MEMORY_H
#define ALONLIB_MEMORY_H
#include <stddef.h>
void *al_memcpy(void *dest, const void *src, size_t n);   // copy n bytes
void *al_memmove(void *dest, const void *src, size_t n);  // copy with overlap
void *al_memset(void *str, int c, size_t n);              // fill with byte c
int   al_memcmp(const void *s1, const void *s2, size_t n);// compare memory
void *al_memchr(const void *s, int c, size_t n);          // find byte

#endif //ALONLIB_MEMORY_H
