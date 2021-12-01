#include<stdio.h>

unsigned int ft_strlcpy(char *dest, char *src ,unsigned int size);

int main()
{
	char dest[10] ="aaaa";
	char src[20] = "asdfasdfasdfasdf";
	unsigned int i = 17;

	printf("%u", ft_strlcpy(dest, src,i));
	return 0;
}

