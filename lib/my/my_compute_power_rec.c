/*
** EPITECH PROJECT, 2023
** B-CPE-100-LYN-1-1-cpoolday05-alexis.drago-beltran
** File description:
** my_compute_power_rec.c
*/
#include "../../include/my.h"

int my_compute_power_rec(int nb, int p)
{
    if (nb <= 1)
        return 0;
    else
        return nb * my_compute_factorial_rec(nb * p);
}
