#include<stdio.h>

void ft_swap(int *n, int *b);

int main()
{
	int a=0;
	int b=2;
	printf("a= %d,b=%d", a, b);
	ft_swap(&a, &b);
	printf("swap   a= %d,b= %d",a, b);

	return 0;
}
