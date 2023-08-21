#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <errno.h>
#include <fcntl.h>
#include <signal.h>


char* _strcat(char* dest, const char* src);
char* _strcpy(char* dest, char* src);
int _strcmp(char* s1, char* s2);
char* _strchr(char* s, char c);
int _strspn(char* s, char* accept);
char* _strdup(const char* s);
int _strlen(const char* s);
void _memcpy(void* newptr, void* ptr, unsigned int size);
void* _realloc(void* ptr, unsigned int old_size, unsigned int new_size);



#endif
