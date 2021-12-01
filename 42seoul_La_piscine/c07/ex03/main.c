#include<stdio.h>

char *ft_strjoin(int size, char **strs, char *sep);

int main()
{
	int i = 0;

	char **str;
	char *s1 = "1234";
	char *s2 = "5678";
	char *s3 = "91011";
	char *result;
	str[0] = s1;
	str[1] = s2;
	str[2] = s3;
	char *sep = "num";

	result = ft_strjoin(3, str, sep);
	while(*result)
	{
		printf("%c", *result);
		result++;
	}
	return 0;
}
