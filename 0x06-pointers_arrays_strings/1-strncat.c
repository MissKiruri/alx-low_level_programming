#include "main.h"
#include <string.h>
#include <stdio.h>
/**
* _strncat - Entry point and function name
*
* @dest: first variable
*
* @src: second variable
*
* @n: third variable
*
* This function concatenates two strings
*
* Return: char
**/
char *_strncat(char *dest, char *src, int n)
{
/**
 * char *hold = dest;
*while (*dest != '\0')
*{
*dest++;
*}
* while (*src == n)
*{
*dest = *src;
*dest++;
*src = src + n;
*src++;
*}
*dest = '\0';
*return (hold);
**/
char *_strncat(char *dest, char *src, int n)
{
int dest_len, i;
for (dest_len = 0; dest[dest_len] != '\0'; dest_len++)
;
for (i = 0; i < n && src[i] != '\0'; i++)
dest[dest_len + i] = src[i];
/**
*should end with a end of string char
**/
dest[dest_len + i] = '\0';
return (dest);
}
