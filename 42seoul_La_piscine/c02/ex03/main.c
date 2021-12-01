#include<stdio.h>

int ft_str_is_numeric(char *a);
int main()
{
	char i[20] ="abfdserw";
	char j[] ="1234";
	char t[] ="1mwers";
	char g[]= " ";

	printf("%d",ft_str_is_numeric(i));
	printf("%d",ft_str_is_numeric(j));
	printf("%d",ft_str_is_numeric(t));
	printf("%d",ft_str_is_numeric(g));

	return 0;
}

