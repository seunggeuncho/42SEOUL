#include<stdio.h>

void ft_div_mod(int a, int b, int *div, int *mod);

int main()
{

	int c;
	int d;

	ft_div_mod(10 , 3, &c, &d);
	printf("div:%d, mod:%d", c , d);
	return 0;
}
