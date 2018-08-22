#include <stdlib.h>
#include <stdio.h>

unsigned int *ar_nb(unsigned int nb)
{
	unsigned int i = 0;
	unsigned int j;
	unsigned int *aints;
	j = nb;
	while (j != 0)
	{
		j /= 10;
		i++;
	}
	i--;
	aints = (unsigned int *)(malloc(sizeof(unsigned int) * i));
	j = nb;
	while (j != 0)
	{
		aints[i] = j % 10;
		j /= 10;
		i--;
	}
	return (aints);
}
int is_palindromic(unsigned int nb)
{
	unsigned int i = 0;
	unsigned int j;
	unsigned int *aa;
	j = nb;
	if (nb <= 9)
		return (0);
	while (j != 0)
	{
		j /= 10;
		i++;
	}
	i--;
	j = 0;
	aa = ar_nb(nb);
	while (j <= i)
	{
		if (aa[j] != aa[i])
		{
			return (0);
		}
		j++;
		i--;
	}
	return (1);
}
int main()
{
	unsigned int l_pal;
	unsigned int i = 0;
	unsigned int j = 0;
	while (i <= 999)
	{
		j = 0;
		while (j <= 999)
		{
			if (is_palindromic(i * j) == 1)
			{
				l_pal = i * j;
			}
			j++;
		}
		i++;
	}


	printf("%d\n",l_pal);
	return (0);
}




