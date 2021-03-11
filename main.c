#include "libft.h"
#include <ctype.h>
#include <stdio.h>

int main(void)
{
	int i;
	int sum;

	sum = 0;
	for (i = 0; i < 256; i++)
	{
		printf("%d %d\n", i, isblank(i));
		sum += isblank(i);
	}
	printf("%d\n", sum);
}
