/*
** EPITECH PROJECT, 2018
** 102architect_2018
** File description:
** architect
*/

#include "../include/architect.h"

void r_flag(double x, double y, char **arg)
{
    double d = atof(arg[4]);
    d = (d / 180) * M_PI;
    double count_1 = 0;
    double count_2 = 0;

    printf("%0.2f\t%0.2f\t0.00\n"
           "%0.2f\t%0.2f\t0.00\n"
           "0.00\t0.00\t1.00\n", cos(d), -sin(d), sin(d), cos(d));
    count_1 = (cos(d) * x) + (-sin(d) * y);
    count_2 = (sin(d) * x) + (cos(d) * y);
    printf("(%0.f, %0.f) => (%0.2f, %0.2f)\n", x, y, count_1, count_2);
}

void s_flag(double x, double y, char **arg)
{
    double d = atof(arg[4]);
    d = (d / 180) * M_PI;
    double m1 = cos(2 * d);
    double m2 = sin(2 * d);
    double m3 = -cos(2 * d);
    double x1 = (m1 * x) + (m2 * y);
    double y1 = (m2 * x) + (m3 * y);

    printf("Reflection over an axis with an "
           "inclination angle of %.0f degrees\n", d);


    printf("%.2f\t %.2f\t 0.00\n"
           "%.2f\t %.2f\t 0.00\n"
           "0.00\t 0.00\t 1.00\n", m1, m2, m2, m3);

    printf("(%.0f, %.0f) => (%.2f, %.2f)\n", x, y, x1, y1);
}

void z_flag(double x, double y, char **arg)
{
    double m = atof(arg[4]);
    double n = atof(arg[5]);

    printf("Scaling by factors %.0f and %.0f\n", m, n);

    printf("%.2f\t 0.00\t 0.00\n"
           "0.00\t %.2f\t 0.00\n"
           "0.00\t 0.00\t 1.00\n", m, n);
    m = x * m;
    n = y * n;
    printf("(%.0f, %.0f) => (%.2f, %.2f)\n", x, y, m, n);
}


void t_flag(double x, double y, char **arg)
{
    double i = atof(arg[4]);
    double j = atof(arg[5]);

    printf("Translation along vector (%.0f, %.0f)\n", i, j);
    printf("1.00\t 0.00\t %-7.2f\n"
           "0.00\t 1.00\t %-7.2f\n"
           "0.00\t 0.00\t 1.00\n", i, j);
    i = x + i;
    j = y + j;
    printf("(%.0f, %.0f) => (%.2f, %.2f)\n", x, y, i, j);
}

int main(int ac, char **av)
{
    if (ac == 2 && !strcmp(av[1], "-h")) {
        h_display();
        return (0);
    }else if (ac != 2 && !strcmp(av[1], "-h")) {
        printf("-h doesn't need argument\n");
        return (84);
    }

    double x = atof(av[1]);
    double y = atof(av[2]);

    if (ac == 6 && !strcmp(av[3], "-t")) {
        t_flag(x, y, av);
    } else if (ac != 6 && !strcmp(av[3], "-t")){
        printf("-t need 5 argument\n");
        return (84);
    }

    if (ac == 6 && !strcmp(av[3], "-z")) {
        z_flag(x, y, av);
    } else if (ac != 6 && !strcmp(av[3], "-z")) {
        printf("-z need 5 argument\n");
        return (84);
    }

    if (ac == 5 && !strcmp(av[3], "-s")) {
        s_flag(x, y, av);
    } else if (ac != 5 && !strcmp(av[3], "-s")) {
        printf("-s need 4 argument\n");
        return (84);
    }

    if (ac == 5 && !strcmp(av[3], "-r")) {
        r_flag(x, y, av);
    } else if (ac != 5 && !strcmp(av[3], "-r")) {
        printf("-r need 4 argument\n");
        return (84);
    }
    return (0);
}