#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void *malloc_checked(unsigned int b);
void *_calloc(unsigned int nmemb, unsigned int size);
char *string_nconcat(char *s1, char *s2, unsigned int n);

#endif