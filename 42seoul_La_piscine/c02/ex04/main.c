#include<stdio.h>

int ft_str_is_lowercase(char *c);

int main()
{
	char i[] = "123$*ab";
	char j[] = "asdfsDDD";
	char t[] = "asdf";
	char c[] = "";
	char n[] = " ";

	printf("%d",ft_str_is_lowercase(i));
	printf("%d",ft_str_is_lowercase(j));
	printf("%d",ft_str_is_lowercase(t));
	printf("%d",ft_str_is_lowercase(c));
	printf("%d",ft_str_is_lowercase(n));

	return 0;
}
