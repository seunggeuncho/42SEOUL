#include<stdio.h>

char *ft_strcapitalize(char *str);

int main()
{
	char arr[]="salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";

	printf("%s",ft_strcapitalize(arr));

	return 0;
}
