#include<stdio.h>

void ft_putstr_non_printable(char *str);

int main()
{
	char str[30] = "Coucou\btu vas bien ?";
	ft_putstr_non_printable(str);

	return 0;
}
