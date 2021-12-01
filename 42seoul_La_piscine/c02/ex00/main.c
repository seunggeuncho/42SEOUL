#include<stdio.h>

char  *ft_strcpy(char *dest, char *ori);

int main()
{
	char ori[] = "we are fucked";
	char dest[]="";
	char dest1[] = "we are happy";
	int i=0;
	char *dest3;
	char *dest4;
	dest3=ft_strcpy(dest, ori);
	dest4=ft_strcpy(dest1, ori);

	for(i=0; *(dest3+i) ; i++)
	{
		printf("%c", *(dest3+i));

	}
/*	printf("\n\n");
	for (i =0;dest4[i] ; i++)
	{
		printf("%c", *(dest4+i));
	}*/
	return 0;
}
