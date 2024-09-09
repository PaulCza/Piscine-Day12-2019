/*
** EPITECH PROJECT, 2019
** infini
** File description:
** project_cat
*/

#include <unistd.h>
#include <fcntl.h>
#include <errno.h>

int infini()
{
    int   net;
    char  buffer[50000];

    while (1)
    {
        net = read(0, buffer, 50000);
        buffer[net] = '\0';
        if (net == 0)
            return (0);
        my_putstr(buffer);
    }
}
