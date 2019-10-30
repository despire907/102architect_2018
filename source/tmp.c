/*
** EPITECH PROJECT, 2018
** 102architect_2018
** File description:
** architect
*/

#include "../include/architect.h"

void h_display(void)
{
    printf("USAGE\n"
           "\t./102architect x y transfo1 arg11 [arg12] "
           "[transfo2 arg12 [arg22]] ...\n"
           "\nDESCRIPTION\n"
           "\tx\tabscissa of the original point\n"
           "\ty\tordinate of the original point\n"
           "\n\ttransfo arg1 [arg2]\n"
           "\t-t i j\ttranslation along vector (i, j)\n"
           "\t-z m n\tscaling by factors m (x-axis) and n (y-axis)\n"
           "\t-r d\trotation centered in O by a d degree angle\n"
           "\t-s d\treflection over the axis passing "
           "through O with an inclination\n"
           "\t\tangle of d degrees\n");
}
