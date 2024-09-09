/*
** EPITECH PROJECT, 2019
** error
** File description:
** project_cat
*/

#include <unistd.h>
#include <fcntl.h>
#include <errno.h>

void error(char **argv, int i, int errsv)
{
    if (argv[i][0] == '-')
        infini();
    else if (errsv == EACCES) {
        write(2, "cat: ", 5);
        write(2, argv[i], my_strlen(argv[i]));
        write(2, ": Permission denied\n", 20);
    }
    else if (errsv == ENOENT) {
        write(2, "cat: ", 5);
        write(2, argv[i], my_strlen(argv[i]));
        write(2, ": No such file or directory\n", 28);
    }
    else if (errsv == EISDIR) {
        write(2, "cat: ", 5);
        write(2, argv[i], my_strlen(argv[i]));
        write(2, ": Is a directory\n", 17);
    }
}
