#include "main.h"

/**
 * main - check the code
 * @ac: - nbr argument
 * @av: - arguments
 *
 */
int main(int ac, char **av)
{
int fd, fd1, rd, wr;
char *buf = malloc(strlen(av[1]));
if (ac != 3)
{
exit(97);
dprintf(1,"Usage: cp file_from file_to\n");
}
fd = open(av[1], O_RDONLY);
rd = read(fd, buf, 1024);
if (!av[1] || fd == -1 || rd == -1)
{
exit(98);
dprintf(1, "Error: Can't read from file %s\n", av[1]);
}
fd1 = open(av[2], O_WRONLY | O_TRUNC | O_CREAT, 0664);
wr = write(fd1, buf, 1024);
if (fd1 == -1 || wr == -1)
{
exit(99);
dprintf(1, "Error: Can't write to  %s\n", av[2]);
}
if (close(fd) == -1)
{
exit(100);
dprintf(1, "Error: Can't close fd %d\n", fd);
}
return (0);
}
