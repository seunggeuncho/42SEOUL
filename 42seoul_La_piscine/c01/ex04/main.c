#include<stdio.h>

void ft_ultimate_div_mod(int *a, int *b);

int main()
{
	int a=10;
	int b=3;
	ft_ultimate_div_mod(&a,&b);

	printf("div: %d, mod : %d", a, b);

	return 0;
}
