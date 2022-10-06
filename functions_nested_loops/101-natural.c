#include <stdio.h>

int main(void)
{
	int i;
	int x = 0;

	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			x = x + i;
		}
	}
	printf("%d", x);

	return (0);
}