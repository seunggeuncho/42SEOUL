#include<stdio.h>

void	ft_putnbr_base(int nbr, char *base);

int main()
{
	ft_putnbr_base(100, "0123456789abcedf");
	printf("\n");
	ft_putnbr_base(-1000, "0");
	ft_putnbr_base(11, "1");
	ft_putnbr_base(12, "+1234");


	return 0;
}
