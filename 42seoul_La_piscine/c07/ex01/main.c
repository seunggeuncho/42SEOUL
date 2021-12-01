#include<stdio.h>

int *ft_range(int min, int max);

int main()
{

	int *p;

	p = ft_range(3, 7);
	while (*p)
	{
		printf("%d", *p);
		p++;
	}
	return 0;
}

