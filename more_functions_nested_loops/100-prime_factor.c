#include <stdio.h>

int main(void)
{
	int n = 1231952;
	int a = 1231952;
	int i, j, t;

	for (i = 2; i <= a; i++)
	{
		t = 0;
		for (j = 0; j < i; j++)
		{
			if (j % i == 0 && j != i && j != 0 && j != 1)
			{
				t++;
			}
		}

		if (t == 0 && n % i == 0)
		{
			printf("%d", i);
			putchar(',');
			putchar(' ');
			n = n / i;
		}
	}

	return (0);
}

int getPrim(int n)
{
	return (0);
}
