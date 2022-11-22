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
	char str[1024];
	int fileF, fileT, w, fileFr;

	if (ac != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fileF = open(av[1], O_RDONLY);
	if (fileF == -1)
	{
		dprintf(1, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	fileT = open(av[2], O_WRONLY | O_TRUNC | O_CREAT, 0664);
	if (fileT == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}
	while (fileFr >= 1024)
	{
		fileFr = read(fileF, str, 1024);
		if (fileFr == -1)
		{
			dprintf(2, "Error: Can't read from file %s\n", av[1]);
			exit(98);
		}
		w = write(fileT, str, fileFr);
		if (w == -1)
		{
			dprintf(2, "Error: Can't write to %s\n", av[2]);
			exit(99);
		}
	}
	_close(fileF);
	_close(fileT);
	return (0);
}
