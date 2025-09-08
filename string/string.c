//
// Created by Alon Kamenetsky on 10/07/2025.
//

#include "string.h"
void *al_memchr(const void *str, int c, size_t n){
    if(!str)
        return NULL;
    const unsigned char *p = (const unsigned char *)str;
    unsigned char target = (unsigned char)c;
    for(size_t i = 0; i < n; i++){
        if(p[i] == target){
            return (void*)&p[i];
        }
    }
    return NULL;
}
size_t al_strlen(const char *s){
    size_t length = 0;
    if(s == NULL)
        return length;
    while(*s != '\0'){
        length++;
        s++;
    }
    return length;
}