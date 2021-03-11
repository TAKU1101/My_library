#include "libft.h"
#include <ctype.h>
#include <stdio.h>

int main(void)
{
	int i;
	int sum;

	sum = 0;
	for (i = 0; i < 128; i++)
	{
		printf("%d %c %d\n", i, i, ispunct(i));
		sum += isblank(i);
	}
	printf("%d\n", sum);
}
