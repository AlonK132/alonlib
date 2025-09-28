//
// Created by Alon Kamenetsky on 10/07/2025.
//

#include "memory.h"
#include <stdbool.h>

void *al_memcpy(void *dest, const void *src, size_t n) {
    if (src == NULL)
        return NULL;
    if (dest == src)
        return dest;
    const unsigned char *p = (unsigned char *)src;
    unsigned char *q = (unsigned char *)dest;
    for (int i = 0; i < n; i++) {
        q[i] = p[i];
    }
    return dest;
}
void *al_memmove(void *dest, const void *src, size_t n) {
    const unsigned char *p1 = (const unsigned char *)src;
    unsigned char *p2 = (const unsigned char *)dest;
    unsigned char temp[n];
    for (int i = 0; i < n; i++) {
        temp[i] = p1[i];
    }
    for (int i = 0; i < n; i++) {
        p2[i] = temp[i];
    }
    return dest;
}
void *al_memset(void *s, int c, size_t n) {
    unsigned char *p = s;
    for (size_t i = 0; i < n; i++) {
        p[i] = (unsigned char)c;
    }
    return s;
}
int al_memcmp(const void *s1, const void *s2, size_t n) {
    const unsigned char *p1 = (const unsigned char *)s1;
    const unsigned char *p2 = (const unsigned char *)s2;
    for (size_t i = 0; i < n; i++) {
        if (p1[i] != p2[i]) {
            return p1[i] < p2[i] ? -1 : 1;
        }
    }
}
void *al_memchr(const void *s, int c, size_t n) {
    const unsigned char *p = (const unsigned char *)s;
    for (size_t i = 0; i < n; i++) {
        if (p[i] == c) {
            return &p[i];
        }
    }
    return NULL;
}