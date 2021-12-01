#include<stdio.h>

char *ft_strncpy(char *dest, char *src, unsigned int n);

int main()
{
	char dest[] = "                 ";
	char scr[20] = "123456789";
	unsigned int c= 3;

	printf("%s",ft_strncpy(dest,scr,c));

	return 0;
}
