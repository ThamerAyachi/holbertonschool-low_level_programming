#include "main.h"

/**
 * create_file - create new file
 * @filename: constant string
 * @text_content: string
 * Return: (-1) or (1)
 */
int create_file(const char *filename, char *text_content)
{
	int file, len = 0, wr;

	if (filename == NULL)
		return (-1);
	file = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (file == -1)
		return (-1);

	if (text_content == NULL)
	{
		close(file);
		return (1);
	}

	while (text_content[len] != '\0')
		len++;

	wr = write(file, text_content, len);
	if (close(file) == -1)
		return (-1);
	return (wr == -1 ? -1 : 1);
}
