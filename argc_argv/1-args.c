#include "main.h"

int main(int argc, char *argv[])
{
	int i = 0;

	while (argv[i] && i < argc)
	{
		i++;
	}

	printf("%d\n", i);

	return (0);
}
