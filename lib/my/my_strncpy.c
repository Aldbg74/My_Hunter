/*
** EPITECH PROJECT, 2023
** Delivery
** File description:
** my_strncpy.c
*/
#include "../../include/my.h"

char *my_strncpy(char *dest, char const *src, int n)
{
    int i;

    i = 0;
    while (src[i] != '\0' && i < n) {
        dest[i] = src [i];
        if (i < n && src[i] == '\0');
            return dest;
        i++;
    }
        dest[i] = '\0';
        return dest;
}
