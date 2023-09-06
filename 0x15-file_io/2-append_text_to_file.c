#include "main.h"

/**
 * append_text_to_file - Append text at the end of a file.
 * @filename: Points to the name of the file.
 * @text_cont: The string added to the end of the file.
 *
 * Return: If the function fails or filename is NULL - -1.
 *         If the file does not exist the user lacks write permissions - -1.
 *         Otherwise - 1.
 */
int append_text_to_file(const char *filename, char *text_cont)
{
	int o, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_cont != NULL)
	{
		for (len = 0; text_cont[len];)
			len++;
	}

	o = open(filename, O_WRONLY | O_APPEND);
	w = write(o, text_cont, len);

	if (o == -1 || w == -1)
		return (-1);

	close(o);

	return (1);
}
