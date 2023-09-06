#include "main.h"

/**
 * create_file - Creates a file.
 * @filename: Point to the name of the file to create.
 * @text_cont: Point to a string to write to the file.
 *
 * Return: If the function fails - -1.
 *         Otherwise - 1.
 */
int create_file(const char *filename, char *text_cont)
{
	int fd, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_cont != NULL)
	{
		for (len = 0; text_cont[len];)
			len++;
	}

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(fd, text_cont, len);

	if (fd == -1 || w == -1)
		return (-1);

	close(fd);

	return (1);
}
