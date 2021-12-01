#include<stdio.h>

char *ft_strdup(char *src);

int main()
{
	char s[] = "abcde";

	printf("%s", ft_strdup(s));
	return (0);
}
