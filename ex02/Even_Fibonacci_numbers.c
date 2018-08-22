#include <stdio.h>

int fibonacci(int nb)
{
	if(nb == 0)
	{
		return 0;
	}
	if (nb == 1)
	{
		return (1);
	}
	return (fibonacci(nb - 1) + fibonacci(nb - 2));
}
int main()
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (fibonacci(i) <= 4000000)
	{
		if (fibonacci(i) % 2 == 0)
		{
			j += fibonacci (i);
		}
		i++;
	}
	printf("%d\n",j);
		
	return (0);
}
