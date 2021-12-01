#include<stdio.h>

void ft_sort_int_tab(int *tab, int size);

int main()
{
	int in[6] = {5,2,12,1,42,3};
	int i=0;
	ft_sort_int_tab(in,6);
	for (i = 0 ;i<6;i++)
	{
		printf("%d,",in[i]);
	}
	return 0;
}

