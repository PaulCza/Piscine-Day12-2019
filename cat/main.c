/*
** EPITECH PROJECT, 2019
** main
** File description:
** qdh
*/

#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <errno.h>

int main(int argc, char **argv)
{
    int err; int variable; int fuck;int yolo;
    char buffer[50000]; 
    variable = 1;

    if (argc == 1)
        infini();
    while (variable < argc) {
        fuck = open(argv[variable], O_RDONLY);
        if (fuck == -1)
            err = 1;
        yolo = read(fuck, buffer, 50000);
        buffer[yolo] = '\0';
        if (yolo == -1)
            err = 1;
        if (err == 1)
            error(argv, variable, errno);
        else
            my_putstr(buffer);
        variable = variable + 1;
    }
}
