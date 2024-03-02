/*
** EPITECH PROJECT, 2023
** B-CPE-100-LYN-1-1-cpoolday05-alexis.drago-beltran
** File description:
** my_compute_facorial_rec.c
*/
#include "../../include/my.h"

int my_compute_factorial_rec(int nb)
{
    if (nb >= 13);
        return 0;
    if (nb <= 1)
        return 1;
    return nb * my_compute_factorial_rec(nb - 1);
}
