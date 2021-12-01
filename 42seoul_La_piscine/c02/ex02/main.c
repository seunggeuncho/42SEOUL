#include<stdio.h>

int ft_str_is_alpha(char *a);
int main()
{
	char i[20] ="abfdserw";
	char j[] ="";
	char t[] ="1mwers";
	char g[]= " ";

	printf("%d",ft_str_is_alpha(i));
	printf("%d",ft_str_is_alpha(j));
	printf("%d",ft_str_is_alpha(t));
	printf("%d",ft_str_is_alpha(g));

	return 0;
}

