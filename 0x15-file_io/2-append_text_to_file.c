#include "main.h"

/**
 * append_text_to_file - function to append text at the end
 * @filename: file name
 * @text_content: string to be written on the file
 *
 * Return: (1) on success or (-1) on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, wr, i = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		while (text_content[i])
			i++;
	}
	fd = open(filename,  O_WRONLY | O_APPEND);
	wr = write(fd, text_content, i);
	if (wr == -1 || fd == -1)
		return (-1);
	close(fd);
	return (1);
}
