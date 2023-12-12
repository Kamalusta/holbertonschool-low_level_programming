#include "main.h"

/**
 * append_text_to_file - check the code
 * @filename: - file
 * @text_content: - content
 *
 * Return: Always 0.
 */
int append_text_to_file(const char *filename, char *text_content)
{
int fd, wr;
if (!filename)
return (-1);
fd = open(filename, O_WRONLY | O_APPEND);
if (fd == -1)
return (-1);
if (text_content)
wr = write(fd, text_content, strlen(text_content));
if (wr == -1)
return (-1);
return (1);
}
