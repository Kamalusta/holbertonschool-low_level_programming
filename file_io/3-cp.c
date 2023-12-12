#include "main.h"

/**
 * main - check the code
 * @ac: - nbr argument
 * @av: - arguments
 *
 * Return: always 0.
 */
int main(int ac, char **av)
{
int fd, fd1, rd;
char buf[1024];
if (ac != 3)
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
fd = open(av[1], O_RDONLY);
if (fd < 0)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
exit(98);
}
fd1 = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
while ((rd = read(fd, buf, 1024)) > 0)
if ((write(fd1, buf, rd)) != rd || fd1 < 0)
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]), exit(99);
if (rd < 0)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
exit(98);
}
if (close(fd))
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd), exit(100);
if (close(fd1))
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd1), exit(100);
return (0);
}
