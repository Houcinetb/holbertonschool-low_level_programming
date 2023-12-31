#include "main.h"

/**
 * create_file - create a new file.
 * @filename: pointer to the string to print.
 * @text_content: text to copy.
 *
 * Return: 1
*/

int create_file(const char *filename, char *text_content)
{
	int fd, w;

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);
	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}
	if (filename == NULL)
		return (-1);

	w = write(fd, text_content, strlen(text_content));

	if (w == -1)
		return (-1);
	close(fd);
	return (1);
}
