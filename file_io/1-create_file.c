#include "main.h"

/**
 * create_file - check the code
 * @filename: - file
 * @text_content: - contetnt of text
 *
 * Return: Always 0.
 */
int create_file(const char *filename, char *text_content)
{
int fd, wr;
if (!filename)
return (-1);
fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
if (text_content)
wr = write(fd, text_content, sizeof(text_content));
if (fd == -1 || wr == -1)
return (-1);
return (1);
}
