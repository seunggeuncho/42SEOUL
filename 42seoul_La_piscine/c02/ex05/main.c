#include<stdio.h>

int ft_str_is_uppercase(char *c);

int main()
{
	char i[] = "123$*ab";
	char j[] = "asdfsDDD";
	char t[] = "ASDF";
	char c[] = "";
	char n[] = " ";

	printf("%d",ft_str_is_uppercase(i));
	printf("%d",ft_str_is_uppercase(j));
	printf("%d",ft_str_is_uppercase(t));
	printf("%d",ft_str_is_uppercase(c));
	printf("%d",ft_str_is_uppercase(n));

	return 0;
}
