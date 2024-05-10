/*
** EPITECH PROJECT, 2023
** B-CPE-100-LYN-1-1-cpoolday04-alexis.drago-beltran
** File description:
** my_strlen.c
*/
#include "../../include/my.h"
#include <unistd.h>

int my_strlen(char const *str) 
{
    int leght = 0;

    for (int i = 0; str[i] != '\0' ; i++) {
        leght++;
    }
    return leght;
}
