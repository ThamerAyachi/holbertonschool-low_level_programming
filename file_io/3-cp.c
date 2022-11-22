#include <stdio.h>
#include <stdio.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * _close - close file
 * @file: integer
 */
void _close(int file)
{
	int close_err;

	close_err = close(file);

	if (close_err == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", file);
		exit(100);
	}
}

/**
 * main - copy file
 * @ac: integer
 * @av: list of string
 * Return: integer
 */
int main(int ac, char **av)
{
	char *str;
	int o, r, file, w, len = 0;

	if (ac != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}

	str = malloc(sizeof(char) * 1024 * 8);
	if (str == NULL)
		return (-1);

	o = open(av[1], O_RDONLY);
	r = read(o, str, 1024 * 8);

	if (o == -1 || r == -1)
	{
		free(str);
		dprintf(1, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}

	file = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	while (str[len] != '\0')
		len++;
	w = write(file, str, len);
	if (file == -1 || w == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}
	_close(file);

	return (0);
}
