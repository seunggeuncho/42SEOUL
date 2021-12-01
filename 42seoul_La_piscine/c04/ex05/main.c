#include<stdio.h>

int ft_atoi_base(char *str, char *base);

int main()
{
	printf("%d", ft_atoi_base("  ++-a1","0123456789abcdef"));
	printf("\n");
	printf("%d", ft_atoi_base(" -a1 a", "0123456789abcdef"));
	printf("\n");
	printf("%d", ft_atoi_base("   ---a 2", "0123456789abcdef"));
	printf("\n");
	printf("%d", ft_atoi_base("abcd", "a"));

	return 0;
}
