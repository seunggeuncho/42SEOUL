#include<stdio.h>
void ft_rev_int_tab(int *n, int size);
int main(){
	int si[10]={0,1,2,3,4,5,6,7,8,9};

	ft_rev_int_tab(si, 10);
	int i=0;
	for(i=0;i<10;i++)
	{
		printf("%d", si[i]);
	}
	return 0;
}
