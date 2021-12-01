#include<stdio.h>

char **ft_split(char *str, char *charset);

int	 main()
{
	char str[]="iam a man in my house";
	char str2[] = "";
	char **sp;
	int i =0;
	int j = 0;

	sp = ft_split(str, str2);
	while (sp[i])
	{
		printf("%s",sp[i]);
		printf("\n");
		i++;
	}
	return 0;
}



