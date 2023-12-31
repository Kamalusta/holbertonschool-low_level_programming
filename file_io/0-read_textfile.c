#include "main.h"

/**
 * read_textfile - check the code
 * @filename: - name of file
 * @letters: - number of written letters
 *
 * Return: number of read.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
char *buffer;
int fd, rd, wr;
buffer = malloc(letters + 1);
if (!buffer)
return (0);
if (!filename)
return (0);
fd = open(filename, O_RDONLY);
if (fd == -1)
return (0);
rd = read(fd, buffer, letters);
if (rd == -1)
return (0);
buffer[rd] = '\0';
wr = write(STDOUT_FILENO, buffer, rd);
if (wr == -1)
return (0);
close(fd);
free(buffer);
return (wr);
}
