#include<stdio.h>

char *ft_convert_base(char *nbr, char *base_from, char *base_to);

int main()
{
	printf("%s", ft_convert_base("    -----80000000", "0123456789abcdef", "0123456789"));
	printf("\n");
	printf("%s", ft_convert_base("     7fffffff", "0123456789abcdef", "0123456789"));
	return (0);
}
