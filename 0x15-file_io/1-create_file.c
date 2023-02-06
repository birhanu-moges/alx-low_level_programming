#include "main.h"

/**
 * create_file - function to create new file
 * @filename: file name
 * @text_content: string to be written on the file
 *
 * Return: (1) on success or (0) on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd, i = 0;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_	CREAT | O_TRUNC | O_WRONLY, 0600);
	if (fd == -1)
		return (-1);
	while (text_content)
		i++;
	if (text_content == NULL)
	{
		close(fd);
		return (-1);
	}
	write(fd, text_content, i);
	close(fd);
	return (1);
}
