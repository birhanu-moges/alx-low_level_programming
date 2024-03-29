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
	int fd, wr, i = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		while (text_content[i])
			i++;
	}
	fd = open(filename, O_CREAT | O_TRUNC | O_RDWR, 0600);
	wr = write(fd, text_content, i);
	if (wr == -1 || fd == -1)
		return (-1);
	close(fd);
	return (1);
}
