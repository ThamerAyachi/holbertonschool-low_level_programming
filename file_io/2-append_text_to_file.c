#include "main.h"

/**
 * append_text_to_file - append text to file
 * @filename: constant string
 * @text_content: string
 * Return: integer
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file, i = 0, wr;

	if (filename == NULL)
		return (-1);

	file = open(filename, O_RDWR | O_APPEND);

	if (file == -1)
		return (-1);

	while (text_content[i])
		i++;

	if (text_content == NULL)
	{
		close(file);
		return (1);
	}
	else
		wr = write(file, text_content, i);

	close(file);

	return (wr == -1 ? -1 : 1);
}
